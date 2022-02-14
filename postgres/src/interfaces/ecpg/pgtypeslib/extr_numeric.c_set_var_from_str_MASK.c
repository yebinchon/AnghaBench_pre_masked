
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weight; scalar_t__ dscale; scalar_t__* digits; int ndigits; scalar_t__ rscale; void* sign; } ;
typedef TYPE_1__ numeric ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;
 long FUNC_5 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_6(char *VAR_6, char **VAR_7, numeric *VAR_8)
{
 bool VAR_9 = 0;
 int VAR_10 = 0;

 VAR_5 = 0;
 *VAR_7 = VAR_6;
 while (*(*VAR_7))
 {
  if (!FUNC_2((unsigned char) *(*VAR_7)))
   break;
  (*VAR_7)++;
 }

 if (FUNC_3(*VAR_7, "NaN", 3) == 0)
 {
  *VAR_7 += 3;
  VAR_8->sign = VAR_1;


  while (*(*VAR_7))
  {
   if (!FUNC_2((unsigned char) *(*VAR_7)))
   {
    VAR_5 = VAR_4;
    return -1;
   }
   (*VAR_7)++;
  }

  return 0;
 }

 if (FUNC_0(VAR_8, FUNC_4((*VAR_7))) < 0)
  return -1;
 VAR_8->weight = -1;
 VAR_8->dscale = 0;
 VAR_8->sign = VAR_3;

 switch (*(*VAR_7))
 {
  case '+':
   VAR_8->sign = VAR_3;
   (*VAR_7)++;
   break;

  case '-':
   VAR_8->sign = VAR_2;
   (*VAR_7)++;
   break;
 }

 if (*(*VAR_7) == '.')
 {
  VAR_9 = 1;
  (*VAR_7)++;
 }

 if (!FUNC_1((unsigned char) *(*VAR_7)))
 {
  VAR_5 = VAR_4;
  return -1;
 }

 while (*(*VAR_7))
 {
  if (FUNC_1((unsigned char) *(*VAR_7)))
  {
   VAR_8->digits[VAR_10++] = *(*VAR_7)++ - '0';
   if (!VAR_9)
    VAR_8->weight++;
   else
    VAR_8->dscale++;
  }
  else if (*(*VAR_7) == '.')
  {
   if (VAR_9)
   {
    VAR_5 = VAR_4;
    return -1;
   }
   VAR_9 = 1;
   (*VAR_7)++;
  }
  else
   break;
 }
 VAR_8->ndigits = VAR_10;


 if (*(*VAR_7) == 'e' || *(*VAR_7) == 'E')
 {
  long VAR_11;
  char *VAR_12;

  (*VAR_7)++;
  VAR_11 = FUNC_5(*VAR_7, &VAR_12, 10);
  if (VAR_12 == (*VAR_7))
  {
   VAR_5 = VAR_4;
   return -1;
  }
  (*VAR_7) = VAR_12;
  if (VAR_11 >= VAR_0 / 2 || VAR_11 <= -(VAR_0 / 2))
  {
   VAR_5 = VAR_4;
   return -1;
  }
  VAR_8->weight += (int) VAR_11;
  VAR_8->dscale -= (int) VAR_11;
  if (VAR_8->dscale < 0)
   VAR_8->dscale = 0;
 }


 while (*(*VAR_7))
 {
  if (!FUNC_2((unsigned char) *(*VAR_7)))
  {
   VAR_5 = VAR_4;
   return -1;
  }
  (*VAR_7)++;
 }


 while (VAR_8->ndigits > 0 && *(VAR_8->digits) == 0)
 {
  (VAR_8->digits)++;
  (VAR_8->weight)--;
  (VAR_8->ndigits)--;
 }
 if (VAR_8->ndigits == 0)
  VAR_8->weight = 0;

 VAR_8->rscale = VAR_8->dscale;
 return 0;
}

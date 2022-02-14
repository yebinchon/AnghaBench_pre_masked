
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static const char *
FUNC_5(const char *VAR_2, int VAR_3,
      char *VAR_4, int *VAR_5, int *VAR_6)
{
 const char *VAR_7 = VAR_2;
 const char *VAR_8;
 char *VAR_9 = VAR_4;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 bool VAR_12 = 0;
 int VAR_13;







 while (VAR_7 - VAR_2 < VAR_3)
 {
  if (VAR_12)
  {
   if (FUNC_2(VAR_7))
    break;
   VAR_12 = 0;
   VAR_10 = 0;
  }
  else
  {
   if (FUNC_0(VAR_7))
    VAR_12 = 1;
   else if (FUNC_1(VAR_7))
    VAR_10 = 1;
   else if (FUNC_2(VAR_7))
    break;
   else
    VAR_10 = 0;
  }
  VAR_7 += FUNC_4(VAR_7);
 }




 if (VAR_7 - VAR_2 >= VAR_3)
  return ((void*)0);





 *VAR_6 = 0;
 if (!VAR_10)
 {
  if (VAR_0 > 0)
  {
   *VAR_9++ = ' ';
   (*VAR_6)++;
   if (VAR_0 > 1)
   {
    *VAR_9++ = ' ';
    (*VAR_6)++;
   }
  }
 }





 VAR_8 = VAR_7;
 while (VAR_8 - VAR_2 < VAR_3)
 {
  VAR_13 = FUNC_4(VAR_8);
  if (VAR_12)
  {
   if (FUNC_2(VAR_8))
   {
    FUNC_3(VAR_9, VAR_8, VAR_13);
    (*VAR_6)++;
    VAR_9 += VAR_13;
   }
   else
   {






    VAR_8--;
    break;
   }
   VAR_12 = 0;
  }
  else
  {
   if (FUNC_0(VAR_8))
    VAR_12 = 1;
   else if (FUNC_1(VAR_8))
   {
    VAR_11 = 1;
    break;
   }
   else if (FUNC_2(VAR_8))
   {
    FUNC_3(VAR_9, VAR_8, VAR_13);
    (*VAR_6)++;
    VAR_9 += VAR_13;
   }
   else
    break;
  }
  VAR_8 += VAR_13;
 }





 if (!VAR_11)
 {
  if (VAR_1 > 0)
  {
   *VAR_9++ = ' ';
   (*VAR_6)++;
   if (VAR_1 > 1)
   {
    *VAR_9++ = ' ';
    (*VAR_6)++;
   }
  }
 }

 *VAR_5 = VAR_9 - VAR_4;
 return VAR_8;
}

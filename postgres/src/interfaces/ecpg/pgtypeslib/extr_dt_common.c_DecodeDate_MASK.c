
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mon; int tm_year; } ;
typedef int fsec_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,int,int*,struct tm*,int *,int*,int) ;
 int FUNC_2 (int,char*,int*) ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(char *VAR_6, int VAR_7, int *VAR_8, struct tm *VAR_9, bool VAR_10)
{
 fsec_t VAR_11;

 int VAR_12 = 0;
 int VAR_13,
    VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 0;
 int VAR_17,
    VAR_18,
    VAR_19 = 0;
 char *VAR_20[VAR_4];


 while (*VAR_6 != '\0' && VAR_12 < VAR_4)
 {

  while (!FUNC_3((unsigned char) *VAR_6))
   VAR_6++;

  VAR_20[VAR_12] = VAR_6;
  if (FUNC_5((unsigned char) *VAR_6))
  {
   while (FUNC_5((unsigned char) *VAR_6))
    VAR_6++;
  }
  else if (FUNC_4((unsigned char) *VAR_6))
  {
   while (FUNC_4((unsigned char) *VAR_6))
    VAR_6++;
  }


  if (*VAR_6 != '\0')
   *VAR_6++ = '\0';
  VAR_12++;
 }







 *VAR_8 = 0;


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
 {
  if (FUNC_4((unsigned char) *VAR_20[VAR_13]))
  {
   VAR_17 = FUNC_2(VAR_13, VAR_20[VAR_13], &VAR_18);
   if (VAR_17 == VAR_3)
    continue;

   VAR_19 = FUNC_0(VAR_17);
   switch (VAR_17)
   {
    case 128:
     VAR_9->tm_mon = VAR_18;
     break;

    case 129:
     VAR_15 = (VAR_18 == VAR_0);
     break;

    default:
     return -1;
   }
   if (VAR_7 & VAR_19)
    return -1;

   VAR_7 |= VAR_19;
   *VAR_8 |= VAR_19;


   VAR_20[VAR_13] = ((void*)0);
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++)
 {
  if (VAR_20[VAR_13] == ((void*)0))
   continue;

  if ((VAR_14 = FUNC_6(VAR_20[VAR_13])) <= 0)
   return -1;

  if (FUNC_1(VAR_14, VAR_20[VAR_13], VAR_7, &VAR_19, VAR_9, &VAR_11, &VAR_16, VAR_10) != 0)
   return -1;

  if (VAR_7 & VAR_19)
   return -1;

  VAR_7 |= VAR_19;
  *VAR_8 |= VAR_19;
 }

 if ((VAR_7 & ~(FUNC_0(VAR_1) | FUNC_0(VAR_5))) != VAR_2)
  return -1;


 if (VAR_15)
 {
  if (VAR_9->tm_year > 0)
   VAR_9->tm_year = -(VAR_9->tm_year - 1);
  else
   return -1;
 }
 else if (VAR_16)
 {
  if (VAR_9->tm_year < 70)
   VAR_9->tm_year += 2000;
  else if (VAR_9->tm_year < 100)
   VAR_9->tm_year += 1900;
 }

 return 0;
}

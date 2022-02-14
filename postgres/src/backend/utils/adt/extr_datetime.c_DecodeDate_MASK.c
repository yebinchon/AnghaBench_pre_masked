
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int tm_mon; } ;
typedef int fsec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int,int*,struct pg_tm*,int *,int*) ;
 int FUNC_2 (int,char*,int*) ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(char *VAR_6, int VAR_7, int *VAR_8, bool *VAR_9,
     struct pg_tm *VAR_10)
{
 fsec_t VAR_11;
 int VAR_12 = 0;
 int VAR_13,
    VAR_14;
 int VAR_15;
 bool VAR_16 = 0;
 int VAR_17,
    VAR_18,
    VAR_19 = 0;
 char *VAR_20[VAR_4];

 *VAR_8 = 0;


 while (*VAR_6 != '\0' && VAR_12 < VAR_4)
 {

  while (*VAR_6 != '\0' && !FUNC_3((unsigned char) *VAR_6))
   VAR_6++;

  if (*VAR_6 == '\0')
   return VAR_1;

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
     VAR_10->tm_mon = VAR_18;
     VAR_16 = 1;
     break;

    default:
     return VAR_1;
   }
   if (VAR_7 & VAR_19)
    return VAR_1;

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
   return VAR_1;

  VAR_15 = FUNC_1(VAR_14, VAR_20[VAR_13], VAR_16, VAR_7,
        &VAR_19, VAR_10,
        &VAR_11, VAR_9);
  if (VAR_15)
   return VAR_15;

  if (VAR_7 & VAR_19)
   return VAR_1;

  VAR_7 |= VAR_19;
  *VAR_8 |= VAR_19;
 }

 if ((VAR_7 & ~(FUNC_0(VAR_0) | FUNC_0(VAR_5))) != VAR_2)
  return VAR_1;



 return 0;
}

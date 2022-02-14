
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int numeric ;
typedef int decimal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,int *) ;
 char* FUNC_3 (char const*,int) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char*) ;

int
FUNC_7(const char *VAR_7, int VAR_8, decimal *VAR_9)
{
 char *VAR_10;
 int VAR_11 = 0;
 numeric *VAR_12;

 FUNC_6(VAR_0, (char *) VAR_9);
 if (FUNC_5(VAR_1, VAR_7))
  return 0;

 VAR_10 = FUNC_3(VAR_7, VAR_8);

 if (!VAR_10)
  VAR_11 = VAR_5;
 else
 {
  VAR_6 = 0;
  VAR_12 = FUNC_1(VAR_10, ((void*)0));
  if (!VAR_12)
  {
   switch (VAR_6)
   {
    case 128:
     VAR_11 = VAR_4;
     break;
    case 129:
     VAR_11 = VAR_3;
     break;
    default:
     VAR_11 = VAR_2;
     break;
   }
  }
  else
  {
   int VAR_13 = FUNC_2(VAR_12, VAR_9);

   FUNC_0(VAR_12);
   if (VAR_13 != 0)
    VAR_11 = VAR_4;
  }
 }

 FUNC_4(VAR_10);
 return VAR_11;
}

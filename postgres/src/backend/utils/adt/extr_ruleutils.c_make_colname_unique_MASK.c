
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int deparse_namespace ;
typedef int deparse_columns ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6(char *VAR_1, deparse_namespace *VAR_2,
     deparse_columns *VAR_3)
{





 if (!FUNC_0(VAR_1, VAR_2, VAR_3))
 {
  int VAR_4 = FUNC_5(VAR_1);
  char *VAR_5 = (char *) FUNC_2(VAR_4 + 16);
  int VAR_6 = 0;

  do
  {
   VAR_6++;
   for (;;)
   {





    FUNC_1(VAR_5, VAR_1, VAR_4);
    FUNC_4(VAR_5 + VAR_4, "_%d", VAR_6);
    if (FUNC_5(VAR_5) < VAR_0)
     break;

    VAR_4 = FUNC_3(VAR_1, VAR_4,
            VAR_4 - 1);
   }
  } while (!FUNC_0(VAR_5, VAR_2, VAR_3));
  VAR_1 = VAR_5;
 }
 return VAR_1;
}

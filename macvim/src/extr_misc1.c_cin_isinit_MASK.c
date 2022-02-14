
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int skip ;
typedef int char_u ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
    char_u *VAR_2;
    static char *VAR_3[] = {"static", "public", "protected", "private"};

    VAR_2 = FUNC_1(FUNC_3());

    if (FUNC_2(VAR_2, "typedef"))
 VAR_2 = FUNC_1(VAR_2 + 7);

    for (;;)
    {
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < (int)(sizeof(VAR_3) / sizeof(char *)); ++VAR_4)
 {
     VAR_5 = (int)FUNC_4(VAR_3[VAR_4]);
     if (FUNC_2(VAR_2, VAR_3[VAR_4]))
     {
  VAR_2 = FUNC_1(VAR_2 + VAR_5);
  VAR_5 = 0;
  break;
     }
 }
 if (VAR_5 != 0)
     break;
    }

    if (FUNC_2(VAR_2, "enum"))
 return VAR_1;

    if (FUNC_0(VAR_2, (char_u *)"=", (char_u *)"{"))
 return VAR_1;

    return VAR_0;
}

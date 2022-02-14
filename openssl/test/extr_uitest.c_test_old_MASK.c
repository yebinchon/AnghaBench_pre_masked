
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pass ;
typedef int UI_METHOD ;
typedef int UI ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,char*,int ,char*,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(void)
{
    UI_METHOD *VAR_2 = ((void*)0);
    UI *VAR_3 = ((void*)0);
    char VAR_4[] = "password";
    char VAR_5[16];
    int VAR_6 = 0;

    if (!FUNC_1(VAR_2 =
                  FUNC_3( VAR_1, 0))
            || !FUNC_1(VAR_3 = FUNC_8(VAR_2)))
        goto err;


    FUNC_5(VAR_3, VAR_4);

    if (!FUNC_4(VAR_3, "prompt", VAR_0,
                             VAR_5, 0, sizeof(VAR_5) - 1))
        goto err;

    switch (FUNC_9(VAR_3)) {
    case -2:
        FUNC_0("test_old: UI process interrupted or cancelled");

    case -1:
        goto err;
    default:
        break;
    }

    if (FUNC_2(VAR_5, VAR_4))
        VAR_6 = 1;

 err:
    FUNC_7(VAR_3);
    FUNC_6(VAR_2);

    return VAR_6;
}

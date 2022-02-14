
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char**) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (char*) ;

int FUNC_12(int VAR_1, char *VAR_2[])
{
    int VAR_3 = VAR_0;

    FUNC_10();

    if (!FUNC_1()) {
        FUNC_11("Global init failed - aborting\n");
        return VAR_3;
    }

    if (!FUNC_6(VAR_1, VAR_2))
        goto end;

    if (FUNC_7()) {
        VAR_3 = FUNC_5(VAR_2[0]);
        FUNC_0();
        FUNC_2();
    } else {
        FUNC_3(FUNC_9());
    }
end:
    VAR_3 = FUNC_4(VAR_3);
    FUNC_8();
    return VAR_3;
}

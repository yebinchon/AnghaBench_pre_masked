
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(int VAR_2, char **VAR_3)
{
    if (!FUNC_0()) {
        FUNC_3(VAR_1,
                "OpenSSL build is not ASYNC capable - skipping async tests\n");
    } else {
        FUNC_2(1);
        FUNC_1(VAR_0);

        if ( !FUNC_9()
                || !FUNC_7()
                || !FUNC_10()
                || !FUNC_8()
                || !FUNC_5()
                || !FUNC_6()) {
            return 1;
        }
    }
    FUNC_4("PASS\n");
    return 0;
}

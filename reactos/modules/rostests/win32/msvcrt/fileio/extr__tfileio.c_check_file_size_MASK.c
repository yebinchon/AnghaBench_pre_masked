
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_7(TCHAR* VAR_4, TCHAR* VAR_5, int VAR_6)
{
    int VAR_7 = 0;
    FILE* VAR_8;
    TCHAR VAR_9;
    int VAR_10;

    if (VAR_2) {

        FUNC_3(FUNC_0("STATUS: (%s) checking for %d bytes with mode %s\n"), VAR_4, VAR_6, VAR_5);
    }
    VAR_8 = FUNC_2(VAR_4, VAR_5);
    if (VAR_8 == ((void*)0)) {
        FUNC_3(FUNC_0("ERROR: (%s) failed to open file for reading\n"), VAR_4);
        return 1;
    }
    while ((VAR_9 = FUNC_1(VAR_8)) != VAR_0) {
        if (VAR_3) {
            FUNC_3(VAR_1, &VAR_9);
        }
        ++VAR_7;
    }
    VAR_10 = FUNC_5(VAR_8);
    if (VAR_10) {
         FUNC_3(FUNC_0("ERROR: (%s) ferror returned %d after reading\n"), VAR_4, VAR_10);
         FUNC_6("Read error");
    }

    if (VAR_3) {

    }
    FUNC_4(VAR_8);
    if (VAR_7 == VAR_6) {
        if (VAR_2) {
            FUNC_3(FUNC_0("PASSED: (%s) read %d bytes\n"), VAR_4, VAR_7);
        }
    } else {
        FUNC_3(FUNC_0("FAILED: (%s) read %d bytes but expected %d using mode \"%s\"\n"), VAR_4, VAR_7, VAR_6, VAR_5);
    }
    return (VAR_7 == VAR_6) ? 0 : -1;
}

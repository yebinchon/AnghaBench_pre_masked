
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef char* HMODULE ;
typedef long DWORD ;
typedef scalar_t__ BOOL ;


 long VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 long FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*) ;

DWORD FUNC_7(char** VAR_1, int VAR_2, BOOL VAR_3)
{
    HMODULE VAR_4;

    FUNC_4("Attempting to LoadLibrary");
    if (VAR_3) {
        FUNC_4("A(%s) - ", *VAR_1);
        VAR_4 = FUNC_1(*VAR_1);
    } else {
        int VAR_5;
        wchar_t VAR_6[500];
        VAR_5 = FUNC_5(VAR_6, *VAR_1, FUNC_6(*VAR_1));
        if (VAR_5) {
            VAR_6[VAR_5] = L'\0';
            FUNC_4("W(%S) - ", VAR_6);
            VAR_4 = FUNC_2(VAR_6);
        } else {
            return VAR_0;
        }
    }
    if (VAR_4 == ((void*)0)) {
        FUNC_4("\nERROR: failed to obtain handle to module %s - %x\n", *VAR_1, VAR_4);
        return FUNC_3();
    }
    FUNC_4("%x\n", VAR_4);

    if (VAR_2--) {
        FUNC_7(++VAR_1, VAR_2, VAR_3);
    }

    if (!FUNC_0(VAR_4)) {
        FUNC_4("ERROR: failed to free module %s - %x\n", *VAR_1, VAR_4);
        return FUNC_3();
    } else {
        FUNC_4("FreeLibrary(%x) - successfull.\n", VAR_4);
    }
    return 0L;
}

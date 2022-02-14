
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char UINT ;
typedef int DWORD ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char*,char,...) ;
 int FUNC_4 (char*) ;
 char FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    WCHAR VAR_3[] = {'?',':','\\',0};
    WCHAR VAR_4 = 0;
    DWORD VAR_5;
    UINT VAR_6;

    VAR_5 = FUNC_2();
    FUNC_3(VAR_5 != 0, "GetLogicalDrives error %d\n", FUNC_1());

    for (VAR_3[0] = 'A'; VAR_3[0] <= 'Z'; VAR_3[0]++)
    {
        VAR_6 = FUNC_0(VAR_3);
        FUNC_3(VAR_6 > VAR_2 && VAR_6 <= VAR_1,
           "not a valid drive %c: type %u\n", VAR_3[0], VAR_6);

        if (!(VAR_5 & 1))
            FUNC_3(VAR_6 == VAR_0,
               "GetDriveTypeW should return DRIVE_NO_ROOT_DIR for inexistent drive %c: but not %u\n",
               VAR_3[0], VAR_6);
        else if (VAR_6 != VAR_0)
            VAR_4 = VAR_3[0];

        VAR_5 >>= 1;
    }

    if (!VAR_4) {
        FUNC_4("No drives found, skipping drive spec format tests.\n");
        return;
    }

    VAR_3[0] = VAR_4;
    VAR_3[2] = 0;
    VAR_6 = FUNC_0(VAR_3);
    FUNC_3(VAR_6 > VAR_0 && VAR_6 <= VAR_1, "got %u for drive spec '%s'\n",
       VAR_6, FUNC_5(VAR_3));

    VAR_3[1] = '?';
    VAR_6 = FUNC_0(VAR_3);
    FUNC_3(VAR_6 == VAR_0, "got %u for drive spec '%s'\n", VAR_6, FUNC_5(VAR_3));

    VAR_3[1] = 0;
    VAR_6 = FUNC_0(VAR_3);
    FUNC_3(VAR_6 == VAR_0, "got %u for drive spec '%s'\n", VAR_6, FUNC_5(VAR_3));

    VAR_3[0] = '?';
    VAR_6 = FUNC_0(VAR_3);
    FUNC_3(VAR_6 == VAR_0, "got %u for drive spec '%s'\n", VAR_6, FUNC_5(VAR_3));

    VAR_3[0] = 0;
    VAR_6 = FUNC_0(VAR_3);
    FUNC_3(VAR_6 == VAR_0, "got %u for drive spec '%s'\n", VAR_6, FUNC_5(VAR_3));
}

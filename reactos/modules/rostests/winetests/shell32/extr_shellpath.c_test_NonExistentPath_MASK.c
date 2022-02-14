
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int startup ;
typedef int originalPath ;
struct TYPE_9__ {int dwMajorVersion; } ;
struct TYPE_8__ {int hProcess; } ;
struct TYPE_7__ {int cb; void* wShowWindow; void* dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int LPBYTE ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;


 int FUNC_0 (int *,char*,int *,int *,int ,long,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char const*,int ,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,char*,int *,int*,int ,int*) ;
 int FUNC_5 (scalar_t__,char*,int ,int,int ,int) ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (char*,char*,size_t) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 TYPE_3__ VAR_13 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*,char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(void)
{
    static const char VAR_14[] =
     "Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders";
    char VAR_15[VAR_3], VAR_16[VAR_3];
    HKEY VAR_17;

    if (!VAR_9) return;
    if (!VAR_8) return;
    if (!VAR_11) return;
    if (!VAR_10) return;
    if (!VAR_7) return;
    if (VAR_13.dwMajorVersion < 5) return;

    if (!FUNC_3(VAR_1, VAR_14, 0, VAR_2,
     &VAR_17))
    {
        DWORD VAR_18, VAR_19;

        VAR_18 = sizeof(VAR_15);
        if (!FUNC_4(VAR_17, "Favorites", ((void*)0), &VAR_19,
         (LPBYTE)&VAR_15, &VAR_18))
        {
            size_t VAR_20 = FUNC_12(VAR_15);

            FUNC_7(VAR_16, VAR_15, VAR_20);
            VAR_16[VAR_20++] = '2';
            VAR_16[VAR_20++] = '\0';
            FUNC_13("Changing CSIDL_FAVORITES to %s\n", VAR_16);
            if (!FUNC_5(VAR_17, "Favorites", 0, VAR_19,
             (LPBYTE)VAR_16, VAR_20))
            {
                char VAR_21[VAR_3+20];
                STARTUPINFOA VAR_22;
                PROCESS_INFORMATION VAR_23;

                FUNC_11(VAR_21, "%s tests/shellpath.c 1", VAR_12);
                FUNC_8(&VAR_22, 0, sizeof(VAR_22));
                VAR_22.cb = sizeof(VAR_22);
                VAR_22.dwFlags = VAR_4;
                VAR_22.wShowWindow = VAR_5;
                FUNC_0(((void*)0), VAR_21, ((void*)0), ((void*)0), VAR_0, 0L, ((void*)0), ((void*)0),
                 &VAR_22, &VAR_23);
                FUNC_14( VAR_23.hProcess );


                FUNC_13("Restoring CSIDL_FAVORITES to %s\n", VAR_15);
                FUNC_5(VAR_17, "Favorites", 0, VAR_19, (LPBYTE) VAR_15,
                 FUNC_12(VAR_15) + 1);
                FUNC_2(VAR_17);

                FUNC_11(VAR_21, "%s tests/shellpath.c 2", VAR_12);
                FUNC_8(&VAR_22, 0, sizeof(VAR_22));
                VAR_22.cb = sizeof(VAR_22);
                VAR_22.dwFlags = VAR_4;
                VAR_22.wShowWindow = VAR_5;
                FUNC_0(((void*)0), VAR_21, ((void*)0), ((void*)0), VAR_0, 0L, ((void*)0), ((void*)0),
                 &VAR_22, &VAR_23);
                FUNC_9(FUNC_6(VAR_23.hProcess, 30000) == VAR_6,
                 "child process termination\n");
            }
        }
        else FUNC_10("RegQueryValueExA(key, Favorites, ...) failed\n");
        if (VAR_17)
            FUNC_1(VAR_17);
    }
    else FUNC_10("RegOpenKeyExA(HKEY_CURRENT_USER, %s, ...) failed\n", VAR_14);
}

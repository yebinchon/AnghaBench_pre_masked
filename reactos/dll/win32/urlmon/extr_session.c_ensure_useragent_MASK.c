
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
typedef char WCHAR ;
struct TYPE_3__ {int member_0; scalar_t__ dwPlatformId; int dwMinorVersion; int dwMajorVersion; } ;
typedef TYPE_1__ OSVERSIONINFOW ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,char*,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (size_t) ;
 char* FUNC_10 (char*,size_t) ;
 int FUNC_11 (char*,char*,scalar_t__) ;
 int FUNC_12 (char*,char const*,char const*,int ,int ,char const*) ;
 size_t FUNC_13 (char*) ;
 char* VAR_3 ;

__attribute__((used)) static void FUNC_14(void)
{
    OSVERSIONINFOW VAR_4 = {sizeof(VAR_4)};
    const WCHAR *VAR_5, *VAR_6;
    WCHAR VAR_7[512], *VAR_8, *VAR_9;
    DWORD VAR_10, VAR_11=0;
    size_t VAR_12, VAR_13;
    BOOL VAR_14;
    HKEY VAR_15;

    static const WCHAR VAR_16[] =
        {'M','o','z','i','l','l','a','/','4','.','0',
         ' ','(','c','o','m','p','a','t','i','b','l','e',';',
         ' ','M','S','I','E',' ','8','.','0',';',
         ' ','W','i','n','d','o','w','s',' ','%','s','%','d','.','%','d',';',
         ' ','%','s','T','r','i','d','e','n','t','/','5','.','0',0};
    static const WCHAR VAR_17[] =
        {'S','O','F','T','W','A','R','E',
         '\\','M','i','c','r','o','s','o','f','t',
         '\\','W','i','n','d','o','w','s',
         '\\','C','u','r','r','e','n','t','V','e','r','s','i','o','n',
         '\\','I','n','t','e','r','n','e','t',' ','S','e','t','t','i','n','g','s',
         '\\','5','.','0','\\','U','s','e','r',' ','A','g','e','n','t',
         '\\','P','o','s','t',' ','P','l','a','t','f','o','r','m',0};
    static const WCHAR VAR_18[] = {'N','T',' ',0};
    static const WCHAR VAR_19[] = {'W','i','n','6','4',';',' ','x','6','4',';',' ',0};
    static const WCHAR VAR_20[] = {'W','O','W','6','4',';',' ',0};
    static const WCHAR VAR_21[] = {0};

    if(VAR_3)
        return;

    FUNC_2(&VAR_4);
    VAR_6 = VAR_4.dwPlatformId == VAR_2 ? VAR_18 : VAR_21;

    if(sizeof(void*) == 8)
        VAR_5 = VAR_19;
    else if(FUNC_3(FUNC_1(), &VAR_14) && VAR_14)
        VAR_5 = VAR_20;
    else
        VAR_5 = VAR_21;

    FUNC_12(VAR_7, VAR_16, VAR_6, VAR_4.dwMajorVersion, VAR_4.dwMinorVersion, VAR_5);
    VAR_12 = FUNC_13(VAR_7);

    VAR_13 = VAR_12+40;
    VAR_8 = FUNC_9(VAR_13 * sizeof(WCHAR));
    if(!VAR_8)
        return;

    FUNC_11(VAR_8, VAR_7, VAR_12*sizeof(WCHAR));

    VAR_10 = FUNC_6(VAR_1, VAR_17, &VAR_15);
    if(VAR_10 == VAR_0) {
        DWORD VAR_22;

        while(1) {
            VAR_22 = FUNC_0(VAR_7);
            VAR_10 = FUNC_5(VAR_15, VAR_11, VAR_7, &VAR_22, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            if(VAR_10 != VAR_0)
                break;
            VAR_11++;

            if(VAR_12 + VAR_22 + 2 + 1 >= VAR_13) {
                VAR_9 = FUNC_10(VAR_8, (VAR_13*2+VAR_22)*sizeof(WCHAR));
                if(!VAR_9)
                    break;
                VAR_8 = VAR_9;
                VAR_13 = VAR_13*2+VAR_22;
            }

            VAR_8[VAR_12++] = ';';
            VAR_8[VAR_12++] = ' ';
            FUNC_11(VAR_8+VAR_12, VAR_7, VAR_22*sizeof(WCHAR));
            VAR_12 += VAR_22;
        }

        FUNC_4(VAR_15);
    }

    VAR_8[VAR_12++] = ')';
    VAR_8[VAR_12++] = 0;

    VAR_3 = VAR_8;
    FUNC_7("Using user agent %s\n", FUNC_8(VAR_3));
}

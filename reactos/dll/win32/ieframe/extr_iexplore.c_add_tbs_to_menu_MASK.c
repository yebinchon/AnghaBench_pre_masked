
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int item ;
typedef char WCHAR ;
struct TYPE_3__ {int cbSize; char* dwTypeData; int fMask; } ;
typedef TYPE_1__ MENUITEMINFOW ;
typedef scalar_t__ LSTATUS ;
typedef int * HUSKEY ;
typedef int HMENU ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,char*,int *,int *,int *,int *,int ) ;
 scalar_t__ FUNC_6 (char const*,int ,int *,int **,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int *,char*,int *,int ,int *,int ) ;
 int FUNC_8 (char*,int ) ;
 int VAR_4 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(HMENU VAR_5)
{
    static const WCHAR VAR_6[] = {'S','o','f','t','w','a','r','e','\\',
                                        'M','i','c','r','o','s','o','f','t','\\',
                                        'I','n','t','e','r','n','e','t',' ',
                                        'E','x','p','l','o','r','e','r','\\',
                                        'T','o','o','l','b','a','r',0};
    HUSKEY VAR_7;

    if(FUNC_6(VAR_6, VAR_1, ((void*)0), &VAR_7, VAR_4) == VAR_0)
    {
        static const WCHAR VAR_8[] = {'S','o','f','t','w','a','r','e','\\',
                                            'C','l','a','s','s','e','s','\\','C','L','S','I','D',0};
        HUSKEY VAR_9;
        WCHAR VAR_10[39];
        DWORD VAR_11 = FUNC_0(VAR_10);
        int VAR_12;

        if(FUNC_6(VAR_8, VAR_1, ((void*)0), &VAR_9, VAR_4) != VAR_0)
        {
            FUNC_4(VAR_7);
            FUNC_1("Failed to open key %s\n", FUNC_9(VAR_8));
            return;
        }

        for(VAR_12 = 0; FUNC_5(VAR_7, VAR_12, VAR_10, &VAR_11, ((void*)0), ((void*)0), ((void*)0), VAR_3) == VAR_0; VAR_12++)
        {
            WCHAR VAR_13[100];
            DWORD VAR_14 = FUNC_0(VAR_13);
            HUSKEY VAR_15;
            MENUITEMINFOW VAR_16;
            LSTATUS VAR_17;
            VAR_11 = FUNC_0(VAR_10);

            if(FUNC_10(VAR_10) != 38)
            {
                FUNC_8("Found invalid IE toolbar entry: %s\n", FUNC_9(VAR_10));
                continue;
            }

            if(FUNC_6(VAR_10, VAR_1, VAR_9, &VAR_15, VAR_4) != VAR_0)
            {
                FUNC_1("Failed to get class info for %s\n", FUNC_9(VAR_10));
                continue;
            }

            VAR_17 = FUNC_7(VAR_15, ((void*)0), ((void*)0), VAR_13, &VAR_14, VAR_4, ((void*)0), 0);

            FUNC_4(VAR_15);

            if(VAR_17 != VAR_0)
            {
                FUNC_1("Failed to get toolbar name for %s\n", FUNC_9(VAR_10));
                continue;
            }

            VAR_16.cbSize = sizeof(VAR_16);
            VAR_16.fMask = VAR_2;
            VAR_16.dwTypeData = VAR_13;
            FUNC_3(VAR_5, FUNC_2(VAR_5), VAR_4, &VAR_16);
        }

        FUNC_4(VAR_9);
        FUNC_4(VAR_7);
    }
}

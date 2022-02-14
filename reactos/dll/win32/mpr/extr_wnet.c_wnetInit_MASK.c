
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WNetProviderTable ;
typedef int WNetProvider ;
typedef char WCHAR ;
struct TYPE_2__ {scalar_t__ numAllocated; scalar_t__* entireNetwork; } ;
typedef char* PWSTR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int * LPBYTE ;
typedef int HKEY ;
typedef int HINSTANCE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,char*,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *,int *,int *,scalar_t__*,scalar_t__*,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int ,char const*,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (scalar_t__*,int ,int) ;
 TYPE_1__* VAR_7 ;
 char* FUNC_15 (char*,char) ;

void FUNC_16(HINSTANCE VAR_8)
{
    static const WCHAR VAR_9[] = { 'S','y','s','t','e','m','\\',
     'C','u','r','r','e','n','t','C','o','n','t','r','o','l','S','e','t','\\',
     'C','o','n','t','r','o','l','\\',
     'N','e','t','w','o','r','k','P','r','o','v','i','d','e','r','\\',
     'O','r','d','e','r',0 };
     static const WCHAR VAR_10[] = { 'P','r','o','v','i','d','e','r',
      'O','r','d','e','r',0 };
    HKEY VAR_11;

    if (FUNC_7(VAR_2, VAR_9, 0, VAR_5, &VAR_11)
     == VAR_0)
    {
        DWORD VAR_12 = 0;

        FUNC_9(VAR_11, VAR_10, ((void*)0), ((void*)0), ((void*)0), &VAR_12);
        if (VAR_12)
        {
            PWSTR VAR_13 = FUNC_1(FUNC_0(), 0, VAR_12);

            if (VAR_13)
            {
                DWORD VAR_14;

                if (FUNC_9(VAR_11, VAR_10, ((void*)0), &VAR_14,
                 (LPBYTE)VAR_13, &VAR_12) == VAR_0 && VAR_14 == VAR_6)
                {
                    PWSTR VAR_15;
                    DWORD VAR_16;

                    FUNC_10("provider order is %s\n", FUNC_13(VAR_13));


                    for (VAR_15 = VAR_13, VAR_16 = 1; VAR_15; )
                    {
                        VAR_15 = FUNC_15(VAR_15, ',');
                        if (VAR_15) {
                            VAR_16++;
                            VAR_15++;
                        }
                    }
                    VAR_7 =
                     FUNC_1(FUNC_0(), VAR_1,
                     sizeof(WNetProviderTable)
                     + (VAR_16 - 1) * sizeof(WNetProvider));
                    if (VAR_7)
                    {
                        PWSTR VAR_17;
                        int VAR_18;
                        LPCWSTR VAR_19;

                        VAR_18 = FUNC_3(VAR_8,
                         VAR_3, (LPWSTR)&VAR_19, 0);
                        VAR_7->entireNetwork = FUNC_1(
                         FUNC_0(), 0, (VAR_18 + 1) *
                         sizeof(WCHAR));
                        if (VAR_7->entireNetwork)
                        {
                            FUNC_14(VAR_7->entireNetwork, VAR_19, VAR_18*sizeof(WCHAR));
                            VAR_7->entireNetwork[VAR_18] = 0;
                        }
                        VAR_7->numAllocated = VAR_16;
                        for (VAR_15 = VAR_13; VAR_15; )
                        {
                            VAR_17 = VAR_15;
                            VAR_15 = FUNC_15(VAR_15, ',');
                            if (VAR_15)
                                *VAR_15++ = '\0';
                            FUNC_12(VAR_17);
                        }
                    }
                }
                FUNC_2(FUNC_0(), 0, VAR_13);
            }
        }
        FUNC_4(VAR_11);
    }
}

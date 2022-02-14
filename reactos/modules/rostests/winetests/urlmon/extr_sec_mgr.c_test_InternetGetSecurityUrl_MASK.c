
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef size_t HRESULT ;
typedef size_t DWORD ;


 size_t FUNC_0 (char const**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 size_t VAR_5 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,size_t,...) ;
 size_t FUNC_6 (char const*,char**,int ,int ) ;
 char* VAR_6 ;
 char const* VAR_7 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char*) ;
 char const* VAR_8 ;
 char const* VAR_9 ;
 char const* VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 char const* VAR_13 ;
 char const* VAR_14 ;
 char const* VAR_15 ;
 size_t FUNC_9 (char const*) ;

__attribute__((used)) static void FUNC_10(void)
{
    const WCHAR VAR_16[] = {'h','t','t','p',':','w','w','w','.','z','o','n','e','3',
                              '.','w','i','n','e','t','e','s','t',0};
    const WCHAR VAR_17[] = {'f','t','p',':','z','o','n','e','3','.','w','i','n','e','t','e','s','t',0};

    const WCHAR *VAR_18[] = {VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_8};
    const WCHAR *VAR_19[] = {VAR_9, VAR_10, VAR_11, VAR_16, VAR_17, VAR_14, VAR_16, VAR_8};
    const WCHAR *VAR_20[] = {VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_8};

    WCHAR *VAR_21;
    DWORD VAR_22;
    HRESULT VAR_23;

    FUNC_8("testing CoInternetGetSecurityUrl...\n");

    for(VAR_22 = 0; VAR_22 < FUNC_0(VAR_18); VAR_22++) {
        VAR_23 = FUNC_6(VAR_18[VAR_22], &VAR_21, VAR_0, 0);
        FUNC_5(VAR_23 == VAR_5, "(%d) CoInternetGetSecurityUrl returned: %08x\n", VAR_22, VAR_23);
        if(VAR_23 == VAR_5) {
            FUNC_5(!FUNC_7(VAR_21, VAR_19[VAR_22]), "(%d) Got %s, expected %s\n",
                    VAR_22, FUNC_9(VAR_21), FUNC_9(VAR_19[VAR_22]));
            FUNC_2(VAR_21);
        }

        VAR_23 = FUNC_6(VAR_18[VAR_22], &VAR_21, VAR_1, 0);
        FUNC_5(VAR_23 == VAR_5, "(%d) CoInternetGetSecurityUrl returned: %08x\n", VAR_22, VAR_23);
        if(VAR_23 == VAR_5) {
            FUNC_5(!FUNC_7(VAR_21, VAR_20[VAR_22]), "(%d) Got %s, expected %s\n",
                    VAR_22, FUNC_9(VAR_21), FUNC_9(VAR_20[VAR_22]));
            FUNC_2(VAR_21);
        }
    }

    FUNC_3(VAR_4);
    FUNC_3(VAR_3);
    FUNC_3(VAR_2);

    VAR_23 = FUNC_6(VAR_7, &VAR_21, VAR_0, 0);
    FUNC_5(VAR_23 == VAR_5, "CoInternetGetSecurityUrl returned 0x%08x, expected S_OK\n", VAR_23);

    FUNC_1(VAR_4);
    FUNC_1(VAR_3);
    FUNC_1(VAR_2);

    FUNC_5(!FUNC_4(VAR_6, VAR_21), "Expected %s but got %s\n",
       FUNC_9(VAR_6), FUNC_9(VAR_21));
    FUNC_2(VAR_21);
}

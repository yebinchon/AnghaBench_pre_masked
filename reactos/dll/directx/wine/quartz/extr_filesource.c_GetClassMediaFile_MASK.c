
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wszValueName ;
typedef int wszSourceFilterKeyName ;
typedef int wszMinorKeyName ;
typedef int wszMajorKeyName ;
typedef char WCHAR ;
typedef scalar_t__ LPWSTR ;
typedef char* LPCOLESTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int IAsyncReader ;
typedef scalar_t__ HRESULT ;
typedef int * HKEY ;
typedef int GUID ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int * VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (int *,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int *,int,char*,int*,int *,int*,int ,int*) ;
 scalar_t__ FUNC_10 (int *,char const*,int ,int ,int **) ;
 scalar_t__ FUNC_11 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int*,int *,int *) ;
 scalar_t__ FUNC_12 (int *,char*,int *,int *,int ,int*) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_14 (char*,...) ;
 scalar_t__ VAR_8 ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (int *,char*,int *,int *,int *) ;
 scalar_t__ FUNC_17 (scalar_t__,int *) ;
 int FUNC_18 (int *) ;
 char* VAR_9 ;
 scalar_t__ FUNC_19 (char const*,char*) ;

HRESULT FUNC_20(IAsyncReader * VAR_10, LPCOLESTR VAR_11, GUID * VAR_12, GUID * VAR_13, GUID * VAR_14)
{
    HKEY VAR_15 = ((void*)0);
    LONG VAR_16;
    HRESULT VAR_17 = VAR_7;
    BOOL VAR_18 = VAR_3;
    static const WCHAR VAR_19[] = {'M','e','d','i','a',' ','T','y','p','e',0};

    FUNC_14("(%p, %s, %p, %p)\n", VAR_10, FUNC_15(VAR_11), VAR_12, VAR_13);

    if(VAR_12)
        *VAR_12 = VAR_4;
    if(VAR_13)
        *VAR_13 = VAR_4;
    if(VAR_14)
        *VAR_14 = VAR_4;

    VAR_16 = FUNC_10(VAR_5, VAR_19, 0, VAR_6, &VAR_15);
    VAR_17 = FUNC_5(VAR_16);

    if (FUNC_13(VAR_17))
    {
        DWORD VAR_20;

        for (VAR_20 = 0; !VAR_18; VAR_20++)
        {
            HKEY VAR_21;
            WCHAR VAR_22[VAR_0];
            DWORD VAR_23 = sizeof(VAR_22) / sizeof(VAR_22[0]);
            static const WCHAR VAR_24[] = {'E','x','t','e','n','s','i','o','n','s',0};

            if (FUNC_8(VAR_15, VAR_20, VAR_22, &VAR_23, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) != VAR_1)
                break;
            if (FUNC_10(VAR_15, VAR_22, 0, VAR_6, &VAR_21) != VAR_1)
                break;
            FUNC_14("%s\n", FUNC_15(VAR_22));
            if (!FUNC_19(VAR_24, VAR_22))
            {
                if (FUNC_16(VAR_21, VAR_11, VAR_12, VAR_13, VAR_14) == VAR_7)
                    VAR_18 = VAR_8;
            }

            else if (VAR_10)
            {
                DWORD VAR_25;

                for (VAR_25 = 0; !VAR_18; VAR_25++)
                {
                    HKEY VAR_26;
                    WCHAR VAR_27[VAR_0];
                    DWORD VAR_28 = sizeof(VAR_27) / sizeof(VAR_27[0]);
                    WCHAR VAR_29[VAR_0];
                    DWORD VAR_30 = sizeof(VAR_29);
                    DWORD VAR_31;
                    DWORD VAR_32;

                    if (FUNC_8(VAR_21, VAR_25, VAR_27, &VAR_28, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) != VAR_1)
                        break;

                    if (FUNC_10(VAR_21, VAR_27, 0, VAR_6, &VAR_26) != VAR_1)
                        break;

                    FUNC_14("\t%s\n", FUNC_15(VAR_27));

                    if (FUNC_11(VAR_26, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_31, ((void*)0), ((void*)0)) != VAR_1)
                        break;

                    for (VAR_32 = 0; !VAR_18; VAR_32++)
                    {
                        DWORD VAR_33;
                        WCHAR VAR_34[14];
                        LPWSTR VAR_35 = FUNC_6(FUNC_4(), 0, VAR_31);
                        DWORD VAR_36 = sizeof(VAR_34) / sizeof(VAR_34[0]);
                        DWORD VAR_37 = VAR_31;

                        if (FUNC_9(VAR_26, VAR_32, VAR_34, &VAR_36, ((void*)0), &VAR_33, (LPBYTE)VAR_35, &VAR_37) != VAR_1)
                        {
                            FUNC_7(FUNC_4(), 0, VAR_35);
                            break;
                        }

                        if (FUNC_19(VAR_34, VAR_9)==0) {
                            FUNC_7(FUNC_4(), 0, VAR_35);
                            continue;
                        }


                        if (FUNC_17(VAR_35, VAR_10) == VAR_7)
                        {
                            FUNC_7(FUNC_4(), 0, VAR_35);
                            if (VAR_12 && FUNC_3(FUNC_0(VAR_22, VAR_12)))
                                break;
                            if (VAR_13 && FUNC_3(FUNC_0(VAR_27, VAR_13)))
                                break;
                            if (VAR_14)
                            {

                                if (FUNC_12(VAR_26, VAR_9, ((void*)0), ((void*)0), (LPBYTE)VAR_29, &VAR_30))
                                    break;
                                if (FUNC_3(FUNC_0(VAR_29, VAR_14)))
                                    break;
                            }
                            VAR_18 = VAR_8;
                        } else
                            FUNC_7(FUNC_4(), 0, VAR_35);
                    }
                    FUNC_1(VAR_26);
                }
            }
            FUNC_1(VAR_21);
        }
    }
    FUNC_1(VAR_15);

    if (FUNC_13(VAR_17) && !VAR_18)
    {
        FUNC_2("Media class not found\n");
        VAR_17 = VAR_2;
    }
    else if (VAR_18)
    {
        FUNC_14("Found file's class:\n");
 if(VAR_12)
  FUNC_14("\tmajor = %s\n", FUNC_18(VAR_12));
 if(VAR_13)
  FUNC_14("\tsubtype = %s\n", FUNC_18(VAR_13));
 if(VAR_14)
  FUNC_14("\tsource filter = %s\n", FUNC_18(VAR_14));
    }

    return VAR_17;
}

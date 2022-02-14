
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,char*,scalar_t__*,int ,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__,char const*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (char*,int *,scalar_t__,scalar_t__) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static BOOL FUNC_12(HKEY VAR_11, LPCWSTR VAR_12, BOOL VAR_13,
        BOOL VAR_14)
{
    static const WCHAR VAR_15[]={'S','o','f','t','w','a','r','e','\\',
        'M','i','c','r','o','s','o','f','t','\\','W','i','n','d','o','w','s','\\',
        'C','u','r','r','e','n','t','V','e','r','s','i','o','n',0};
    HKEY VAR_16=((void*)0), VAR_17=((void*)0);
    LONG VAR_18=VAR_2;
    DWORD VAR_19, VAR_20=0, VAR_21=0;
    WCHAR *VAR_22=((void*)0);
    WCHAR *VAR_23=((void*)0);

    if (VAR_11==VAR_4)
        FUNC_11(L"processing %s entries under HKLM\n", VAR_12);
    else
        FUNC_11(L"processing %s entries under HKCU\n", VAR_12);

    if ((VAR_18=FUNC_5(VAR_11, VAR_15, 0, VAR_7, &VAR_16))!=VAR_2)
    {
        FUNC_9("RegOpenKey failed on Software\\Microsoft\\Windows\\CurrentVersion (%ld)\n",
                VAR_18);

        goto end;
    }

    if ((VAR_18=FUNC_5(VAR_16, VAR_12, 0, VAR_13?VAR_6:VAR_7, &VAR_17))!=
            VAR_2)
    {
        if (VAR_18==VAR_0)
        {
            FUNC_9("Key doesn't exist - nothing to be done\n");

            VAR_18=VAR_2;
        }
        else
            FUNC_9("RegOpenKey failed on run key (%ld)\n", VAR_18);

        goto end;
    }

    if ((VAR_18=FUNC_6(VAR_17, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_19, &VAR_21,
                    &VAR_20, ((void*)0), ((void*)0)))!=VAR_2)
    {
        FUNC_9("Couldn't query key info (%ld)\n", VAR_18);

        goto end;
    }

    if (VAR_19==0)
    {
        FUNC_9("No commands to execute.\n");

        VAR_18=VAR_2;
        goto end;
    }

    if ((VAR_22=FUNC_8(VAR_20))==((void*)0))
    {
        FUNC_9("Couldn't allocate memory for the commands to be executed\n");

        VAR_18=VAR_1;
        goto end;
    }

    if ((VAR_23=FUNC_8((++VAR_21)*sizeof(*VAR_23)))==((void*)0))
    {
        FUNC_9("Couldn't allocate memory for the value names\n");

        FUNC_7(VAR_22);
        VAR_18=VAR_1;
        goto end;
    }

    while(VAR_19>0)
    {
        DWORD VAR_24=VAR_21, VAR_25=VAR_20;
        DWORD VAR_26;

        --VAR_19;

        if ((VAR_18=FUNC_4(VAR_17, VAR_19, VAR_23, &VAR_24, 0, &VAR_26,
                        (LPBYTE)VAR_22, &VAR_25))!=VAR_2)
        {
            FUNC_9("Couldn't read in value %lu - %ld\n", VAR_19, VAR_18);

            continue;
        }


        if (FUNC_1(VAR_9) && (VAR_23[0] != L'*')) continue;

        if (VAR_13 && (VAR_18=FUNC_3(VAR_17, VAR_23))!=VAR_2)
        {
            FUNC_9("Couldn't delete value - %lu, %ld. Running command anyways.\n", VAR_19, VAR_18);
        }

        if (VAR_26!=VAR_8)
        {
            FUNC_9("Incorrect type of value #%lu (%lu)\n", VAR_19, VAR_26);

            continue;
        }

        if ((VAR_18=FUNC_10(VAR_22, ((void*)0), VAR_14, VAR_3))==VAR_5)
        {
            FUNC_9("Error running cmd #%lu (%ld)\n", VAR_19, FUNC_0());
        }

        FUNC_9("Done processing cmd #%lu\n", VAR_19);
    }

    FUNC_7(VAR_23);
    FUNC_7(VAR_22);
    VAR_18=VAR_2;

end:
    if (VAR_17!=((void*)0))
        FUNC_2(VAR_17);
    if (VAR_16!=((void*)0))
        FUNC_2(VAR_16);

    FUNC_9("done\n");

    return VAR_18==VAR_2?VAR_10:VAR_3;
}

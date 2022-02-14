
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int szText ;
typedef int szName ;
typedef char WCHAR ;
struct TYPE_5__ {struct TYPE_5__* pNext; void* szBindName; void* szHelpText; void* szDisplayName; void* szId; scalar_t__ dwCharacteristics; int InstanceId; int ClassGUID; } ;
typedef TYPE_1__ NetCfgComponentItem ;
typedef int LPBYTE ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int GUID ;
typedef int DWORD ;


 int FUNC_0 (char*,int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,char*,int *,int*,int ,int*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (void*,char*) ;
 int FUNC_11 (char*) ;

HRESULT
FUNC_12(HKEY VAR_7, const GUID * VAR_8, NetCfgComponentItem ** VAR_9)
{
    DWORD VAR_10 = 0;
    DWORD VAR_11;
    DWORD VAR_12;
    WCHAR VAR_13[100];
    WCHAR VAR_14[100];
    HKEY VAR_15, VAR_16;
    NetCfgComponentItem * VAR_17 = ((void*)0), *VAR_18;

    *VAR_9 = ((void*)0);
    do
    {
        VAR_14[0] = L'\0';

        VAR_11 = sizeof(VAR_13)/sizeof(WCHAR);
        if (FUNC_6(VAR_7, VAR_10++, VAR_13, &VAR_11, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == VAR_0)
        {
            VAR_18 = FUNC_1(sizeof(NetCfgComponentItem));
            if (!VAR_18)
                return VAR_1;

            FUNC_9(VAR_18, sizeof(NetCfgComponentItem));
            FUNC_2(&VAR_18->ClassGUID, VAR_8, sizeof(GUID));

            if (FUNC_3(FUNC_0(VAR_13, &VAR_18->InstanceId)))
            {



            }
            if (FUNC_7(VAR_7, VAR_13, 0, VAR_2, &VAR_15) == VAR_0)
            {

                VAR_11 = sizeof(DWORD);

                FUNC_8(VAR_15, L"Characteristics", ((void*)0), &VAR_12, (LPBYTE)&VAR_18->dwCharacteristics, &VAR_11);
                if (VAR_12 != VAR_3)
                    VAR_18->dwCharacteristics = 0;


                VAR_11 = sizeof(VAR_14);
                if (FUNC_8(VAR_15, L"ComponentId", ((void*)0), &VAR_12, (LPBYTE)VAR_14, &VAR_11) == VAR_0)
                {
                    if (VAR_12 == VAR_4)
                    {
                        VAR_14[(sizeof(VAR_14)/sizeof(WCHAR))-1] = L'\0';
                        VAR_18->szId = FUNC_1((FUNC_11(VAR_14)+1)* sizeof(WCHAR));
                        if (VAR_18->szId)
                            FUNC_10(VAR_18->szId, VAR_14);
                    }
                }


                VAR_11 = sizeof(VAR_14);
                if (FUNC_8(VAR_15, L"Description", ((void*)0), &VAR_12, (LPBYTE)VAR_14, &VAR_11) == VAR_0)
                {
                    if (VAR_12 == VAR_4)
                    {
                        VAR_14[(sizeof(VAR_14)/sizeof(WCHAR))-1] = L'\0';
                        VAR_18->szDisplayName = FUNC_1((FUNC_11(VAR_14)+1)* sizeof(WCHAR));
                        if (VAR_18->szDisplayName)
                            FUNC_10(VAR_18->szDisplayName, VAR_14);
                    }
                }

                if (FUNC_7(VAR_15, L"NDI", 0, VAR_2, &VAR_16) == VAR_0)
                {

                    VAR_11 = sizeof(VAR_14);
                    if (FUNC_8(VAR_16, L"HelpText", ((void*)0), &VAR_12, (LPBYTE)VAR_14, &VAR_11) == VAR_0)
                    {
                        if (VAR_12 == VAR_4)
                        {
                            VAR_14[(sizeof(VAR_14)/sizeof(WCHAR))-1] = L'\0';
                            VAR_18->szHelpText = FUNC_1((FUNC_11(VAR_14)+1)* sizeof(WCHAR));
                            if (VAR_18->szHelpText)
                                FUNC_10(VAR_18->szHelpText, VAR_14);
                        }
                    }


                    VAR_11 = sizeof(VAR_14);
                    if (FUNC_8(VAR_16, L"Service", ((void*)0), &VAR_12, (LPBYTE)VAR_14, &VAR_11) == VAR_0)
                    {
                        if (VAR_12 == VAR_4)
                        {
                            VAR_14[(sizeof(VAR_14)/sizeof(WCHAR))-1] = L'\0';
                            VAR_18->szBindName = FUNC_1((FUNC_11(VAR_14)+1)* sizeof(WCHAR));
                            if (VAR_18->szBindName)
                                FUNC_10(VAR_18->szBindName, VAR_14);
                        }
                    }
                    FUNC_5(VAR_16);
                }
                FUNC_5(VAR_15);

                FUNC_4(VAR_18);

                if (!VAR_17)
                    *VAR_9 = VAR_18;
                else
                    VAR_17->pNext = VAR_18;

                VAR_17 = VAR_18;
            }
        }
        else
           break;

    }while(VAR_6);
    return VAR_5;
}

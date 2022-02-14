
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szIdBuffer ;
typedef char WCHAR ;
typedef int ULONG ;
typedef int PUCHAR ;
typedef int PSTR ;
typedef int NameBuffer ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int *) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int ,int*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static BOOLEAN
FUNC_4(PSTR VAR_3,
                  PSTR VAR_4,
                  PSTR VAR_5)
{
    LONG VAR_6 = VAR_0;
    HKEY VAR_7;
    WCHAR VAR_8[80];
    WCHAR VAR_9[80];
    ULONG VAR_10;


    VAR_6 = FUNC_0(((void*)0),
        L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\NLS\\CodePage",
        &VAR_7);
    if (VAR_6 != VAR_0)
    {

        return VAR_1;
    }


    VAR_10 = sizeof(VAR_8);
    VAR_6 = FUNC_1(VAR_7, L"ACP", ((void*)0), (PUCHAR)VAR_8, &VAR_10);
    if (VAR_6 != VAR_0)
    {

        return VAR_1;
    }

    VAR_10 = sizeof(VAR_9);
    VAR_6 = FUNC_1(VAR_7, VAR_8, ((void*)0), (PUCHAR)VAR_9, &VAR_10);
    if (VAR_6 != VAR_0)
    {


        FUNC_3(VAR_9, L"c_1252.nls");
    }
    FUNC_2(VAR_3, "%S", VAR_9);


    VAR_10 = sizeof(VAR_8);
    VAR_6 = FUNC_1(VAR_7, L"OEMCP", ((void*)0), (PUCHAR)VAR_8, &VAR_10);
    if (VAR_6 != VAR_0)
    {

        return VAR_1;
    }

    VAR_10 = sizeof(VAR_9);
    VAR_6 = FUNC_1(VAR_7, VAR_8, ((void*)0), (PUCHAR)VAR_9, &VAR_10);
    if (VAR_6 != VAR_0)
    {


        FUNC_3(VAR_9, L"c_437.nls");
    }
    FUNC_2(VAR_4, "%S", VAR_9);


    VAR_6 = FUNC_0(((void*)0),
        L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\NLS\\Language",
        &VAR_7);
    if (VAR_6 != VAR_0)
    {

        return VAR_1;
    }


    VAR_10 = sizeof(VAR_8);
    VAR_6 = FUNC_1(VAR_7, L"Default", ((void*)0), (PUCHAR)VAR_8, &VAR_10);
    if (VAR_6 != VAR_0)
    {

        return VAR_1;
    }

    VAR_10 = sizeof(VAR_9);
    VAR_6 = FUNC_1(VAR_7, VAR_8, ((void*)0), (PUCHAR)VAR_9, &VAR_10);
    if (VAR_6 != VAR_0)
    {

        return VAR_1;
    }
    FUNC_2(VAR_5, "%S", VAR_9);

    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int ovpn_admin_group; } ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (char const*,int,char**,TYPE_1__*) ;
 char** FUNC_1 (char const*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (int ,int ,char*,int,int *) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 int FUNC_6 (char*) ;
 int VAR_3 ;
 int FUNC_7 (char*,int ,char const*,char*,char const*,...) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static BOOL
FUNC_9(HANDLE VAR_5, const WCHAR *VAR_6, const WCHAR *VAR_7)
{
    WCHAR **VAR_8;
    int VAR_9;
    WCHAR VAR_10[256];
    BOOL VAR_11 = VAR_1;
    int VAR_12;
    const WCHAR *VAR_13 = L"You have specified a config file location (%s relative to %s)"
                        L" that requires admin approval. This error may be avoided"
                        L" by adding your account to the \"%s\" group";

    const WCHAR *VAR_14 = L"You have specified an option (%s) that may be used"
                        L" only with admin approval. This error may be avoided"
                        L" by adding your account to the \"%s\" group";

    VAR_8 = FUNC_1(VAR_7, &VAR_9);

    if (!VAR_8)
    {
        FUNC_5(VAR_5, L"CommandLineToArgvW");
        FUNC_4(VAR_5, VAR_0, L"Cannot validate options", 1, &VAR_3);
        goto out;
    }


    if (VAR_9 < 1)
    {
        VAR_11 = VAR_2;
        goto out;
    }




    if (VAR_9 == 1)
    {
        WCHAR *VAR_15[2] = { L"--config", VAR_8[0] };

        if (!FUNC_0(VAR_6, 2, VAR_15, &VAR_4))
        {
            FUNC_7(VAR_10, FUNC_6(VAR_10), VAR_13, VAR_8[0], VAR_6,
                             VAR_4.ovpn_admin_group);
            FUNC_4(VAR_5, VAR_0, VAR_10, 1, &VAR_3);
        }
        goto out;
    }

    for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12)
    {
        if (!FUNC_2(VAR_8[VAR_12]))
        {
            continue;
        }

        if (!FUNC_0(VAR_6, VAR_9-VAR_12, &VAR_8[VAR_12], &VAR_4))
        {
            if (FUNC_8(L"--config", VAR_8[VAR_12]) == 0 && VAR_9-VAR_12 > 1)
            {
                FUNC_7(VAR_10, FUNC_6(VAR_10), VAR_13, VAR_8[VAR_12+1], VAR_6,
                                 VAR_4.ovpn_admin_group);
                FUNC_4(VAR_5, VAR_0, VAR_10, 1, &VAR_3);
            }
            else
            {
                FUNC_7(VAR_10, FUNC_6(VAR_10), VAR_14, VAR_8[VAR_12],
                                 VAR_4.ovpn_admin_group);
                FUNC_4(VAR_5, VAR_0, VAR_10, 1, &VAR_3);
            }
            goto out;
        }
    }


    VAR_11 = VAR_2;

out:
    if (VAR_8)
    {
        FUNC_3(VAR_8);
    }
    return VAR_11;
}

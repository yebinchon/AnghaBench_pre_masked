
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int DirectoryName; int IPAddress; int pwszURL; } ;
struct TYPE_6__ {int dwAltNameChoice; TYPE_1__ u; } ;
typedef int DWORD ;
typedef TYPE_2__ CERT_ALT_NAME_ENTRY ;
typedef int BOOL ;







 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static BOOL FUNC_6(const CERT_ALT_NAME_ENTRY *VAR_3,
 const CERT_ALT_NAME_ENTRY *VAR_4, DWORD *VAR_5, BOOL *VAR_6)
{
    BOOL VAR_7 = VAR_1;

    if (VAR_3->dwAltNameChoice == VAR_4->dwAltNameChoice)
    {
        if (VAR_6)
            *VAR_6 = VAR_2;
        switch (VAR_4->dwAltNameChoice)
        {
        case 129:
            VAR_7 = FUNC_4(VAR_4->u.pwszURL,
             VAR_3->u.pwszURL, VAR_5);
            break;
        case 131:
            VAR_7 = FUNC_2(VAR_4->u.pwszURL,
             VAR_3->u.pwszURL, VAR_5);
            break;
        case 128:
            VAR_7 = FUNC_5(VAR_4->u.pwszURL,
             VAR_3->u.pwszURL, VAR_5);
            break;
        case 130:
            VAR_7 = FUNC_3(&VAR_4->u.IPAddress,
             &VAR_3->u.IPAddress, VAR_5);
            break;
        case 132:
            VAR_7 = FUNC_1(&VAR_4->u.DirectoryName,
             &VAR_3->u.DirectoryName);
            break;
        default:
            FUNC_0("name choice %d unsupported in this context\n",
             VAR_4->dwAltNameChoice);
            *VAR_5 |=
             VAR_0;
        }
    }
    else if (VAR_6)
        *VAR_6 = VAR_1;
    return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pwszRfc822Name; } ;
struct TYPE_14__ {scalar_t__ dwAltNameChoice; TYPE_1__ u; } ;
struct TYPE_13__ {size_t cPermittedSubtree; TYPE_3__* rgPermittedSubtree; } ;
struct TYPE_10__ {scalar_t__ pbData; } ;
struct TYPE_12__ {TYPE_2__ Value; } ;
struct TYPE_11__ {TYPE_6__ Base; } ;
typedef int LPCWSTR ;
typedef size_t DWORD ;
typedef TYPE_4__ CERT_RDN_ATTR ;
typedef TYPE_5__ CERT_NAME_CONSTRAINTS_INFO ;
typedef TYPE_6__ CERT_ALT_NAME_ENTRY ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,size_t*) ;

__attribute__((used)) static BOOL FUNC_1(const CERT_RDN_ATTR *VAR_3,
 const CERT_NAME_CONSTRAINTS_INFO *VAR_4, DWORD *VAR_5,
 BOOL *VAR_6)
{
    DWORD VAR_7;
    BOOL VAR_8 = VAR_1;

    for (VAR_7 = 0; !VAR_8 && VAR_7 < VAR_4->cPermittedSubtree; VAR_7++)
    {
        const CERT_ALT_NAME_ENTRY *VAR_9 =
         &VAR_4->rgPermittedSubtree[VAR_7].Base;

        if (VAR_9->dwAltNameChoice == VAR_0)
        {
            *VAR_6 = VAR_2;
            VAR_8 = FUNC_0(VAR_9->u.pwszRfc822Name,
             (LPCWSTR)VAR_3->Value.pbData, VAR_5);
        }
    }
    return VAR_8;
}

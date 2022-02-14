
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cAccDescr; TYPE_1__* rgAccDescr; } ;
struct TYPE_5__ {int AccessLocation; int pszAccessMethod; } ;
typedef int LPCSTR ;
typedef size_t DWORD ;
typedef TYPE_2__ CERT_AUTHORITY_INFO_ACCESS ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*,int ,size_t,scalar_t__,...) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(LPCSTR VAR_0,
 const CERT_AUTHORITY_INFO_ACCESS *VAR_1,
 const CERT_AUTHORITY_INFO_ACCESS *VAR_2)
{
    DWORD VAR_3;

    FUNC_1(VAR_1->cAccDescr == VAR_2->cAccDescr,
     "%s: expected %d access descriptions, got %d\n", VAR_0,
     VAR_1->cAccDescr, VAR_2->cAccDescr);
    for (VAR_3 = 0; VAR_3 < VAR_1->cAccDescr; VAR_3++)
    {
        FUNC_1(!FUNC_2(VAR_1->rgAccDescr[VAR_3].pszAccessMethod,
         VAR_2->rgAccDescr[VAR_3].pszAccessMethod), "%s[%d]: expected %s, got %s\n",
         VAR_0, VAR_3, VAR_1->rgAccDescr[VAR_3].pszAccessMethod,
         VAR_2->rgAccDescr[VAR_3].pszAccessMethod);
        FUNC_0(&VAR_1->rgAccDescr[VAR_3].AccessLocation,
         &VAR_2->rgAccDescr[VAR_3].AccessLocation);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cPermittedSubtree; TYPE_1__* rgPermittedSubtree; } ;
struct TYPE_4__ {int Base; } ;
typedef size_t DWORD ;
typedef TYPE_2__ CERT_NAME_CONSTRAINTS_INFO ;
typedef int CERT_ALT_NAME_ENTRY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *,size_t*,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_1(const CERT_ALT_NAME_ENTRY *VAR_1,
 const CERT_NAME_CONSTRAINTS_INFO *VAR_2, DWORD *VAR_3,
 BOOL *VAR_4)
{
    DWORD VAR_5;
    BOOL VAR_6 = VAR_0;

    for (VAR_5 = 0; !VAR_6 && VAR_5 < VAR_2->cPermittedSubtree; VAR_5++)
        VAR_6 = FUNC_0(VAR_1,
         &VAR_2->rgPermittedSubtree[VAR_5].Base, VAR_3,
         VAR_4);
    return VAR_6;
}

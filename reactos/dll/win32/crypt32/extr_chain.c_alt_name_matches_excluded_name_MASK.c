
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t cExcludedSubtree; TYPE_1__* rgExcludedSubtree; } ;
struct TYPE_4__ {int Base; } ;
typedef size_t DWORD ;
typedef TYPE_2__ CERT_NAME_CONSTRAINTS_INFO ;
typedef int CERT_ALT_NAME_ENTRY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int *,size_t*,int *) ;

__attribute__((used)) static BOOL FUNC_1(const CERT_ALT_NAME_ENTRY *VAR_1,
 const CERT_NAME_CONSTRAINTS_INFO *VAR_2, DWORD *VAR_3)
{
    DWORD VAR_4;
    BOOL VAR_5 = VAR_0;

    for (VAR_4 = 0; !VAR_5 && VAR_4 < VAR_2->cExcludedSubtree; VAR_4++)
        VAR_5 = FUNC_0(VAR_1,
         &VAR_2->rgExcludedSubtree[VAR_4].Base, VAR_3, ((void*)0));
    return VAR_5;
}

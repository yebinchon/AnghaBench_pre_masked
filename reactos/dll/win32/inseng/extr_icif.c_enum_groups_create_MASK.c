
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct ciffenum_groups {int ref; TYPE_1__ IEnumCifGroups_iface; struct list* position; struct list* start; int * file; } ;
typedef TYPE_1__ IEnumCifGroups ;
typedef int ICifFile ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ciffenum_groups* FUNC_1 (int) ;

__attribute__((used)) static HRESULT FUNC_2(ICifFile *VAR_3, struct list *VAR_4, IEnumCifGroups **VAR_5)
{
    struct ciffenum_groups *VAR_6;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if (!VAR_6) return VAR_0;

    VAR_6->IEnumCifGroups_iface.lpVtbl = &VAR_2;
    VAR_6->ref = 1;
    VAR_6->file = VAR_3;
    VAR_6->start = VAR_4;
    VAR_6->position = VAR_4;

    FUNC_0(VAR_3);

    *VAR_5 = &VAR_6->IEnumCifGroups_iface;
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct list {int dummy; } ;
struct TYPE_3__ {int * lpVtbl; } ;
struct ciffenum_components {int ref; char* group_id; TYPE_1__ IEnumCifComponents_iface; struct list* position; struct list* start; int * file; } ;
typedef TYPE_1__ IEnumCifComponents ;
typedef int ICifFile ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ciffenum_components* FUNC_1 (int) ;

__attribute__((used)) static HRESULT FUNC_2(ICifFile *VAR_3, struct list *VAR_4, char *VAR_5, IEnumCifComponents **VAR_6)
{
    struct ciffenum_components *VAR_7;

    VAR_7 = FUNC_1(sizeof(*VAR_7));
    if (!VAR_7) return VAR_0;

    VAR_7->IEnumCifComponents_iface.lpVtbl = &VAR_2;
    VAR_7->ref = 1;
    VAR_7->file = VAR_3;
    VAR_7->start = VAR_4;
    VAR_7->position = VAR_4;
    VAR_7->group_id = VAR_5;

    FUNC_0(VAR_3);

    *VAR_6 = &VAR_7->IEnumCifComponents_iface;
    return VAR_1;
}

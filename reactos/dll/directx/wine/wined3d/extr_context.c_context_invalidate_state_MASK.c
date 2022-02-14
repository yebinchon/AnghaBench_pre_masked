
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_context {size_t* dirtyArray; unsigned int* isStateDirty; int numDirtyEntries; TYPE_1__* state_table; } ;
struct TYPE_2__ {size_t representative; } ;
typedef size_t DWORD ;
typedef unsigned int BYTE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wined3d_context*,size_t) ;

void FUNC_1(struct wined3d_context *VAR_1, DWORD VAR_2)
{
    DWORD VAR_3 = VAR_1->state_table[VAR_2].representative;
    DWORD VAR_4;
    BYTE VAR_5;

    if (FUNC_0(VAR_1, VAR_3)) return;

    VAR_1->dirtyArray[VAR_1->numDirtyEntries++] = VAR_3;
    VAR_4 = VAR_3 / (sizeof(*VAR_1->isStateDirty) * VAR_0);
    VAR_5 = VAR_3 & ((sizeof(*VAR_1->isStateDirty) * VAR_0) - 1);
    VAR_1->isStateDirty[VAR_4] |= (1u << VAR_5);
}

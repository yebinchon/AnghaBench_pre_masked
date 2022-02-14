
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_context {unsigned int* dirty_compute_states; TYPE_1__* state_table; } ;
struct TYPE_2__ {size_t representative; } ;
typedef size_t DWORD ;


 int VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(struct wined3d_context *VAR_2, DWORD VAR_3)
{
    DWORD VAR_4 = VAR_2->state_table[VAR_3].representative - VAR_1;
    unsigned int VAR_5, VAR_6;

    VAR_5 = VAR_4 / (sizeof(*VAR_2->dirty_compute_states) * VAR_0);
    VAR_6 = VAR_4 & (sizeof(*VAR_2->dirty_compute_states) * VAR_0 - 1);
    VAR_2->dirty_compute_states[VAR_5] |= (1u << VAR_6);
}

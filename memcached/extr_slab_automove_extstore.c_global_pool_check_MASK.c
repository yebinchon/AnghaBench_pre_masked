
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct window_global {int pool_low; int pool_high; } ;
struct TYPE_3__ {int* free_mem; size_t window_cur; size_t window_size; int pool_filled_once; struct window_global* window_global; } ;
typedef TYPE_1__ slab_automove ;


 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (struct window_global*,int ,int) ;

__attribute__((used)) static void FUNC_2(slab_automove *VAR_0) {
    bool VAR_1;
    uint32_t VAR_2 = VAR_0->free_mem[0];
    struct window_global *VAR_3 = &VAR_0->window_global[VAR_0->window_cur % VAR_0->window_size];
    unsigned int VAR_4 = FUNC_0(&VAR_1);
    FUNC_1(VAR_3, 0, sizeof(struct window_global));
    if (!VAR_1)
        return;
    if (VAR_4 < VAR_2 / 2) {
        VAR_3->pool_low = 1;
        VAR_0->pool_filled_once = 1;
    } else if (VAR_4 > VAR_2) {
        VAR_3->pool_high = 1;
    } else {
        VAR_0->pool_filled_once = 1;
    }
}

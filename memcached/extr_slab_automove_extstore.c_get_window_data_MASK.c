
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct window_data {int dummy; } ;
struct TYPE_3__ {int window_size; int window_cur; struct window_data* window_data; } ;
typedef TYPE_1__ slab_automove ;



__attribute__((used)) static struct window_data *FUNC_0(slab_automove *VAR_0, int VAR_1) {
    int VAR_2 = VAR_1 * VAR_0->window_size;
    return &VAR_0->window_data[VAR_2 + (VAR_0->window_cur % VAR_0->window_size)];
}

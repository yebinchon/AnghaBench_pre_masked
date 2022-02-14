
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct window_data {int dummy; } ;
struct settings {int slab_automove_window; double slab_automove_ratio; } ;
struct TYPE_3__ {int window_size; double max_age_ratio; int sam_before; int iam_before; int * window_data; } ;
typedef TYPE_1__ slab_automove ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void *FUNC_4(struct settings *VAR_1) {
    uint32_t VAR_2 = VAR_1->slab_automove_window;
    double VAR_3 = VAR_1->slab_automove_ratio;
    slab_automove *VAR_4 = FUNC_0(1, sizeof(slab_automove));
    if (VAR_4 == ((void*)0))
        return ((void*)0);
    VAR_4->window_data = FUNC_0(VAR_2 * VAR_0, sizeof(struct window_data));
    VAR_4->window_size = VAR_2;
    VAR_4->max_age_ratio = VAR_3;
    if (VAR_4->window_data == ((void*)0)) {
        FUNC_3(VAR_4);
        return ((void*)0);
    }


    FUNC_1(VAR_4->iam_before);
    FUNC_2(VAR_4->sam_before);

    return (void *)VAR_4;
}

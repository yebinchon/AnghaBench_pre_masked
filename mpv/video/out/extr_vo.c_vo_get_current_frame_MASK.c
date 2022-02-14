
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_internal {int lock; TYPE_1__* current_frame; } ;
struct vo {struct vo_internal* in; } ;
struct mp_image {int dummy; } ;
struct TYPE_2__ {int current; } ;


 struct mp_image* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct mp_image *FUNC_3(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;
    FUNC_1(&VAR_1->lock);
    struct mp_image *VAR_2 = ((void*)0);
    if (VAR_0->in->current_frame)
        VAR_2 = FUNC_0(VAR_0->in->current_frame->current);
    FUNC_2(&VAR_1->lock);
    return VAR_2;
}

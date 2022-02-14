
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int lock; scalar_t__ next_frame; int dispatch; } ;
typedef TYPE_1__ mpv_render_context ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

uint64_t FUNC_3(mpv_render_context *VAR_1)
{
    uint64_t VAR_2 = 0;

    FUNC_0(VAR_1->dispatch, 0);

    FUNC_1(&VAR_1->lock);
    if (VAR_1->next_frame)
        VAR_2 |= VAR_0;
    FUNC_2(&VAR_1->lock);
    return VAR_2;
}

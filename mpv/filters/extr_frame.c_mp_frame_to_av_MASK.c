
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mp_frame {size_t type; int data; } ;
struct AVRational {int dummy; } ;
struct TYPE_6__ {TYPE_1__* (* new_av_ref ) (int ) ;} ;
struct TYPE_5__ {int pts; } ;
typedef TYPE_1__ AVFrame ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (struct mp_frame) ;
 int FUNC_1 (int ,struct AVRational*) ;
 TYPE_1__* FUNC_2 (int ) ;

AVFrame *FUNC_3(struct mp_frame VAR_1, struct AVRational *VAR_2)
{
    if (!VAR_0[VAR_1.type].new_av_ref)
        return ((void*)0);

    AVFrame *VAR_3 = VAR_0[VAR_1.type].new_av_ref(VAR_1.data);
    if (!VAR_3)
        return ((void*)0);

    VAR_3->pts = FUNC_1(FUNC_0(VAR_1), VAR_2);
    return VAR_3;
}

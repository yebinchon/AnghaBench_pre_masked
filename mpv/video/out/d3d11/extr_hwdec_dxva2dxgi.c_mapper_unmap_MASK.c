
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {scalar_t__* tex; struct priv* priv; } ;
struct priv {size_t queue_pos; size_t queue_len; TYPE_1__** queue; } ;
struct TYPE_2__ {scalar_t__ tex; } ;


 int FUNC_0 (struct ra_hwdec_mapper*) ;

__attribute__((used)) static void FUNC_1(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    if (VAR_1->queue_pos < VAR_1->queue_len &&
        VAR_1->queue[VAR_1->queue_pos]->tex == VAR_0->tex[0])
    {
        FUNC_0(VAR_0);
        VAR_0->tex[0] = ((void*)0);
    }
}

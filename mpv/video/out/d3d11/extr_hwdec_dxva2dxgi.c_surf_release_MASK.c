
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {struct priv* priv; } ;
struct priv {size_t queue_pos; size_t queue_len; TYPE_1__** queue; int ctx11; } ;
struct TYPE_2__ {scalar_t__ idle11; } ;
typedef int ID3D11Asynchronous ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_1->ctx11,
        (ID3D11Asynchronous *)VAR_1->queue[VAR_1->queue_pos]->idle11);


    VAR_1->queue_pos++;
    if (VAR_1->queue_pos >= VAR_1->queue_len)
        VAR_1->queue_pos = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_hwdec_mapper {struct priv* priv; } ;
struct priv {int queue_len; int dev11; int dev9; int ctx11; int * queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ra_hwdec_mapper*,int ) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    for (int VAR_2 = 0; VAR_2 < VAR_1->queue_len; VAR_2++)
        FUNC_1(VAR_0, VAR_1->queue[VAR_2]);

    FUNC_0(VAR_1->ctx11);
    FUNC_0(VAR_1->dev9);
    FUNC_0(VAR_1->dev11);
}

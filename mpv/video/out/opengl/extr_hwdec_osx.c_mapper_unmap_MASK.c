
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec_mapper {int * tex; int ra; struct priv* priv; } ;
struct TYPE_2__ {int num_planes; } ;
struct priv {TYPE_1__ desc; int * pbuf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;


    FUNC_0(VAR_1->pbuf);
    VAR_1->pbuf = ((void*)0);

    for (int VAR_2 = 0; VAR_2 < VAR_1->desc.num_planes; VAR_2++)
        FUNC_1(VAR_0->ra, &VAR_0->tex[VAR_2]);
}

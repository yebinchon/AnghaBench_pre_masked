
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int download_tasks; int upload_tasks; } ;
typedef int HttpTxTask ;
typedef TYPE_2__ HttpTxManager ;


 int * FUNC_0 (int ,char const*) ;

HttpTxTask *
FUNC_1 (HttpTxManager *VAR_0, const char *VAR_1)
{
    HttpTxTask *VAR_2 = ((void*)0);

    VAR_2 = FUNC_0 (VAR_0->priv->upload_tasks, VAR_1);
    if (VAR_2)
        return VAR_2;

    VAR_2 = FUNC_0 (VAR_0->priv->download_tasks, VAR_1);
    return VAR_2;
}

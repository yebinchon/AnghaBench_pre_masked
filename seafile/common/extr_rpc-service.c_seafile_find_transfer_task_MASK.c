
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int http_tx_mgr; } ;
typedef int HttpTxTask ;
typedef int GObject ;
typedef int GError ;


 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int ,char const*) ;
 TYPE_1__* VAR_0 ;

GObject *
FUNC_2 (const char *VAR_1, GError *VAR_2)
{
    HttpTxTask *VAR_3;

    VAR_3 = FUNC_1 (VAR_0->http_tx_mgr, VAR_1);
    if (VAR_3)
        return (GObject *)FUNC_0 (VAR_3);

    return ((void*)0);
}

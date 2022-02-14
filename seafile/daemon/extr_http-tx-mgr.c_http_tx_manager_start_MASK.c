
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int reset_bytes_timer; int ca_bundle_path; } ;
typedef TYPE_2__ HttpTxManager ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;

int
FUNC_2 (HttpTxManager *VAR_2)
{







    VAR_2->priv->reset_bytes_timer = FUNC_1 (VAR_1,
                                                   VAR_2,
                                                   VAR_0);

    return 0;
}

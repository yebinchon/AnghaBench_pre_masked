
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {scalar_t__ state; scalar_t__ runtime_state; } ;
struct TYPE_7__ {int upload_tasks; int download_tasks; } ;
typedef TYPE_2__ HttpTxTask ;
typedef TYPE_3__ HttpTxManager ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (int ,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__) ;

void
FUNC_3 (HttpTxManager *VAR_5,
                             const char *VAR_6,
                             int VAR_7)
{
    HttpTxTask *VAR_8 = ((void*)0);

    if (VAR_7 == VAR_4)
        VAR_8 = FUNC_0 (VAR_5->priv->download_tasks, VAR_6);
    else
        VAR_8 = FUNC_0 (VAR_5->priv->upload_tasks, VAR_6);

    if (!VAR_8)
        return;

    if (VAR_8->state != VAR_3) {
        FUNC_1 ("Cannot cancel task not in NORMAL state.\n");
        return;
    }

    if (VAR_8->runtime_state == VAR_1) {
        FUNC_2 (VAR_8, VAR_2, VAR_0);
        return;
    }


    FUNC_2 (VAR_8, VAR_2, VAR_8->runtime_state);
}

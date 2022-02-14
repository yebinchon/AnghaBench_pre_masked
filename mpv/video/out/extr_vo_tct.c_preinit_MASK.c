
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vo {int monitor_par; int global; int log; struct priv* priv; TYPE_1__* opts; } ;
struct priv {TYPE_2__* sws; int opts; } ;
struct TYPE_5__ {int log; } ;
struct TYPE_4__ {int monitor_pixel_aspect; } ;


 int FUNC_0 (struct vo*,int ,int *) ;
 TYPE_2__* FUNC_1 (struct vo*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct vo *VAR_1)
{


    VAR_1->monitor_par = VAR_1->opts->monitor_pixel_aspect * 2;

    struct priv *VAR_2 = VAR_1->priv;
    VAR_2->opts = FUNC_0(VAR_1, VAR_1->global, &VAR_0);
    VAR_2->sws = FUNC_1(VAR_1);
    VAR_2->sws->log = VAR_1->log;
    FUNC_2(VAR_2->sws, VAR_1->global);
    return 0;
}

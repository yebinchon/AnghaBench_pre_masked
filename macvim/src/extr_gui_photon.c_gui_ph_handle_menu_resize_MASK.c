
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* int_u ;
struct TYPE_12__ {int * vimContainer; int * vimPanelGroup; void* toolbar_height; void* menu_height; scalar_t__ menu_is_active; } ;
struct TYPE_11__ {void* y; scalar_t__ x; } ;
struct TYPE_10__ {TYPE_2__* cbdata; } ;
struct TYPE_8__ {void* h; } ;
struct TYPE_9__ {TYPE_1__ new_dim; } ;
typedef int PtWidget_t ;
typedef TYPE_2__ PtContainerCallback_t ;
typedef TYPE_3__ PtCallbackInfo_t ;
typedef TYPE_4__ PhPoint_t ;


 int FUNC_0 (int *,int ,TYPE_4__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (int *,int *,int *,int *) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(
 PtWidget_t *VAR_7,
 void *VAR_8,
 PtCallbackInfo_t *VAR_9)
{
    PtContainerCallback_t *VAR_10 = VAR_9->cbdata;
    PtWidget_t *VAR_11;
    PhPoint_t VAR_12;
    int_u VAR_13;

    VAR_13 = VAR_10->new_dim.h;




    if (VAR_2.menu_is_active)
    {
 VAR_2.menu_height = VAR_13;
 VAR_2.toolbar_height = 0;
    }





    VAR_12.x = 0;
    VAR_12.y = VAR_13;




    VAR_11 = VAR_2.vimContainer;


    FUNC_0(VAR_11, VAR_0, &VAR_12, 0);

    FUNC_2();






    return VAR_1;
}

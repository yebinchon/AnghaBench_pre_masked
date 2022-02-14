
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ log; scalar_t__ length; } ;
struct TYPE_8__ {scalar_t__ url; TYPE_1__ travellog; int cps; scalar_t__ shell_ui_helper; } ;
typedef TYPE_2__ DocHost ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(DocHost *VAR_0)
{
    if(VAR_0->shell_ui_helper)
        FUNC_2(VAR_0->shell_ui_helper);

    FUNC_3(VAR_0, ((void*)0));
    FUNC_6(VAR_0);
    FUNC_1(VAR_0);

    FUNC_0(&VAR_0->cps);

    while(VAR_0->travellog.length)
        FUNC_4(VAR_0->travellog.log + --VAR_0->travellog.length);
    FUNC_5(VAR_0->travellog.log);

    FUNC_5(VAR_0->url);
}

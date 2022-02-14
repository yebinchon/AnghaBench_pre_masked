
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int header; TYPE_3__* window; } ;
typedef TYPE_2__ readystate_task_t ;
struct TYPE_7__ {int IHTMLWindow2_iface; } ;
struct TYPE_9__ {scalar_t__ readystate; scalar_t__ readystate_pending; int task_magic; TYPE_1__ base; scalar_t__ readystate_locked; } ;
typedef scalar_t__ READYSTATE ;
typedef TYPE_3__ HTMLOuterWindow ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int ,int ,int ) ;

void FUNC_5(HTMLOuterWindow *VAR_3, READYSTATE VAR_4)
{
    READYSTATE VAR_5 = VAR_3->readystate;

    VAR_3->readystate = VAR_4;

    if(VAR_3->readystate_locked) {
        readystate_task_t *VAR_6;
        HRESULT VAR_7;

        if(VAR_3->readystate_pending || VAR_5 == VAR_4)
            return;

        VAR_6 = FUNC_2(sizeof(*VAR_6));
        if(!VAR_6)
            return;

        FUNC_0(&VAR_3->base.IHTMLWindow2_iface);
        VAR_6->window = VAR_3;

        VAR_7 = FUNC_4(&VAR_6->header, VAR_2, VAR_1, VAR_3->task_magic);
        if(FUNC_1(VAR_7))
            VAR_3->readystate_pending = VAR_0;
        return;
    }

    FUNC_3(VAR_3);
}

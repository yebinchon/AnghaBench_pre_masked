
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nn_usock {int dummy; } ;
struct TYPE_3__ {int inbuffersz; int outbuffersz; int sec_attr; } ;
struct TYPE_4__ {int * fsm; int src; } ;
struct nn_aipc {int fsm; TYPE_1__ usock; int ep; TYPE_2__ listener_owner; struct nn_usock* listener; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nn_aipc*,int ) ;
 int FUNC_1 (int ,int ,int ,int *,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nn_usock*,TYPE_2__*) ;

void FUNC_4 (struct nn_aipc *VAR_6, struct nn_usock *VAR_7)
{



    FUNC_0 (VAR_6, VAR_1);


    VAR_6->listener = VAR_7;
    VAR_6->listener_owner.src = VAR_0;
    VAR_6->listener_owner.fsm = &VAR_6->fsm;
    FUNC_3 (VAR_7, &VAR_6->listener_owner);
    FUNC_2 (&VAR_6->fsm);
}

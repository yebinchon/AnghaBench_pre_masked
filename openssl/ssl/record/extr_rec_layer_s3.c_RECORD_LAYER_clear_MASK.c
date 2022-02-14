
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ d; int rrec; scalar_t__ numrpipes; int s; int rbuf; int * wpend_buf; scalar_t__ wpend_ret; scalar_t__ wpend_type; scalar_t__ wpend_tot; scalar_t__ handshake_fragment_len; int handshake_fragment; scalar_t__ wnum; scalar_t__ packet_length; int * packet; int rstate; } ;
typedef TYPE_1__ RECORD_LAYER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ) ;

void FUNC_7(RECORD_LAYER *VAR_2)
{
    VAR_2->rstate = VAR_1;







    VAR_2->packet = ((void*)0);
    VAR_2->packet_length = 0;
    VAR_2->wnum = 0;
    FUNC_5(VAR_2->handshake_fragment, 0, sizeof(VAR_2->handshake_fragment));
    VAR_2->handshake_fragment_len = 0;
    VAR_2->wpend_tot = 0;
    VAR_2->wpend_type = 0;
    VAR_2->wpend_ret = 0;
    VAR_2->wpend_buf = ((void*)0);

    FUNC_3(&VAR_2->rbuf);
    FUNC_6(VAR_2->s);
    VAR_2->numrpipes = 0;
    FUNC_4(VAR_2->rrec, VAR_0);

    FUNC_1(VAR_2);
    FUNC_2(VAR_2);

    if (VAR_2->d)
        FUNC_0(VAR_2);
}

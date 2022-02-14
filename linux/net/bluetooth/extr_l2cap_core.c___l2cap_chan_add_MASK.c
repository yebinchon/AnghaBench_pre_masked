
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_conn {int chan_l; TYPE_1__* hcon; int disc_reason; } ;
struct l2cap_chan {int chan_type; int list; int flags; int local_flush_to; int local_acc_lat; int local_sdu_itime; int local_msdu; int local_stype; int local_id; void* omtu; void* dcid; void* scid; struct l2cap_conn* conn; int psm; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct l2cap_conn*,int ,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (struct l2cap_conn*) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

void FUNC_7(struct l2cap_conn *VAR_12, struct l2cap_chan *VAR_13)
{
 FUNC_0("conn %p, psm 0x%2.2x, dcid 0x%4.4x", VAR_12,
        FUNC_1(VAR_13->psm), VAR_13->dcid);

 VAR_12->disc_reason = VAR_2;

 VAR_13->conn = VAR_12;

 switch (VAR_13->chan_type) {
 case 129:

  VAR_13->scid = FUNC_3(VAR_12);
  if (VAR_12->hcon->type == VAR_0)
   VAR_13->omtu = VAR_8;
  break;

 case 130:

  VAR_13->scid = VAR_4;
  VAR_13->dcid = VAR_4;
  VAR_13->omtu = VAR_8;
  break;

 case 128:

  break;

 default:

  VAR_13->scid = VAR_5;
  VAR_13->dcid = VAR_5;
  VAR_13->omtu = VAR_8;
 }

 VAR_13->local_id = VAR_3;
 VAR_13->local_stype = VAR_11;
 VAR_13->local_msdu = VAR_7;
 VAR_13->local_sdu_itime = VAR_9;
 VAR_13->local_acc_lat = VAR_6;
 VAR_13->local_flush_to = VAR_10;

 FUNC_4(VAR_13);


 if (VAR_13->chan_type != 128 ||
     FUNC_6(VAR_1, &VAR_13->flags))
  FUNC_2(VAR_12->hcon);

 FUNC_5(&VAR_13->list, &VAR_12->chan_l);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct l2cap_le_conn_rsp {void* result; void* credits; void* dcid; void* mps; void* mtu; } ;
struct l2cap_le_conn_req {int credits; int psm; int mps; int mtu; int scid; } ;
struct l2cap_conn {int chan_lock; TYPE_2__* hcon; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {int dcid; int omtu; int remote_mps; int scid; int rx_credits; scalar_t__ imtu; scalar_t__ mps; TYPE_1__* ops; int flags; int ident; int psm; int dst_type; int src_type; int dst; int src; int sec_level; } ;
typedef int rsp ;
typedef int __le16 ;
struct TYPE_6__ {int dst; int src; } ;
struct TYPE_5__ {int (* defer ) (struct l2cap_chan*) ;int (* get_sndtimeo ) (struct l2cap_chan*) ;struct l2cap_chan* (* new_connection ) (struct l2cap_chan*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct l2cap_conn*,struct l2cap_chan*) ;
 scalar_t__ FUNC_2 (struct l2cap_conn*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct l2cap_chan*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 void* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct l2cap_chan*) ;
 int FUNC_10 (struct l2cap_chan*) ;
 int FUNC_11 (struct l2cap_chan*) ;
 int FUNC_12 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_13 (int ,int ,int *,int *,int ) ;
 int FUNC_14 (struct l2cap_chan*,int) ;
 int FUNC_15 (struct l2cap_conn*,int ,int ,int,struct l2cap_le_conn_rsp*) ;
 int FUNC_16 (struct l2cap_chan*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_2__*,int ,int ) ;
 struct l2cap_chan* FUNC_20 (struct l2cap_chan*) ;
 int FUNC_21 (struct l2cap_chan*) ;
 int FUNC_22 (struct l2cap_chan*) ;
 scalar_t__ FUNC_23 (int ,int *) ;

__attribute__((used)) static int FUNC_24(struct l2cap_conn *VAR_16,
    struct l2cap_cmd_hdr *VAR_17, u16 VAR_18,
    u8 *VAR_19)
{
 struct l2cap_le_conn_req *VAR_20 = (struct l2cap_le_conn_req *) VAR_19;
 struct l2cap_le_conn_rsp VAR_21;
 struct l2cap_chan *VAR_22, *VAR_23;
 u16 VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 __le16 VAR_29;
 u8 VAR_30;

 if (VAR_18 != sizeof(*VAR_20))
  return -VAR_2;

 VAR_25 = FUNC_3(VAR_20->scid);
 VAR_27 = FUNC_3(VAR_20->mtu);
 VAR_28 = FUNC_3(VAR_20->mps);
 VAR_29 = VAR_20->psm;
 VAR_24 = 0;
 VAR_26 = 0;

 if (VAR_27 < 23 || VAR_28 < 23)
  return -VAR_2;

 FUNC_0("psm 0x%2.2x scid 0x%4.4x mtu %u mps %u", FUNC_3(VAR_29),
        VAR_25, VAR_27, VAR_28);


 VAR_23 = FUNC_13(VAR_1, VAR_29, &VAR_16->hcon->src,
      &VAR_16->hcon->dst, VAR_14);
 if (!VAR_23) {
  VAR_30 = VAR_7;
  VAR_22 = ((void*)0);
  goto response;
 }

 FUNC_17(&VAR_16->chan_lock);
 FUNC_9(VAR_23);

 if (!FUNC_19(VAR_16->hcon, VAR_23->sec_level,
         VAR_15)) {
  VAR_30 = VAR_6;
  VAR_22 = ((void*)0);
  goto response_unlock;
 }


 if (VAR_25 < VAR_4 || VAR_25 > VAR_5) {
  VAR_30 = VAR_8;
  VAR_22 = ((void*)0);
  goto response_unlock;
 }


 if (FUNC_2(VAR_16, VAR_25)) {
  VAR_30 = VAR_10;
  VAR_22 = ((void*)0);
  goto response_unlock;
 }

 VAR_22 = VAR_23->ops->new_connection(VAR_23);
 if (!VAR_22) {
  VAR_30 = VAR_9;
  goto response_unlock;
 }

 FUNC_5(&VAR_22->src, &VAR_16->hcon->src);
 FUNC_5(&VAR_22->dst, &VAR_16->hcon->dst);
 VAR_22->src_type = FUNC_7(VAR_16->hcon);
 VAR_22->dst_type = FUNC_6(VAR_16->hcon);
 VAR_22->psm = VAR_29;
 VAR_22->dcid = VAR_25;
 VAR_22->omtu = VAR_27;
 VAR_22->remote_mps = VAR_28;

 FUNC_1(VAR_16, VAR_22);

 FUNC_14(VAR_22, FUNC_3(VAR_20->credits));

 VAR_24 = VAR_22->scid;
 VAR_26 = VAR_22->rx_credits;

 FUNC_4(VAR_22, VAR_22->ops->get_sndtimeo(VAR_22));

 VAR_22->ident = VAR_17->ident;

 if (FUNC_23(VAR_3, &VAR_22->flags)) {
  FUNC_16(VAR_22, VAR_0);





  VAR_30 = VAR_12;
  VAR_22->ops->defer(VAR_22);
 } else {
  FUNC_11(VAR_22);
  VAR_30 = VAR_11;
 }

response_unlock:
 FUNC_12(VAR_23);
 FUNC_18(&VAR_16->chan_lock);
 FUNC_10(VAR_23);

 if (VAR_30 == VAR_12)
  return 0;

response:
 if (VAR_22) {
  VAR_21.mtu = FUNC_8(VAR_22->imtu);
  VAR_21.mps = FUNC_8(VAR_22->mps);
 } else {
  VAR_21.mtu = 0;
  VAR_21.mps = 0;
 }

 VAR_21.dcid = FUNC_8(VAR_24);
 VAR_21.credits = FUNC_8(VAR_26);
 VAR_21.result = FUNC_8(VAR_30);

 FUNC_15(VAR_16, VAR_17->ident, VAR_13, sizeof(VAR_21), &VAR_21);

 return 0;
}

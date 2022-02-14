
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct l2cap_move_chan_rsp {void* result; void* icid; } ;
struct l2cap_move_chan_req {scalar_t__ dest_amp_id; int icid; } ;
struct l2cap_conn {int local_fixed_chan; TYPE_1__* hcon; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {scalar_t__ scid; scalar_t__ chan_policy; scalar_t__ mode; scalar_t__ local_amp_id; scalar_t__ move_role; scalar_t__ move_id; int dcid; int move_state; int conn_state; int ident; } ;
struct hci_dev {scalar_t__ dev_type; int flags; } ;
typedef int rsp ;
struct TYPE_2__ {int dst; int src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_1 (struct l2cap_chan*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 void* FUNC_3 (int) ;
 struct hci_dev* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_7 (struct l2cap_conn*,int) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (struct l2cap_conn*,int ,int ,int,struct l2cap_move_chan_rsp*) ;
 int FUNC_10 (struct l2cap_chan*,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static inline int FUNC_13(struct l2cap_conn *VAR_23,
      struct l2cap_cmd_hdr *VAR_24,
      u16 VAR_25, void *VAR_26)
{
 struct l2cap_move_chan_req *VAR_27 = VAR_26;
 struct l2cap_move_chan_rsp VAR_28;
 struct l2cap_chan *VAR_29;
 u16 VAR_30 = 0;
 u16 VAR_31 = VAR_19;

 if (VAR_25 != sizeof(*VAR_27))
  return -VAR_4;

 VAR_30 = FUNC_11(VAR_27->icid);

 FUNC_0("icid 0x%4.4x, dest_amp_id %d", VAR_30, VAR_27->dest_amp_id);

 if (!(VAR_23->local_fixed_chan & VAR_8))
  return -VAR_3;

 VAR_29 = FUNC_7(VAR_23, VAR_30);
 if (!VAR_29) {
  VAR_28.icid = FUNC_3(VAR_30);
  VAR_28.result = FUNC_3(VAR_19);
  FUNC_9(VAR_23, VAR_24->ident, VAR_11,
          sizeof(VAR_28), &VAR_28);
  return 0;
 }

 VAR_29->ident = VAR_24->ident;

 if (VAR_29->scid < VAR_7 ||
     VAR_29->chan_policy == VAR_1 ||
     (VAR_29->mode != VAR_9 &&
      VAR_29->mode != VAR_10)) {
  VAR_31 = VAR_19;
  goto send_move_response;
 }

 if (VAR_29->local_amp_id == VAR_27->dest_amp_id) {
  VAR_31 = VAR_21;
  goto send_move_response;
 }

 if (VAR_27->dest_amp_id != VAR_0) {
  struct hci_dev *VAR_32;
  VAR_32 = FUNC_4(VAR_27->dest_amp_id);
  if (!VAR_32 || VAR_32->dev_type != VAR_5 ||
      !FUNC_12(VAR_6, &VAR_32->flags)) {
   if (VAR_32)
    FUNC_5(VAR_32);

   VAR_31 = VAR_17;
   goto send_move_response;
  }
  FUNC_5(VAR_32);
 }





 if ((FUNC_1(VAR_29) ||
      VAR_29->move_role != VAR_12) &&
     FUNC_2(&VAR_23->hcon->src, &VAR_23->hcon->dst) > 0) {
  VAR_31 = VAR_18;
  goto send_move_response;
 }

 VAR_29->move_role = VAR_13;
 FUNC_8(VAR_29);
 VAR_29->move_id = VAR_27->dest_amp_id;
 VAR_30 = VAR_29->dcid;

 if (VAR_27->dest_amp_id == VAR_0) {

  if (FUNC_12(VAR_2, &VAR_29->conn_state)) {
   VAR_29->move_state = VAR_15;
   VAR_31 = VAR_20;
  } else {
   VAR_29->move_state = VAR_14;
   VAR_31 = VAR_22;
  }
 } else {
  VAR_29->move_state = VAR_16;


  VAR_31 = VAR_20;
 }

send_move_response:
 FUNC_10(VAR_29, VAR_31);

 FUNC_6(VAR_29);

 return 0;
}

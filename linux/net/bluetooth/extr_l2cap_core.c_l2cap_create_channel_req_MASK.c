
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct l2cap_create_chan_rsp {void* status; void* result; void* scid; scalar_t__ dcid; } ;
struct l2cap_create_chan_req {scalar_t__ amp_id; int scid; int psm; } ;
struct l2cap_conn {int local_fixed_chan; int mtu; TYPE_1__* hcon; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {int fcs; struct hci_conn* hs_hcon; int dcid; int scid; } ;
struct hci_dev {scalar_t__ dev_type; int block_mtu; int flags; } ;
struct hci_conn {int dummy; } ;
struct amp_mgr {struct l2cap_chan* bredr_chan; } ;
typedef int rsp ;
struct TYPE_2__ {int dst; struct amp_mgr* amp_mgr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct l2cap_conn*,int ,int ,int ) ;
 void* FUNC_2 (int) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ,int *) ;
 struct hci_dev* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct hci_dev*) ;
 struct l2cap_chan* FUNC_6 (struct l2cap_conn*,struct l2cap_cmd_hdr*,void*,int ,scalar_t__) ;
 int FUNC_7 (struct l2cap_conn*,int ,int ,int,struct l2cap_create_chan_rsp*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct l2cap_conn *VAR_11,
        struct l2cap_cmd_hdr *VAR_12,
        u16 VAR_13, void *VAR_14)
{
 struct l2cap_create_chan_req *VAR_15 = VAR_14;
 struct l2cap_create_chan_rsp VAR_16;
 struct l2cap_chan *VAR_17;
 struct hci_dev *VAR_18;
 u16 VAR_19, VAR_20;

 if (VAR_13 != sizeof(*VAR_15))
  return -VAR_3;

 if (!(VAR_11->local_fixed_chan & VAR_10))
  return -VAR_2;

 VAR_19 = FUNC_8(VAR_15->psm);
 VAR_20 = FUNC_8(VAR_15->scid);

 FUNC_0("psm 0x%2.2x, scid 0x%4.4x, amp_id %d", VAR_19, VAR_20, VAR_15->amp_id);


 if (VAR_15->amp_id == VAR_0) {
  FUNC_6(VAR_11, VAR_12, VAR_14, VAR_6,
         VAR_15->amp_id);
  return 0;
 }


 VAR_18 = FUNC_4(VAR_15->amp_id);
 if (!VAR_18)
  goto error;

 if (VAR_18->dev_type != VAR_4 || !FUNC_9(VAR_5, &VAR_18->flags)) {
  FUNC_5(VAR_18);
  goto error;
 }

 VAR_17 = FUNC_6(VAR_11, VAR_12, VAR_14, VAR_6,
        VAR_15->amp_id);
 if (VAR_17) {
  struct amp_mgr *VAR_21 = VAR_11->hcon->amp_mgr;
  struct hci_conn *VAR_22;

  VAR_22 = FUNC_3(VAR_18, VAR_1,
        &VAR_11->hcon->dst);
  if (!VAR_22) {
   FUNC_5(VAR_18);
   FUNC_1(VAR_11, VAR_12->ident, VAR_17->scid,
            VAR_17->dcid);
   return 0;
  }

  FUNC_0("mgr %p bredr_chan %p hs_hcon %p", VAR_21, VAR_17, VAR_22);

  VAR_21->bredr_chan = VAR_17;
  VAR_17->hs_hcon = VAR_22;
  VAR_17->fcs = VAR_9;
  VAR_11->mtu = VAR_18->block_mtu;
 }

 FUNC_5(VAR_18);

 return 0;

error:
 VAR_16.dcid = 0;
 VAR_16.scid = FUNC_2(VAR_20);
 VAR_16.result = FUNC_2(VAR_7);
 VAR_16.status = FUNC_2(VAR_8);

 FUNC_7(VAR_11, VAR_12->ident, VAR_6,
         sizeof(VAR_16), &VAR_16);

 return 0;
}

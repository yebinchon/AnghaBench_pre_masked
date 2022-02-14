
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_le_conn_rsp {int result; int credits; int mps; int mtu; int dcid; } ;
struct l2cap_conn {int chan_lock; struct hci_conn* hcon; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {int dcid; int omtu; int remote_mps; int tx_credits; int sec_level; int flags; int ident; } ;
struct hci_conn {int sec_level; } ;


 int FUNC_0 (char*,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (struct l2cap_conn*,int) ;
 struct l2cap_chan* FUNC_2 (struct l2cap_conn*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct l2cap_chan*,int ) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct hci_conn*,int) ;

__attribute__((used)) static int FUNC_12(struct l2cap_conn *VAR_7,
    struct l2cap_cmd_hdr *VAR_8, u16 VAR_9,
    u8 *VAR_10)
{
 struct l2cap_le_conn_rsp *VAR_11 = (struct l2cap_le_conn_rsp *) VAR_10;
 struct hci_conn *VAR_12 = VAR_7->hcon;
 u16 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct l2cap_chan *VAR_18;
 int VAR_19, VAR_20;

 if (VAR_9 < sizeof(*VAR_11))
  return -VAR_3;

 VAR_13 = FUNC_3(VAR_11->dcid);
 VAR_14 = FUNC_3(VAR_11->mtu);
 VAR_15 = FUNC_3(VAR_11->mps);
 VAR_16 = FUNC_3(VAR_11->credits);
 VAR_17 = FUNC_3(VAR_11->result);

 if (VAR_17 == 128 && (VAR_14 < 23 || VAR_15 < 23 ||
        VAR_13 < VAR_5 ||
        VAR_13 > VAR_6))
  return -VAR_3;

 FUNC_0("dcid 0x%4.4x mtu %u mps %u credits %u result 0x%2.2x",
        VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);

 FUNC_9(&VAR_7->chan_lock);

 VAR_18 = FUNC_2(VAR_7, VAR_8->ident);
 if (!VAR_18) {
  VAR_19 = -VAR_1;
  goto unlock;
 }

 VAR_19 = 0;

 FUNC_6(VAR_18);

 switch (VAR_17) {
 case 128:
  if (FUNC_1(VAR_7, VAR_13)) {
   VAR_19 = -VAR_1;
   break;
  }

  VAR_18->ident = 0;
  VAR_18->dcid = VAR_13;
  VAR_18->omtu = VAR_14;
  VAR_18->remote_mps = VAR_15;
  VAR_18->tx_credits = VAR_16;
  FUNC_7(VAR_18);
  break;

 case 130:
 case 129:



  if (VAR_12->sec_level > VAR_0) {
   FUNC_5(VAR_18, VAR_2);
   break;
  }

  VAR_20 = VAR_12->sec_level + 1;
  if (VAR_18->sec_level < VAR_20)
   VAR_18->sec_level = VAR_20;


  FUNC_4(VAR_4, &VAR_18->flags);

  FUNC_11(VAR_12, VAR_18->sec_level);
  break;

 default:
  FUNC_5(VAR_18, VAR_2);
  break;
 }

 FUNC_8(VAR_18);

unlock:
 FUNC_10(&VAR_7->chan_lock);

 return VAR_19;
}

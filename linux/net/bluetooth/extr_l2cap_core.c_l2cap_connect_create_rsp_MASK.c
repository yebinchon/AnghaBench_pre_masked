
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn_rsp {int status; int result; int dcid; int scid; } ;
struct l2cap_conn {int chan_lock; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {int dcid; int conf_state; int num_conf_req; int ident; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 struct l2cap_chan* FUNC_1 (struct l2cap_conn*,int ) ;
 struct l2cap_chan* FUNC_2 (struct l2cap_conn*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct l2cap_chan*,int *,int) ;
 int FUNC_6 (struct l2cap_chan*,int ) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (struct l2cap_conn*) ;
 int FUNC_10 (struct l2cap_conn*,int ,int ,int ,int *) ;
 int FUNC_11 (struct l2cap_chan*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct l2cap_conn *VAR_7,
        struct l2cap_cmd_hdr *VAR_8, u16 VAR_9,
        u8 *VAR_10)
{
 struct l2cap_conn_rsp *VAR_11 = (struct l2cap_conn_rsp *) VAR_10;
 u16 VAR_12, VAR_13, VAR_14, VAR_15;
 struct l2cap_chan *VAR_16;
 u8 VAR_17[128];
 int VAR_18;

 if (VAR_9 < sizeof(*VAR_11))
  return -VAR_5;

 VAR_12 = FUNC_3(VAR_11->scid);
 VAR_13 = FUNC_3(VAR_11->dcid);
 VAR_14 = FUNC_3(VAR_11->result);
 VAR_15 = FUNC_3(VAR_11->status);

 FUNC_0("dcid 0x%4.4x scid 0x%4.4x result 0x%2.2x status 0x%2.2x",
        VAR_13, VAR_12, VAR_14, VAR_15);

 FUNC_12(&VAR_7->chan_lock);

 if (VAR_12) {
  VAR_16 = FUNC_2(VAR_7, VAR_12);
  if (!VAR_16) {
   VAR_18 = -VAR_3;
   goto unlock;
  }
 } else {
  VAR_16 = FUNC_1(VAR_7, VAR_8->ident);
  if (!VAR_16) {
   VAR_18 = -VAR_3;
   goto unlock;
  }
 }

 VAR_18 = 0;

 FUNC_7(VAR_16);

 switch (VAR_14) {
 case 128:
  FUNC_11(VAR_16, VAR_0);
  VAR_16->ident = 0;
  VAR_16->dcid = VAR_13;
  FUNC_4(VAR_1, &VAR_16->conf_state);

  if (FUNC_15(VAR_2, &VAR_16->conf_state))
   break;

  FUNC_10(VAR_7, FUNC_9(VAR_7), VAR_6,
          FUNC_5(VAR_16, VAR_17, sizeof(VAR_17)), VAR_17);
  VAR_16->num_conf_req++;
  break;

 case 129:
  FUNC_14(VAR_1, &VAR_16->conf_state);
  break;

 default:
  FUNC_6(VAR_16, VAR_4);
  break;
 }

 FUNC_8(VAR_16);

unlock:
 FUNC_13(&VAR_7->chan_lock);

 return VAR_18;
}

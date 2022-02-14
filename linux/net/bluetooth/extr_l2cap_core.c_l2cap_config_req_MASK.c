
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_conf_req {int data; int flags; int dcid; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {scalar_t__ state; int scid; int conf_len; scalar_t__ mode; int ident; int hs_hcon; int conf_state; int num_conf_req; int num_conf_rsp; scalar_t__ conf_req; int dcid; } ;
typedef int rsp ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct l2cap_conn*,int ,int,int ) ;
 int FUNC_3 (struct l2cap_chan*,int *,int) ;
 int FUNC_4 (struct l2cap_chan*,int *,int ,int) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_8 (struct l2cap_conn*,int) ;
 int FUNC_9 (struct l2cap_conn*) ;
 int FUNC_10 (struct l2cap_chan*,int *,int) ;
 int FUNC_11 (struct l2cap_conn*,int ,int ,int,int *) ;
 int FUNC_12 (struct l2cap_chan*,int) ;
 int FUNC_13 (struct l2cap_chan*,int *,int ,int) ;
 int FUNC_14 (scalar_t__,int ,int) ;
 int FUNC_15 (struct l2cap_chan*) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static inline int FUNC_18(struct l2cap_conn *VAR_16,
       struct l2cap_cmd_hdr *VAR_17, u16 VAR_18,
       u8 *VAR_19)
{
 struct l2cap_conf_req *VAR_20 = (struct l2cap_conf_req *) VAR_19;
 u16 VAR_21, VAR_22;
 u8 VAR_23[64];
 struct l2cap_chan *VAR_24;
 int VAR_25, VAR_26 = 0;

 if (VAR_18 < sizeof(*VAR_20))
  return -VAR_8;

 VAR_21 = FUNC_1(VAR_20->dcid);
 VAR_22 = FUNC_1(VAR_20->flags);

 FUNC_0("dcid 0x%4.4x flags 0x%2.2x", VAR_21, VAR_22);

 VAR_24 = FUNC_8(VAR_16, VAR_21);
 if (!VAR_24) {
  FUNC_2(VAR_16, VAR_17->ident, VAR_21, 0);
  return 0;
 }

 if (VAR_24->state != VAR_0 && VAR_24->state != VAR_1) {
  FUNC_2(VAR_16, VAR_17->ident, VAR_24->scid,
           VAR_24->dcid);
  goto unlock;
 }


 VAR_25 = VAR_18 - sizeof(*VAR_20);
 if (VAR_24->conf_len + VAR_25 > sizeof(VAR_24->conf_req)) {
  FUNC_11(VAR_16, VAR_17->ident, VAR_12,
          FUNC_4(VAR_24, VAR_23,
          VAR_10, VAR_22), VAR_23);
  goto unlock;
 }


 FUNC_14(VAR_24->conf_req + VAR_24->conf_len, VAR_20->data, VAR_25);
 VAR_24->conf_len += VAR_25;

 if (VAR_22 & VAR_9) {

  FUNC_11(VAR_16, VAR_17->ident, VAR_12,
          FUNC_4(VAR_24, VAR_23,
          VAR_13, VAR_22), VAR_23);
  goto unlock;
 }


 VAR_25 = FUNC_10(VAR_24, VAR_23, sizeof(VAR_23));
 if (VAR_25 < 0) {
  FUNC_12(VAR_24, VAR_7);
  goto unlock;
 }

 VAR_24->ident = VAR_17->ident;
 FUNC_11(VAR_16, VAR_17->ident, VAR_12, VAR_25, VAR_23);
 VAR_24->num_conf_rsp++;


 VAR_24->conf_len = 0;

 if (!FUNC_17(VAR_4, &VAR_24->conf_state))
  goto unlock;

 if (FUNC_17(VAR_2, &VAR_24->conf_state)) {
  FUNC_15(VAR_24);

  if (VAR_24->mode == VAR_14 ||
      VAR_24->mode == VAR_15)
   VAR_26 = FUNC_7(VAR_24);

  if (VAR_26 < 0)
   FUNC_12(VAR_24, -VAR_26);
  else
   FUNC_5(VAR_24);

  goto unlock;
 }

 if (!FUNC_16(VAR_6, &VAR_24->conf_state)) {
  u8 VAR_27[64];
  FUNC_11(VAR_16, FUNC_9(VAR_16), VAR_11,
          FUNC_3(VAR_24, VAR_27, sizeof(VAR_27)), VAR_27);
  VAR_24->num_conf_req++;
 }



 if (FUNC_17(VAR_5, &VAR_24->conf_state) &&
     FUNC_17(VAR_3, &VAR_24->conf_state)) {




  if (!VAR_24->hs_hcon)
   FUNC_13(VAR_24, VAR_23, VAR_17->ident, VAR_22);
  else
   VAR_24->ident = VAR_17->ident;
 }

unlock:
 FUNC_6(VAR_24);
 return VAR_26;
}

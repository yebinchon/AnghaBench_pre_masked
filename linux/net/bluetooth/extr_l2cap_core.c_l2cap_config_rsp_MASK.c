
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_conf_rsp {int data; int result; int flags; int scid; } ;
struct l2cap_conf_req {int dummy; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {scalar_t__ mode; int conf_state; int num_conf_req; int num_conf_rsp; int ident; int hs_hcon; } ;
typedef int req ;
typedef int buf ;


 int FUNC_0 (char*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;


 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*,int) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (struct l2cap_chan*,int ,int) ;
 int FUNC_10 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_11 (struct l2cap_conn*,int) ;
 int FUNC_12 (struct l2cap_conn*) ;
 int FUNC_13 (struct l2cap_chan*,int ,int,char*,int,int*) ;
 int FUNC_14 (struct l2cap_conn*,int ,int ,int,char*) ;
 int FUNC_15 (struct l2cap_chan*,int) ;
 int FUNC_16 (struct l2cap_chan*,char*,int ,int ) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (struct l2cap_chan*) ;
 scalar_t__ FUNC_19 (int ,int *) ;

__attribute__((used)) static inline int FUNC_20(struct l2cap_conn *VAR_12,
       struct l2cap_cmd_hdr *VAR_13, u16 VAR_14,
       u8 *VAR_15)
{
 struct l2cap_conf_rsp *VAR_16 = (struct l2cap_conf_rsp *)VAR_15;
 u16 VAR_17, VAR_18, VAR_19;
 struct l2cap_chan *VAR_20;
 int VAR_21 = VAR_14 - sizeof(*VAR_16);
 int VAR_22 = 0;

 if (VAR_14 < sizeof(*VAR_16))
  return -VAR_5;

 VAR_17 = FUNC_1(VAR_16->scid);
 VAR_18 = FUNC_1(VAR_16->flags);
 VAR_19 = FUNC_1(VAR_16->result);

 FUNC_0("scid 0x%4.4x flags 0x%2.2x result 0x%2.2x len %d", VAR_17, VAR_18,
        VAR_19, VAR_21);

 VAR_20 = FUNC_11(VAR_12, VAR_17);
 if (!VAR_20)
  return 0;

 switch (VAR_19) {
 case 129:
  FUNC_9(VAR_20, VAR_16->data, VAR_21);
  FUNC_4(VAR_3, &VAR_20->conf_state);
  break;

 case 130:
  FUNC_17(VAR_3, &VAR_20->conf_state);

  if (FUNC_19(VAR_1, &VAR_20->conf_state)) {
   char VAR_23[64];

   VAR_21 = FUNC_13(VAR_20, VAR_16->data, VAR_21,
         VAR_23, sizeof(VAR_23), &VAR_19);
   if (VAR_21 < 0) {
    FUNC_15(VAR_20, VAR_4);
    goto done;
   }

   if (!VAR_20->hs_hcon) {
    FUNC_16(VAR_20, VAR_23, VAR_13->ident,
       0);
   } else {
    if (FUNC_8(VAR_20)) {
     FUNC_3(VAR_20);
     VAR_20->ident = VAR_13->ident;
    }
   }
  }
  goto done;

 case 128:
  if (VAR_20->num_conf_rsp <= VAR_7) {
   char VAR_24[64];

   if (VAR_21 > sizeof(VAR_24) - sizeof(struct l2cap_conf_req)) {
    FUNC_15(VAR_20, VAR_4);
    goto done;
   }


   VAR_19 = 129;
   VAR_21 = FUNC_13(VAR_20, VAR_16->data, VAR_21,
         VAR_24, sizeof(VAR_24), &VAR_19);
   if (VAR_21 < 0) {
    FUNC_15(VAR_20, VAR_4);
    goto done;
   }

   FUNC_14(VAR_12, FUNC_12(VAR_12),
           VAR_8, VAR_21, VAR_24);
   VAR_20->num_conf_req++;
   if (VAR_19 != 129)
    goto done;
   break;
  }


 default:
  FUNC_6(VAR_20, VAR_4);

  FUNC_2(VAR_20, VAR_9);
  FUNC_15(VAR_20, VAR_4);
  goto done;
 }

 if (VAR_18 & VAR_6)
  goto done;

 FUNC_17(VAR_0, &VAR_20->conf_state);

 if (FUNC_19(VAR_2, &VAR_20->conf_state)) {
  FUNC_18(VAR_20);

  if (VAR_20->mode == VAR_10 ||
      VAR_20->mode == VAR_11)
   VAR_22 = FUNC_10(VAR_20);

  if (VAR_22 < 0)
   FUNC_15(VAR_20, -VAR_22);
  else
   FUNC_5(VAR_20);
 }

done:
 FUNC_7(VAR_20);
 return VAR_22;
}

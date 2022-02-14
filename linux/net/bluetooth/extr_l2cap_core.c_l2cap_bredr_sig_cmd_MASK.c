
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int code; int ident; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_2 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_3 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_5 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_6 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_7 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_8 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_9 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_10 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_11 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_12 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_13 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_14 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_15 (struct l2cap_conn*,int ,int,int ,int *) ;

__attribute__((used)) static inline int FUNC_16(struct l2cap_conn *VAR_1,
          struct l2cap_cmd_hdr *VAR_2, u16 VAR_3,
          u8 *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_2->code) {
 case 144:
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 141:
  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 140:
 case 138:
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 143:
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 142:
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 137:
  VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 136:
  FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 135:
  FUNC_15(VAR_1, VAR_2->ident, 134, VAR_3, VAR_4);
  break;

 case 134:
  break;

 case 133:
  VAR_5 = FUNC_9(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 132:
  FUNC_10(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 139:
  VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 129:
  VAR_5 = FUNC_13(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 128:
  FUNC_14(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 131:
  VAR_5 = FUNC_11(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 130:
  FUNC_12(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 default:
  FUNC_0("Unknown BR/EDR signaling command 0x%2.2x", VAR_2->code);
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}

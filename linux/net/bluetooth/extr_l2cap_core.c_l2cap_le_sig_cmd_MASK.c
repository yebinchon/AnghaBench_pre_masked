
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int code; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_2 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_3 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_4 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_5 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_6 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;
 int FUNC_7 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int ,int *) ;

__attribute__((used)) static inline int FUNC_8(struct l2cap_conn *VAR_1,
       struct l2cap_cmd_hdr *VAR_2, u16 VAR_3,
       u8 *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_2->code) {
 case 135:
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 134:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 133:
  break;

 case 129:
  FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 130:
  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 128:
  VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 132:
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 131:
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 default:
  FUNC_0("Unknown LE signaling command 0x%2.2x", VAR_2->code);
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}

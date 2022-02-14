
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_chan {struct amp_mgr* data; } ;
struct amp_mgr {int ident; } ;
struct a2mp_cmd_rej {int reason; } ;
struct a2mp_cmd {int code; int ident; int len; } ;
typedef int rej ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_3 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_4 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_5 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_6 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_7 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_8 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_9 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_10 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_11 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_12 (struct amp_mgr*,struct sk_buff*,struct a2mp_cmd*) ;
 int FUNC_13 (struct amp_mgr*,int const,int ,int,struct a2mp_cmd_rej*) ;
 int FUNC_14 (struct amp_mgr*) ;
 int FUNC_15 (struct amp_mgr*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_20(struct l2cap_chan *VAR_1, struct sk_buff *VAR_2)
{
 struct a2mp_cmd *VAR_3;
 struct amp_mgr *VAR_4 = VAR_1->data;
 int VAR_5 = 0;

 FUNC_14(VAR_4);

 while (VAR_2->len >= sizeof(*VAR_3)) {
  u16 VAR_6;

  VAR_3 = (void *) VAR_2->data;
  VAR_6 = FUNC_18(VAR_3->len);

  FUNC_0("code 0x%2.2x id %d len %u", VAR_3->code, VAR_3->ident, VAR_6);

  FUNC_19(VAR_2, sizeof(*VAR_3));

  if (VAR_6 > VAR_2->len || !VAR_3->ident) {
   VAR_5 = -VAR_0;
   break;
  }

  VAR_4->ident = VAR_3->ident;

  switch (VAR_3->code) {
  case 138:
   FUNC_4(VAR_4, VAR_2, VAR_3);
   break;

  case 133:
   VAR_5 = FUNC_6(VAR_4, VAR_2, VAR_3);
   break;

  case 140:
   VAR_5 = FUNC_2(VAR_4, VAR_2, VAR_3);
   break;

  case 129:
   VAR_5 = FUNC_11(VAR_4, VAR_2, VAR_3);
   break;

  case 131:
   VAR_5 = FUNC_9(VAR_4, VAR_2, VAR_3);
   break;

  case 137:
   VAR_5 = FUNC_5(VAR_4, VAR_2, VAR_3);
   break;

  case 135:
   VAR_5 = FUNC_8(VAR_4, VAR_2, VAR_3);
   break;

  case 132:
   VAR_5 = FUNC_7(VAR_4, VAR_2, VAR_3);
   break;

  case 128:
   VAR_5 = FUNC_12(VAR_4, VAR_2, VAR_3);
   break;

  case 130:
   VAR_5 = FUNC_10(VAR_4, VAR_2, VAR_3);
   break;

  case 139:
  case 136:
  case 134:
   VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3);
   break;

  default:
   FUNC_1("Unknown A2MP sig cmd 0x%2.2x", VAR_3->code);
   VAR_5 = -VAR_0;
   break;
  }
 }

 if (VAR_5) {
  struct a2mp_cmd_rej VAR_7;

  VAR_7.reason = FUNC_16(0);
  VAR_3 = (void *) VAR_2->data;

  FUNC_0("Send A2MP Rej: cmd 0x%2.2x err %d", VAR_3->code, VAR_5);

  FUNC_13(VAR_4, 138, VAR_3->ident, sizeof(VAR_7),
     &VAR_7);
 }



 FUNC_17(VAR_2);

 FUNC_15(VAR_4);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lapb_frame {int dummy; } ;
struct lapb_cb {int state; } ;







 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct lapb_cb*,struct sk_buff*,struct lapb_frame*) ;
 int FUNC_2 (struct lapb_cb*) ;
 int FUNC_3 (struct lapb_cb*,struct sk_buff*,struct lapb_frame*) ;
 int FUNC_4 (struct lapb_cb*,struct sk_buff*,struct lapb_frame*) ;
 int FUNC_5 (struct lapb_cb*,struct sk_buff*,struct lapb_frame*) ;
 int FUNC_6 (struct lapb_cb*,struct sk_buff*,struct lapb_frame*) ;
 int FUNC_7 (struct lapb_cb*,struct sk_buff*,struct lapb_frame*) ;

void FUNC_8(struct lapb_cb *VAR_0, struct sk_buff *VAR_1)
{
 struct lapb_frame VAR_2;

 if (FUNC_1(VAR_0, VAR_1, &VAR_2) < 0) {
  FUNC_0(VAR_1);
  return;
 }

 switch (VAR_0->state) {
 case 132:
  FUNC_3(VAR_0, VAR_1, &VAR_2); break;
 case 131:
  FUNC_4(VAR_0, VAR_1, &VAR_2); break;
 case 130:
  FUNC_5(VAR_0, VAR_1, &VAR_2); break;
 case 129:
  FUNC_6(VAR_0, VAR_1, &VAR_2); break;
 case 128:
  FUNC_7(VAR_0, VAR_1, &VAR_2); break;
 }

 FUNC_2(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct neighbour_cb {int dummy; } ;
struct TYPE_3__ {int icmp6_code; int icmp6_type; } ;
struct nd_msg {TYPE_1__ icmph; } ;
struct TYPE_4__ {int hop_limit; } ;







 int FUNC_0 (int,int ,char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int VAR_0 ;

int FUNC_13(struct sk_buff *VAR_1)
{
 struct nd_msg *VAR_2;

 if (FUNC_10(VAR_1))
  return 0;

 if (FUNC_11(VAR_1))
  return 0;

 VAR_2 = (struct nd_msg *)FUNC_12(VAR_1);

 FUNC_2(VAR_1, VAR_1->data - FUNC_12(VAR_1));

 if (FUNC_3(VAR_1)->hop_limit != 255) {
  FUNC_0(2, VAR_0, "NDISC: invalid hop-limit: %d\n",
     FUNC_3(VAR_1)->hop_limit);
  return 0;
 }

 if (VAR_2->icmph.icmp6_code != 0) {
  FUNC_0(2, VAR_0, "NDISC: invalid ICMPv6 code: %d\n",
     VAR_2->icmph.icmp6_code);
  return 0;
 }

 switch (VAR_2->icmph.icmp6_type) {
 case 131:
  FUNC_4(FUNC_1(VAR_1), 0, sizeof(struct neighbour_cb));
  FUNC_6(VAR_1);
  break;

 case 132:
  FUNC_5(VAR_1);
  break;

 case 128:
  FUNC_7(VAR_1);
  break;

 case 129:
  FUNC_9(VAR_1);
  break;

 case 130:
  FUNC_8(VAR_1);
  break;
 }

 return 0;
}

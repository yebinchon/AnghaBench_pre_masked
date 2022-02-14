
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct llc_pdu_sn {int dummy; } ;
struct TYPE_2__ {int X; int vS; } ;


 int FUNC_0 (struct llc_pdu_sn*) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 struct llc_pdu_sn* FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;

int FUNC_5(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_pdu_sn *VAR_2 = FUNC_3(VAR_1);
 u8 VAR_3 = FUNC_0(VAR_2);

 if (FUNC_1(FUNC_4(VAR_0)->vS, VAR_3, FUNC_4(VAR_0)->X))
  FUNC_2(VAR_0, VAR_1);
 return 0;
}

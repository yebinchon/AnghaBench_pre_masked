
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int truesize; } ;
struct net_device {int name; } ;
struct lec_priv {int * lecd; } ;
struct atm_vcc {scalar_t__ proto_data; } ;
struct TYPE_2__ {int sk_receive_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct atm_vcc*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct lec_priv*) ;
 int FUNC_3 (int ) ;
 struct lec_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int ) ;
 TYPE_1__* FUNC_7 (struct atm_vcc*) ;
 struct sk_buff* FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct atm_vcc *VAR_1)
{
 struct sk_buff *VAR_2;
 struct net_device *VAR_3 = (struct net_device *)VAR_1->proto_data;
 struct lec_priv *VAR_4 = FUNC_4(VAR_3);

 VAR_4->lecd = ((void*)0);


 FUNC_5(VAR_3);
 FUNC_2(VAR_4);

 if (FUNC_9(&FUNC_7(VAR_1)->sk_receive_queue))
  FUNC_6("%s closing with messages pending\n", VAR_3->name);
 while ((VAR_2 = FUNC_8(&FUNC_7(VAR_1)->sk_receive_queue))) {
  FUNC_0(VAR_1, VAR_2->truesize);
  FUNC_1(VAR_2);
 }

 FUNC_6("%s: Shut down!\n", VAR_3->name);
 FUNC_3(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int tc_index; int mark; int dev; int protocol; int priority; int pkt_type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_0, struct sk_buff *VAR_1)
{
 VAR_0->pkt_type = VAR_1->pkt_type;
 VAR_0->priority = VAR_1->priority;
 VAR_0->protocol = VAR_1->protocol;
 FUNC_5(VAR_0);
 FUNC_6(VAR_0, FUNC_0(FUNC_4(VAR_1)));
 VAR_0->dev = VAR_1->dev;
 VAR_0->mark = VAR_1->mark;

 FUNC_2(VAR_0, VAR_1);




 FUNC_1(VAR_0, VAR_1);
 FUNC_7(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);
}

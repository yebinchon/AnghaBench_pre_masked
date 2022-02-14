
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_shdlc {int dnr; int ns; int send_q; int ack_pending_q; } ;


 int FUNC_0 (char*,int ) ;
 struct sk_buff* FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct llc_shdlc *VAR_0)
{
 struct sk_buff *VAR_1;

 FUNC_0("ns reset to %d\n", VAR_0->dnr);

 while ((VAR_1 = FUNC_1(&VAR_0->ack_pending_q))) {
  FUNC_2(VAR_1, 1);
  FUNC_3(&VAR_0->send_q, VAR_1);
 }
 VAR_0->ns = VAR_0->dnr;
}

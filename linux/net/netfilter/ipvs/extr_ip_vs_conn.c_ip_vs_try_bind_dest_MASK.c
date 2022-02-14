
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_proto_data {int pp; int appcnt; } ;
struct ip_vs_dest {int dummy; } ;
struct ip_vs_conn {scalar_t__ af; int protocol; int ipvs; int * packet_xmit; int lock; scalar_t__ app; scalar_t__ dest; int flags; int fwmark; int vport; int vaddr; int dport; int daddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ip_vs_conn*,int ) ;
 int FUNC_2 (struct ip_vs_conn*,struct ip_vs_dest*) ;
 int FUNC_3 (struct ip_vs_conn*) ;
 int FUNC_4 (struct ip_vs_conn*) ;
 struct ip_vs_dest* FUNC_5 (int ,scalar_t__,scalar_t__,int *,int ,int *,int ,int ,int ,int ) ;
 struct ip_vs_proto_data* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ip_vs_conn*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct ip_vs_conn *VAR_1)
{
 struct ip_vs_dest *VAR_2;

 FUNC_8();






 VAR_2 = FUNC_5(VAR_1->ipvs, VAR_1->af, VAR_1->af, &VAR_1->daddr,
          VAR_1->dport, &VAR_1->vaddr, VAR_1->vport,
          VAR_1->protocol, VAR_1->fwmark, VAR_1->flags);
 if (VAR_2) {
  struct ip_vs_proto_data *VAR_3;

  FUNC_10(&VAR_1->lock);
  if (VAR_1->dest) {
   FUNC_11(&VAR_1->lock);
   FUNC_9();
   return;
  }



  if (VAR_1->app)
   FUNC_7(VAR_1);

  FUNC_2(VAR_1, VAR_2);
  FUNC_11(&VAR_1->lock);


  VAR_1->packet_xmit = ((void*)0);





   FUNC_3(VAR_1);

  VAR_3 = FUNC_6(VAR_1->ipvs, VAR_1->protocol);
  if (VAR_3 && FUNC_0(&VAR_3->appcnt))
   FUNC_1(VAR_1, VAR_3->pp);
 }
 FUNC_9();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest {scalar_t__ l_threshold; int flags; int u_threshold; int persistconns; int activeconns; int inactconns; int refcnt; } ;
struct ip_vs_conn {int flags; int refcnt; int state; int dport; int daddr; int daf; int vport; int vaddr; int af; int cport; int caddr; int protocol; struct ip_vs_dest* dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ip_vs_dest*) ;
 int FUNC_4 (struct ip_vs_dest*) ;
 int FUNC_5 (struct ip_vs_conn*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static inline void FUNC_9(struct ip_vs_conn *VAR_3)
{
 struct ip_vs_dest *VAR_4 = VAR_3->dest;

 if (!VAR_4)
  return;

 FUNC_1(7, "Unbind-dest %s c:%s:%d v:%s:%d "
        "d:%s:%d fwd:%c s:%u conn->flags:%X conn->refcnt:%d "
        "dest->refcnt:%d\n",
        FUNC_6(VAR_3->protocol),
        FUNC_0(VAR_3->af, &VAR_3->caddr), FUNC_7(VAR_3->cport),
        FUNC_0(VAR_3->af, &VAR_3->vaddr), FUNC_7(VAR_3->vport),
        FUNC_0(VAR_3->daf, &VAR_3->daddr), FUNC_7(VAR_3->dport),
        FUNC_5(VAR_3), VAR_3->state,
        VAR_3->flags, FUNC_8(&VAR_3->refcnt),
        FUNC_8(&VAR_4->refcnt));


 if (!(VAR_3->flags & VAR_1)) {


  if (VAR_3->flags & VAR_0) {
   FUNC_2(&VAR_4->inactconns);
  } else {
   FUNC_2(&VAR_4->activeconns);
  }
 } else {


  FUNC_2(&VAR_4->persistconns);
 }

 if (VAR_4->l_threshold != 0) {
  if (FUNC_4(VAR_4) < VAR_4->l_threshold)
   VAR_4->flags &= ~VAR_2;
 } else if (VAR_4->u_threshold != 0) {
  if (FUNC_4(VAR_4) * 4 < VAR_4->u_threshold * 3)
   VAR_4->flags &= ~VAR_2;
 } else {
  if (VAR_4->flags & VAR_2)
   VAR_4->flags &= ~VAR_2;
 }

 FUNC_3(VAR_4);
}

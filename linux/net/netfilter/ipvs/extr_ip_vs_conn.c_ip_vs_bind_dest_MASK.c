
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest {scalar_t__ u_threshold; int flags; int persistconns; int inactconns; int activeconns; int refcnt; int conn_flags; } ;
struct ip_vs_conn {scalar_t__ protocol; int flags; int refcnt; int state; int dport; int daddr; int daf; int vport; int vaddr; int af; int cport; int caddr; struct ip_vs_dest* dest; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (struct ip_vs_dest*) ;
 scalar_t__ FUNC_5 (struct ip_vs_dest*) ;
 int FUNC_6 (struct ip_vs_conn*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static inline void
FUNC_10(struct ip_vs_conn *VAR_8, struct ip_vs_dest *VAR_9)
{
 unsigned int VAR_10;
 __u32 VAR_11;


 if (!VAR_9)
  return;


 FUNC_4(VAR_9);

 VAR_10 = FUNC_3(&VAR_9->conn_flags);
 if (VAR_8->protocol != VAR_0)
  VAR_10 &= ~VAR_4;
 VAR_11 = VAR_8->flags;

 if (VAR_11 & VAR_5) {



  if (!(VAR_11 & VAR_6))
   VAR_10 &= ~VAR_2;

  VAR_11 &= ~(VAR_1 | VAR_3);
 }
 VAR_11 |= VAR_10;
 VAR_8->flags = VAR_11;
 VAR_8->dest = VAR_9;

 FUNC_1(7, "Bind-dest %s c:%s:%d v:%s:%d "
        "d:%s:%d fwd:%c s:%u conn->flags:%X conn->refcnt:%d "
        "dest->refcnt:%d\n",
        FUNC_7(VAR_8->protocol),
        FUNC_0(VAR_8->af, &VAR_8->caddr), FUNC_8(VAR_8->cport),
        FUNC_0(VAR_8->af, &VAR_8->vaddr), FUNC_8(VAR_8->vport),
        FUNC_0(VAR_8->daf, &VAR_8->daddr), FUNC_8(VAR_8->dport),
        FUNC_6(VAR_8), VAR_8->state,
        VAR_8->flags, FUNC_9(&VAR_8->refcnt),
        FUNC_9(&VAR_9->refcnt));


 if (!(VAR_11 & VAR_6)) {




  if (!(VAR_11 & VAR_2))
   FUNC_2(&VAR_9->activeconns);
  else
   FUNC_2(&VAR_9->inactconns);
 } else {


  FUNC_2(&VAR_9->persistconns);
 }

 if (VAR_9->u_threshold != 0 &&
     FUNC_5(VAR_9) >= VAR_9->u_threshold)
  VAR_9->flags |= VAR_7;
}

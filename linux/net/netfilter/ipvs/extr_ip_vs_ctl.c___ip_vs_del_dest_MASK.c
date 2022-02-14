
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dest_trash_lock; int dest_trash; int dest_trash_timer; } ;
struct ip_vs_dest {scalar_t__ idle_start; int t_list; int refcnt; int port; int addr; int af; int stats; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ip_vs_dest*) ;
 int FUNC_3 (struct netns_ipvs*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct netns_ipvs *VAR_2, struct ip_vs_dest *VAR_3,
        bool VAR_4)
{
 FUNC_3(VAR_2, &VAR_3->stats);




 FUNC_2(VAR_3);

 FUNC_9(&VAR_2->dest_trash_lock);
 FUNC_1(3, "Moving dest %s:%u into trash, dest->refcnt=%d\n",
        FUNC_0(VAR_3->af, &VAR_3->addr), FUNC_7(VAR_3->port),
        FUNC_8(&VAR_3->refcnt));
 if (FUNC_5(&VAR_2->dest_trash) && !VAR_4)
  FUNC_6(&VAR_2->dest_trash_timer,
     VAR_1 + (VAR_0 >> 1));

 FUNC_4(&VAR_3->t_list, &VAR_2->dest_trash);
 VAR_3->idle_start = 0;
 FUNC_10(&VAR_2->dest_trash_lock);
}

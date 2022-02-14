
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int mixed_address_family_dests; } ;
struct ip_vs_service {scalar_t__ af; scalar_t__ port; int scheduler; int num_dests; int destinations; struct netns_ipvs* ipvs; } ;
struct ip_vs_scheduler {int (* upd_dest ) (struct ip_vs_service*,struct ip_vs_dest*) ;int (* add_dest ) (struct ip_vs_service*,struct ip_vs_dest*) ;} ;
struct ip_vs_dest_user_kern {scalar_t__ af; int weight; int conn_flags; scalar_t__ tun_type; scalar_t__ tun_port; scalar_t__ u_threshold; int l_threshold; int tun_flags; } ;
struct ip_vs_dest {scalar_t__ af; scalar_t__ tun_type; scalar_t__ tun_port; scalar_t__ u_threshold; int n_list; int stats; int dst_lock; int l_threshold; int flags; int svc; int conn_flags; int tun_flags; int weight; int last_weight; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ip_vs_dest*) ;
 int FUNC_2 (struct ip_vs_dest*,struct ip_vs_service*) ;
 int FUNC_3 (struct ip_vs_dest*) ;
 int FUNC_4 (struct ip_vs_service*,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct ip_vs_service*) ;
 int FUNC_7 (struct netns_ipvs*,struct ip_vs_dest*) ;
 int FUNC_8 (struct ip_vs_dest*) ;
 int FUNC_9 (struct netns_ipvs*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 void* FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ip_vs_service*,struct ip_vs_dest*) ;
 int FUNC_16 (struct ip_vs_service*,struct ip_vs_dest*) ;

__attribute__((used)) static void
FUNC_17(struct ip_vs_service *VAR_8, struct ip_vs_dest *VAR_9,
      struct ip_vs_dest_user_kern *VAR_10, int VAR_11)
{
 struct netns_ipvs *VAR_12 = VAR_8->ipvs;
 struct ip_vs_service *VAR_13;
 struct ip_vs_scheduler *VAR_14;
 int VAR_15;


 FUNC_0(!VAR_11 && VAR_10->af != VAR_9->af);

 if (VAR_11 && VAR_10->af != VAR_8->af)
  VAR_12->mixed_address_family_dests++;


 if (VAR_11 || VAR_10->weight != 0)
  FUNC_5(&VAR_9->last_weight, VAR_10->weight);


 FUNC_5(&VAR_9->weight, VAR_10->weight);
 VAR_15 = VAR_10->conn_flags & VAR_1;
 VAR_15 |= VAR_3;


 if ((VAR_10->conn_flags & VAR_2) !=
     FUNC_1(VAR_9) ||
     VAR_10->tun_type != VAR_9->tun_type ||
     VAR_10->tun_port != VAR_9->tun_port)
  FUNC_8(VAR_9);


 VAR_9->tun_type = VAR_10->tun_type;
 VAR_9->tun_port = VAR_10->tun_port;
 VAR_9->tun_flags = VAR_10->tun_flags;


 if ((VAR_15 & VAR_2) != VAR_4) {
  VAR_15 |= VAR_5;
 } else {

  if (VAR_8->port == VAR_0)
   FUNC_6(VAR_8);
 }
 FUNC_5(&VAR_9->conn_flags, VAR_15);

 FUNC_7(VAR_12, VAR_9);


 VAR_13 = FUNC_12(VAR_9->svc, 1);
 if (!VAR_13) {
  FUNC_2(VAR_9, VAR_8);
 } else {
  if (VAR_13 != VAR_8) {
   FUNC_10(&VAR_9->stats);
   FUNC_2(VAR_9, VAR_8);
   FUNC_4(VAR_13, 1);
  }
 }


 VAR_9->flags |= VAR_6;

 if (VAR_10->u_threshold == 0 || VAR_10->u_threshold > VAR_9->u_threshold)
  VAR_9->flags &= ~VAR_7;
 VAR_9->u_threshold = VAR_10->u_threshold;
 VAR_9->l_threshold = VAR_10->l_threshold;

 VAR_9->af = VAR_10->af;

 FUNC_13(&VAR_9->dst_lock);
 FUNC_3(VAR_9);
 FUNC_14(&VAR_9->dst_lock);

 if (VAR_11) {
  FUNC_9(VAR_8->ipvs, &VAR_9->stats);
  FUNC_11(&VAR_9->n_list, &VAR_8->destinations);
  VAR_8->num_dests++;
  VAR_14 = FUNC_12(VAR_8->scheduler, 1);
  if (VAR_14 && VAR_14->add_dest)
   VAR_14->add_dest(VAR_8, VAR_9);
 } else {
  VAR_14 = FUNC_12(VAR_8->scheduler, 1);
  if (VAR_14 && VAR_14->upd_dest)
   VAR_14->upd_dest(VAR_8, VAR_9);
 }
}

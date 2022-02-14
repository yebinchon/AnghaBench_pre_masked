
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ip_vs_dest_dst {int rcu_head; int dst_cookie; struct dst_entry* dst_cache; } ;
struct ip_vs_dest {int dest_dst; int dst_lock; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ip_vs_dest_dst*) ;
 struct ip_vs_dest_dst* FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct ip_vs_dest *VAR_1, struct ip_vs_dest_dst *VAR_2,
  struct dst_entry *VAR_3, u32 VAR_4)
{
 struct ip_vs_dest_dst *VAR_5;

 VAR_5 = FUNC_3(VAR_1->dest_dst,
     FUNC_1(&VAR_1->dst_lock));

 if (VAR_2) {
  VAR_2->dst_cache = VAR_3;
  VAR_2->dst_cookie = VAR_4;
 }
 FUNC_2(VAR_1->dest_dst, VAR_2);

 if (VAR_5)
  FUNC_0(&VAR_5->rcu_head, VAR_0);
}

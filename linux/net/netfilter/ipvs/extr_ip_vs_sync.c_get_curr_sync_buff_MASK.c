
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int sync_buff_lock; } ;
struct ipvs_master_sync_state {struct ip_vs_sync_buff* sync_buff; } ;
struct ip_vs_sync_buff {scalar_t__ firstuse; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,unsigned long) ;

__attribute__((used)) static inline struct ip_vs_sync_buff *
FUNC_4(struct netns_ipvs *VAR_2, struct ipvs_master_sync_state *VAR_3,
     unsigned long VAR_4)
{
 struct ip_vs_sync_buff *VAR_5;

 FUNC_1(&VAR_2->sync_buff_lock);
 VAR_5 = VAR_3->sync_buff;
 if (VAR_5 && FUNC_3(VAR_1 - VAR_5->firstuse, VAR_4)) {
  VAR_3->sync_buff = ((void*)0);
  FUNC_0(VAR_0);
 } else
  VAR_5 = ((void*)0);
 FUNC_2(&VAR_2->sync_buff_lock);
 return VAR_5;
}

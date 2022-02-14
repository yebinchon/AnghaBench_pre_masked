
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_cpu_dm_data {int lock; int hw_entries; int send_timer; } ;
struct net_dm_hw_entries {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct net_dm_hw_entries* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct net_dm_hw_entries*,int ,int ) ;
 int FUNC_5 (int ,struct net_dm_hw_entries*) ;

__attribute__((used)) static struct net_dm_hw_entries *
FUNC_6(struct per_cpu_dm_data *VAR_5)
{
 struct net_dm_hw_entries *VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_0(FUNC_4(VAR_6, VAR_3, VAR_2),
        VAR_0);
 if (!VAR_6) {




  FUNC_1(&VAR_5->send_timer, VAR_4 + VAR_1 / 10);
 }

 FUNC_2(&VAR_5->lock, VAR_7);
 FUNC_5(VAR_5->hw_entries, VAR_6);
 FUNC_3(&VAR_5->lock, VAR_7);

 return VAR_6;
}

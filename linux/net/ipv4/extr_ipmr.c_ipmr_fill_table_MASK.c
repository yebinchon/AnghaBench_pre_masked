
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mr_table {int mroute_do_wrvifwhole; int mroute_do_pim; int mroute_do_assert; int mroute_reg_vif_num; int id; int cache_resolve_queue_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct mr_table *VAR_6, struct sk_buff *VAR_7)
{
 u32 VAR_8 = FUNC_0(&VAR_6->cache_resolve_queue_len);

 if (FUNC_2(VAR_7, VAR_1, VAR_6->id) ||
     FUNC_2(VAR_7, VAR_0, VAR_8) ||
     FUNC_1(VAR_7, VAR_5,
   VAR_6->mroute_reg_vif_num) ||
     FUNC_3(VAR_7, VAR_2,
         VAR_6->mroute_do_assert) ||
     FUNC_3(VAR_7, VAR_3, VAR_6->mroute_do_pim) ||
     FUNC_3(VAR_7, VAR_4,
         VAR_6->mroute_do_wrvifwhole))
  return 0;

 return 1;
}

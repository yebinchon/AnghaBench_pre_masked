
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smc_link_group {scalar_t__ id; } ;
struct smc_link {int llc_testlink_wrk; int llc_testlink_resp; int llc_delete_rkey_mutex; int llc_delete_rkey; int llc_confirm_rkey; int llc_add_resp; int llc_add; int llc_confirm_resp; int llc_confirm; int llc_wq; int link_id; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct smc_link_group* FUNC_4 (struct smc_link*) ;
 int VAR_2 ;

int FUNC_5(struct smc_link *VAR_3)
{
 struct smc_link_group *VAR_4 = FUNC_4(VAR_3);
 VAR_3->llc_wq = FUNC_1("llc_wq-%x:%x)", VAR_1,
            *((u32 *)VAR_4->id),
            VAR_3->link_id);
 if (!VAR_3->llc_wq)
  return -VAR_0;
 FUNC_2(&VAR_3->llc_confirm);
 FUNC_2(&VAR_3->llc_confirm_resp);
 FUNC_2(&VAR_3->llc_add);
 FUNC_2(&VAR_3->llc_add_resp);
 FUNC_2(&VAR_3->llc_confirm_rkey);
 FUNC_2(&VAR_3->llc_delete_rkey);
 FUNC_3(&VAR_3->llc_delete_rkey_mutex);
 FUNC_2(&VAR_3->llc_testlink_resp);
 FUNC_0(&VAR_3->llc_testlink_wrk, VAR_2);
 return 0;
}

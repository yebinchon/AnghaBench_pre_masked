
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct net_device {int dummy; } ;
typedef int flow_indr_block_bind_cb_t ;
typedef enum flow_block_command { ____Placeholder_flow_block_command } flow_block_command ;


 struct tcf_block* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,struct tcf_block*,int *,void*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
       flow_indr_block_bind_cb_t *VAR_1,
       void *VAR_2,
       enum flow_block_command VAR_3)
{
 struct tcf_block *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
}

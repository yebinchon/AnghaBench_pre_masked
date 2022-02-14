
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct flow_indr_block_dev {int dummy; } ;
struct flow_indr_block_cb {int cb_priv; int cb; } ;
typedef int flow_indr_block_bind_cb_t ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ,int ,int ) ;
 int FUNC_1 (struct flow_indr_block_cb*) ;
 struct flow_indr_block_cb* FUNC_2 (struct flow_indr_block_dev*,int *,void*) ;
 struct flow_indr_block_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct flow_indr_block_dev*) ;

void FUNC_5(struct net_device *VAR_1,
         flow_indr_block_bind_cb_t *VAR_2,
         void *VAR_3)
{
 struct flow_indr_block_cb *VAR_4;
 struct flow_indr_block_dev *VAR_5;

 VAR_5 = FUNC_3(VAR_1);
 if (!VAR_5)
  return;

 VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3);
 if (!VAR_4)
  return;

 FUNC_0(VAR_1, VAR_4->cb, VAR_4->cb_priv,
      VAR_0);

 FUNC_1(VAR_4);
 FUNC_4(VAR_5);
}

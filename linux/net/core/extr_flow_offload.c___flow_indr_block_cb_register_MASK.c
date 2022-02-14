
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct flow_indr_block_dev {int dummy; } ;
struct flow_indr_block_cb {int cb_priv; int cb; } ;
typedef int flow_indr_block_bind_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct flow_indr_block_cb*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 struct flow_indr_block_cb* FUNC_2 (struct flow_indr_block_dev*,void*,int *,void*) ;
 struct flow_indr_block_dev* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct flow_indr_block_dev*) ;

int FUNC_5(struct net_device *VAR_2, void *VAR_3,
      flow_indr_block_bind_cb_t *VAR_4,
      void *VAR_5)
{
 struct flow_indr_block_cb *VAR_6;
 struct flow_indr_block_dev *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5);
 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8)
  goto err_dev_put;

 FUNC_1(VAR_2, VAR_6->cb, VAR_6->cb_priv,
      VAR_1);

 return 0;

err_dev_put:
 FUNC_4(VAR_7);
 return VAR_8;
}

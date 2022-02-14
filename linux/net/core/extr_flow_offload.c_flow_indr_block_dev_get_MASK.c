
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct flow_indr_block_dev {int refcnt; int ht_node; struct net_device* dev; int cb_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct flow_indr_block_dev* FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct flow_indr_block_dev*) ;
 struct flow_indr_block_dev* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static struct flow_indr_block_dev *
FUNC_5(struct net_device *VAR_3)
{
 struct flow_indr_block_dev *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto inc_ref;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(&VAR_4->cb_list);
 VAR_4->dev = VAR_3;
 if (FUNC_4(&VAR_2, &VAR_4->ht_node,
       VAR_1)) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

inc_ref:
 VAR_4->refcnt++;
 return VAR_4;
}

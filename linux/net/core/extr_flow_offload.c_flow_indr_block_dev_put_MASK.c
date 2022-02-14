
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_indr_block_dev {int ht_node; scalar_t__ refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct flow_indr_block_dev*) ;
 int FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct flow_indr_block_dev *VAR_2)
{
 if (--VAR_2->refcnt)
  return;

 FUNC_1(&VAR_1, &VAR_2->ht_node,
          VAR_0);
 FUNC_0(VAR_2);
}

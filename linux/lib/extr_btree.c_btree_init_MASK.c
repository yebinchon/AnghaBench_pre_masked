
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int mempool; } ;


 int VAR_0 ;
 int FUNC_0 (struct btree_head*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *) ;

int FUNC_2(struct btree_head *VAR_3)
{
 FUNC_0(VAR_3);
 VAR_3->mempool = FUNC_1(0, VAR_1, VAR_2, ((void*)0));
 if (!VAR_3->mempool)
  return -VAR_0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btree_head {int mempool; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long*) ;
 unsigned long* FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long*,int ,int ) ;

__attribute__((used)) static unsigned long *FUNC_3(struct btree_head *VAR_1, gfp_t VAR_2)
{
 unsigned long *VAR_3;

 VAR_3 = FUNC_1(VAR_1->mempool, VAR_2);
 if (FUNC_0(VAR_3))
  FUNC_2(VAR_3, 0, VAR_0);
 return VAR_3;
}

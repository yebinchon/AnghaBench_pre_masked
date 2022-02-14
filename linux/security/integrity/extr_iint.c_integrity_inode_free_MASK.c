
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct integrity_iint_cache {int rb_node; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 struct integrity_iint_cache* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct integrity_iint_cache*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct inode *VAR_2)
{
 struct integrity_iint_cache *VAR_3;

 if (!FUNC_0(VAR_2))
  return;

 FUNC_4(&VAR_0);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(&VAR_3->rb_node, &VAR_1);
 FUNC_5(&VAR_0);

 FUNC_2(VAR_3);
}

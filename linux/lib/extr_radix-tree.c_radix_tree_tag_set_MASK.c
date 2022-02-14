
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
typedef void radix_tree_node ;


 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 unsigned int FUNC_2 (void*,void**,unsigned long) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (struct radix_tree_root*,void**,unsigned long*) ;
 int FUNC_5 (struct radix_tree_root*,unsigned int) ;
 int FUNC_6 (struct radix_tree_root*,unsigned int) ;
 int FUNC_7 (void*,unsigned int,unsigned int) ;
 int FUNC_8 (void*,unsigned int,unsigned int) ;

void *FUNC_9(struct radix_tree_root *VAR_0,
   unsigned long VAR_1, unsigned int VAR_2)
{
 struct radix_tree_node *VAR_3, *VAR_4;
 unsigned long VAR_5;

 FUNC_4(VAR_0, &VAR_3, &VAR_5);
 FUNC_0(VAR_1 > VAR_5);

 while (FUNC_3(VAR_3)) {
  unsigned VAR_6;

  VAR_4 = FUNC_1(VAR_3);
  VAR_6 = FUNC_2(VAR_4, &VAR_3, VAR_1);
  FUNC_0(!VAR_3);

  if (!FUNC_7(VAR_4, VAR_2, VAR_6))
   FUNC_8(VAR_4, VAR_2, VAR_6);
 }


 if (!FUNC_5(VAR_0, VAR_2))
  FUNC_6(VAR_0, VAR_2);

 return VAR_3;
}

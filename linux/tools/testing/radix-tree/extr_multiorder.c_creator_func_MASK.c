
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct radix_tree_root*,int ) ;
 int FUNC_1 (struct radix_tree_root*,int ,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_2(void *VAR_2)
{

 unsigned int VAR_3 = VAR_0 - 1;
 struct radix_tree_root *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 10000; VAR_5++) {
  FUNC_1(VAR_4, 0, VAR_3);
  FUNC_0(VAR_4, 0);
 }

 VAR_1 = 1;
 return ((void*)0);
}

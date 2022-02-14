
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int lsm_db ;
typedef int TreeNode ;
typedef int TreeLeaf ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int *,int*) ;

__attribute__((used)) static TreeNode *FUNC_2(
  lsm_db *VAR_0,
  TreeLeaf *VAR_1,
  u32 *VAR_2,
  int *VAR_3
){
  TreeLeaf *VAR_4;
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
  if( VAR_4 ){
    FUNC_0(VAR_4, VAR_1, sizeof(TreeLeaf));
  }
  return (TreeNode *)VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int lsm_db ;
struct TYPE_5__ {size_t iV2Child; int iV2Ptr; int * aiChildPtr; scalar_t__ iV2; int * aiKeyPtr; } ;
typedef TYPE_1__ TreeNode ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (int *,int *,int*) ;

__attribute__((used)) static TreeNode *FUNC_2(
  lsm_db *VAR_0,
  TreeNode *VAR_1,
  u32 *VAR_2,
  int *VAR_3
){
  TreeNode *VAR_4;

  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
  if( VAR_4 ){
    FUNC_0(VAR_4->aiKeyPtr, VAR_1->aiKeyPtr, sizeof(VAR_4->aiKeyPtr));
    FUNC_0(VAR_4->aiChildPtr, VAR_1->aiChildPtr, sizeof(VAR_4->aiChildPtr));
    if( VAR_1->iV2 ) VAR_4->aiChildPtr[VAR_1->iV2Child] = VAR_1->iV2Ptr;
  }
  return VAR_4;
}

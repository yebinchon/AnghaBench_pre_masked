
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__* aiChildPtr; scalar_t__ iV2; int iV2Child; scalar_t__ iV2Ptr; } ;
typedef TYPE_1__ TreeNode ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(TreeNode *VAR_0, int VAR_1, int VAR_2){
  FUNC_1( VAR_1>=0 );
  FUNC_1( VAR_2>=0 && VAR_2<=FUNC_0(VAR_0->aiChildPtr) );
  if( VAR_0->iV2 && VAR_0->iV2<=(u32)VAR_1 && VAR_2==VAR_0->iV2Child ) return VAR_0->iV2Ptr;
  return VAR_0->aiChildPtr[VAR_2];
}

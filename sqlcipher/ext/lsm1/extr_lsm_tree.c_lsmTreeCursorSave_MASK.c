
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iNode; int blob; int pSave; } ;
typedef TYPE_1__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int*) ;

int FUNC_1(TreeCursor *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1 && VAR_1->pSave==0 ){
    int VAR_3 = VAR_1->iNode;
    if( VAR_3>=0 ){
      VAR_1->pSave = FUNC_0(VAR_1, &VAR_1->blob, &VAR_2);
    }
    VAR_1->iNode = -1;
  }
  return VAR_2;
}

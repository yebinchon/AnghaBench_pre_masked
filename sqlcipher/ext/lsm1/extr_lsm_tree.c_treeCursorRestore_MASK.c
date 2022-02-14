
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nKey; } ;
typedef TYPE_1__ TreeKey ;
struct TYPE_7__ {TYPE_1__* pSave; } ;
typedef TYPE_2__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(TreeCursor *VAR_1, int *VAR_2){
  int VAR_3 = VAR_0;
  if( VAR_1->pSave ){
    TreeKey *VAR_4 = VAR_1->pSave;
    VAR_1->pSave = 0;
    if( VAR_2 ){
      VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_4), VAR_4->nKey, VAR_2);
    }
  }
  return VAR_3;
}

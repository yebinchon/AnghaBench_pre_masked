
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nKey; } ;
typedef TYPE_1__ TreeKey ;
struct TYPE_8__ {scalar_t__ iNode; int blob; } ;
typedef TYPE_2__ TreeCursor ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int *,int*) ;
 int FUNC_3 (int ,int ,void*,int) ;

__attribute__((used)) static int FUNC_4(TreeCursor *VAR_0, void *VAR_1, int VAR_2, int *VAR_3){
  TreeKey *VAR_4;
  int VAR_5 = 0;
  FUNC_1( VAR_0->iNode>=0 );
  VAR_4 = FUNC_2(VAR_0, &VAR_0->blob, VAR_3);
  if( VAR_4 ){
    VAR_5 = FUNC_3(FUNC_0(VAR_4), VAR_4->nKey, VAR_1, VAR_2);
  }
  return VAR_5;
}

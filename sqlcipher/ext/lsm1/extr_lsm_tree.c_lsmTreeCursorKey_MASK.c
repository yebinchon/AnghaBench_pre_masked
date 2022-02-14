
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nKey; int flags; } ;
typedef TYPE_1__ TreeKey ;
struct TYPE_8__ {int blob; TYPE_1__* pSave; } ;
typedef TYPE_2__ TreeCursor ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*,int *,int*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(TreeCursor *VAR_1, int *VAR_2, void **VAR_3, int *VAR_4){
  TreeKey *VAR_5;
  int VAR_6 = VAR_0;

  FUNC_0( FUNC_2(VAR_1) );

  VAR_5 = VAR_1->pSave;
  if( !VAR_5 ){
    VAR_5 = FUNC_1(VAR_1, &VAR_1->blob, &VAR_6);
  }
  if( VAR_6==VAR_0 ){
    *VAR_4 = VAR_5->nKey;
    if( VAR_2 ) *VAR_2 = VAR_5->flags;
    *VAR_3 = (void *)&VAR_5[1];
  }

  return VAR_6;
}

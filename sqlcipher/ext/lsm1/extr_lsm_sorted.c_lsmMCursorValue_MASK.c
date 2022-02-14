
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nData; void* pData; } ;
struct TYPE_8__ {int flags; TYPE_3__ val; TYPE_1__* pDb; int * aTree; } ;
struct TYPE_7__ {int pEnv; } ;
typedef TYPE_2__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,void**,int*) ;
 int FUNC_3 (int ,TYPE_3__*,void*,int) ;

int FUNC_4(MultiCursor *VAR_3, void **VAR_4, int *VAR_5){
  void *VAR_6;
  int VAR_7;
  int VAR_8;
  if( (VAR_3->flags & VAR_1) || VAR_3->aTree==0 ){
    VAR_8 = VAR_2;
    VAR_7 = VAR_3->val.nData;
    VAR_6 = VAR_3->val.pData;
  }else{

    FUNC_0( VAR_3->aTree );
    FUNC_0( FUNC_1(VAR_3, (VAR_3->flags & VAR_0)) );

    VAR_8 = FUNC_2(VAR_3, VAR_3->aTree[1], &VAR_6, &VAR_7);
    if( VAR_6 && VAR_8==VAR_2 ){
      VAR_8 = FUNC_3(VAR_3->pDb->pEnv, &VAR_3->val, VAR_6, VAR_7);
      VAR_6 = VAR_3->val.pData;
    }

    if( VAR_8!=VAR_2 ){
      VAR_6 = 0;
      VAR_7 = 0;
    }
  }
  *VAR_4 = VAR_6;
  *VAR_5 = VAR_7;
  return VAR_8;
}

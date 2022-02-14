
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lsm_env ;
struct TYPE_4__ {struct TYPE_4__* apShmChunk; scalar_t__ pFile; int pClientMutex; } ;
typedef TYPE_1__ Database ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(lsm_env *VAR_0, Database *VAR_1){
  FUNC_0( FUNC_1(VAR_0) );
  if( VAR_1 ){

    FUNC_4(VAR_0, VAR_1->pClientMutex);

    if( VAR_1->pFile ){
      FUNC_2(VAR_0, VAR_1->pFile);
    }


    FUNC_3(VAR_0, VAR_1->apShmChunk);


    FUNC_3(VAR_0, VAR_1);
  }
}

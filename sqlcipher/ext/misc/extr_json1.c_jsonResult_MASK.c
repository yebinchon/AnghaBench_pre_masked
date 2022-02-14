
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bErr; scalar_t__ bStatic; int nUsed; int zBuf; int pCtx; } ;
typedef TYPE_1__ JsonString ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(JsonString *VAR_3){
  if( VAR_3->bErr==0 ){
    FUNC_2(VAR_3->pCtx, VAR_3->zBuf, VAR_3->nUsed,
                          VAR_3->bStatic ? VAR_0 : VAR_2,
                          VAR_1);
    FUNC_1(VAR_3);
  }
  FUNC_0( VAR_3->bStatic );
}

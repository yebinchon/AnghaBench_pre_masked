
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pData; scalar_t__ pEnv; } ;
typedef TYPE_1__ LsmBlob ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(LsmBlob *VAR_0){
  FUNC_0( VAR_0->pEnv || VAR_0->pData==0 );
  if( VAR_0->pData ) FUNC_1(VAR_0->pEnv, VAR_0->pData);
  FUNC_2(VAR_0, 0, sizeof(LsmBlob));
}

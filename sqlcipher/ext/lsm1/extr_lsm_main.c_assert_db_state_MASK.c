
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pCsr; scalar_t__ nTransOpen; scalar_t__ iReader; scalar_t__ bRoTrans; scalar_t__ pClient; } ;
typedef TYPE_1__ lsm_db ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(lsm_db *VAR_0){






  FUNC_0( (VAR_0->pCsr!=0||VAR_0->nTransOpen>0)==(VAR_0->iReader>=0||VAR_0->bRoTrans) );

  FUNC_0( (VAR_0->iReader<0 && VAR_0->bRoTrans==0) || VAR_0->pClient!=0 );

  FUNC_0( VAR_0->nTransOpen>=0 );
}

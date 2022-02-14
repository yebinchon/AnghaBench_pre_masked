
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_7__ {int nMem; int * pVdbe; } ;
struct TYPE_6__ {int nOBSat; scalar_t__ pDeferredRowLoad; } ;
typedef TYPE_1__ SortCtx ;
typedef int Select ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_1 (int *,int ,int,int,int) ;

__attribute__((used)) static int FUNC_2(
  Parse *VAR_1,
  SortCtx *VAR_2,
  Select *VAR_3,
  int VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_2->nOBSat;
  Vdbe *VAR_7 = VAR_1->pVdbe;
  int VAR_8 = ++VAR_1->nMem;
  if( VAR_2->pDeferredRowLoad ){
    FUNC_0(VAR_1, VAR_3, VAR_2->pDeferredRowLoad);
  }
  FUNC_1(VAR_7, VAR_0, VAR_4+VAR_6, VAR_5-VAR_6, VAR_8);
  return VAR_8;
}

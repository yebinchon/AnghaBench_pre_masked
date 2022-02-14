
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int iCol; int nInst; int * pFts; TYPE_1__ const* pApi; } ;
struct TYPE_7__ {int (* xInstCount ) (int *,int *) ;} ;
typedef TYPE_1__ Fts5ExtensionApi ;
typedef int Fts5Context ;
typedef TYPE_2__ CInstIter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(
  const Fts5ExtensionApi *VAR_1,
  Fts5Context *VAR_2,
  int VAR_3,
  CInstIter *VAR_4
){
  int VAR_5;

  FUNC_1(VAR_4, 0, sizeof(CInstIter));
  VAR_4->pApi = VAR_1;
  VAR_4->pFts = VAR_2;
  VAR_4->iCol = VAR_3;
  VAR_5 = VAR_1->xInstCount(VAR_2, &VAR_4->nInst);

  if( VAR_5==VAR_0 ){
    VAR_5 = FUNC_0(VAR_4);
  }

  return VAR_5;
}

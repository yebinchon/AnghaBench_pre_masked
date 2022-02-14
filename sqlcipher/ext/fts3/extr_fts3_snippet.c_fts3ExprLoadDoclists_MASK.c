
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int pExpr; } ;
struct TYPE_4__ {int nPhrase; int nToken; TYPE_2__* pCsr; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ LoadDoclistCtx ;
typedef TYPE_2__ Fts3Cursor ;


 int FUNC_0 (int ,int ,void*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(
  Fts3Cursor *VAR_1,
  int *VAR_2,
  int *VAR_3
){
  int VAR_4;
  LoadDoclistCtx VAR_5 = {0,0,0};
  VAR_5.pCsr = VAR_1;
  VAR_4 = FUNC_0(VAR_1->pExpr, VAR_0, (void *)&VAR_5);
  if( VAR_2 ) *VAR_2 = VAR_5.nPhrase;
  if( VAR_3 ) *VAR_3 = VAR_5.nToken;
  return VAR_4;
}

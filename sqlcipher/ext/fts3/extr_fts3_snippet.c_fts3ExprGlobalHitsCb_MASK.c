
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nCol; int * aMatchinfo; int pCursor; } ;
typedef TYPE_1__ MatchInfo ;
typedef int Fts3Expr ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(
  Fts3Expr *VAR_0,
  int VAR_1,
  void *VAR_2
){
  MatchInfo *VAR_3 = (MatchInfo *)VAR_2;
  return FUNC_0(
      VAR_3->pCursor, VAR_0, &VAR_3->aMatchinfo[3*VAR_1*VAR_3->nCol]
  );
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nCol; int * aMatchinfo; int pCursor; } ;
typedef TYPE_1__ MatchInfo ;
typedef int Fts3Expr ;


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int ,int *,int,char**) ;

__attribute__((used)) static int FUNC_2(
  Fts3Expr *VAR_1,
  int VAR_2,
  void *VAR_3
){
  int VAR_4 = VAR_0;
  MatchInfo *VAR_5 = (MatchInfo *)VAR_3;
  int VAR_6 = VAR_2 * VAR_5->nCol * 3;
  int VAR_7;

  for(VAR_7=0; VAR_7<VAR_5->nCol && VAR_4==VAR_0; VAR_7++){
    char *VAR_8;
    VAR_4 = FUNC_1(VAR_5->pCursor, VAR_1, VAR_7, &VAR_8);
    if( VAR_8 ){
      VAR_5->aMatchinfo[VAR_6+VAR_7*3] = FUNC_0(&VAR_8);
    }else{
      VAR_5->aMatchinfo[VAR_6+VAR_7*3] = 0;
    }
  }

  return VAR_4;
}

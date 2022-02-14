
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* aAll; int nAll; } ;
struct TYPE_8__ {int iDoclistToken; TYPE_1__ doclist; } ;
struct TYPE_7__ {int bDescIdx; } ;
typedef TYPE_2__ Fts3Table ;
typedef TYPE_3__ Fts3Phrase ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,char*,int,char**,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(
  Fts3Table *VAR_1,
  Fts3Phrase *VAR_2,
  int VAR_3,
  char *VAR_4,
  int VAR_5
){
  int VAR_6 = VAR_0;
  FUNC_0( VAR_3!=VAR_2->iDoclistToken );

  if( VAR_4==0 ){
    FUNC_2(VAR_2->doclist.aAll);
    VAR_2->doclist.aAll = 0;
    VAR_2->doclist.nAll = 0;
  }

  else if( VAR_2->iDoclistToken<0 ){
    VAR_2->doclist.aAll = VAR_4;
    VAR_2->doclist.nAll = VAR_5;
  }

  else if( VAR_2->doclist.aAll==0 ){
    FUNC_2(VAR_4);
  }

  else {
    char *VAR_7;
    char *VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;

    if( VAR_2->iDoclistToken<VAR_3 ){
      VAR_7 = VAR_2->doclist.aAll;
      VAR_9 = VAR_2->doclist.nAll;
      VAR_8 = VAR_4;
      VAR_10 = VAR_5;
      VAR_11 = VAR_3 - VAR_2->iDoclistToken;
    }else{
      VAR_8 = VAR_2->doclist.aAll;
      VAR_10 = VAR_2->doclist.nAll;
      VAR_7 = VAR_4;
      VAR_9 = VAR_5;
      VAR_11 = VAR_2->iDoclistToken - VAR_3;
    }

    VAR_6 = FUNC_1(
        VAR_1->bDescIdx, VAR_11, VAR_7, VAR_9, &VAR_8, &VAR_10
    );
    FUNC_2(VAR_7);
    VAR_2->doclist.aAll = VAR_8;
    VAR_2->doclist.nAll = VAR_10;
  }

  if( VAR_3>VAR_2->iDoclistToken ) VAR_2->iDoclistToken = VAR_3;
  return VAR_6;
}

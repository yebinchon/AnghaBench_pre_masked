
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int * azCol; } ;
struct TYPE_11__ {int nPhrase; int nNear; TYPE_2__** apPhrase; TYPE_1__* pColset; } ;
struct TYPE_10__ {int eType; int nChild; struct TYPE_10__** apChild; TYPE_4__* pNear; } ;
struct TYPE_9__ {int nTerm; int * aTerm; } ;
struct TYPE_8__ {int* aiCol; } ;
typedef TYPE_2__ Fts5ExprPhrase ;
typedef TYPE_3__ Fts5ExprNode ;
typedef TYPE_4__ Fts5ExprNearset ;
typedef TYPE_5__ Fts5Config ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static char *FUNC_5(Fts5Config *VAR_4, Fts5ExprNode *VAR_5){
  char *VAR_6 = 0;
  if( VAR_5->eType==0 ){
    return FUNC_4("\"\"");
  }else
  if( VAR_5->eType==VAR_2 || VAR_5->eType==VAR_3 ){
    Fts5ExprNearset *VAR_7 = VAR_5->pNear;
    int VAR_8;
    int VAR_9;

    if( VAR_7->pColset ){
      int VAR_10 = VAR_7->pColset->aiCol[0];
      VAR_6 = FUNC_2(VAR_6, "%s : ", VAR_4->azCol[VAR_10]);
      if( VAR_6==0 ) return 0;
    }

    if( VAR_7->nPhrase>1 ){
      VAR_6 = FUNC_2(VAR_6, "NEAR(");
      if( VAR_6==0 ) return 0;
    }

    for(VAR_8=0; VAR_8<VAR_7->nPhrase; VAR_8++){
      Fts5ExprPhrase *VAR_11 = VAR_7->apPhrase[VAR_8];
      if( VAR_8!=0 ){
        VAR_6 = FUNC_2(VAR_6, " ");
        if( VAR_6==0 ) return 0;
      }
      for(VAR_9=0; VAR_9<VAR_11->nTerm; VAR_9++){
        char *VAR_12 = FUNC_1(&VAR_11->aTerm[VAR_9]);
        if( VAR_12 ){
          VAR_6 = FUNC_2(VAR_6, "%s%s", VAR_9==0?"":" + ", VAR_12);
          FUNC_3(VAR_12);
        }
        if( VAR_12==0 || VAR_6==0 ){
          FUNC_3(VAR_6);
          return 0;
        }
      }
    }

    if( VAR_7->nPhrase>1 ){
      VAR_6 = FUNC_2(VAR_6, ", %d)", VAR_7->nNear);
      if( VAR_6==0 ) return 0;
    }

  }else{
    char const *VAR_13 = 0;
    int VAR_14;

    switch( VAR_5->eType ){
      case 129: VAR_13 = " AND "; break;
      case 128: VAR_13 = " NOT "; break;
      default:
        FUNC_0( VAR_5->eType==VAR_1 );
        VAR_13 = " OR ";
        break;
    }

    for(VAR_14=0; VAR_14<VAR_5->nChild; VAR_14++){
      char *VAR_15 = FUNC_5(VAR_4, VAR_5->apChild[VAR_14]);
      if( VAR_15==0 ){
        FUNC_3(VAR_6);
        VAR_6 = 0;
      }else{
        int VAR_16 = VAR_5->apChild[VAR_14]->eType;
        int VAR_17 = (VAR_16!=VAR_2 && VAR_16!=VAR_3 && VAR_16!=VAR_0);
        VAR_6 = FUNC_2(VAR_6, "%s%s%z%s",
            (VAR_14==0 ? "" : VAR_13),
            (VAR_17?"(":""), VAR_15, (VAR_17?")":"")
        );
      }
      if( VAR_6==0 ) break;
    }
  }

  return VAR_6;
}

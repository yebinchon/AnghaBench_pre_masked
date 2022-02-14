
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int nPhrase; char* nNear; TYPE_3__** apPhrase; TYPE_1__* pColset; } ;
struct TYPE_10__ {int eType; int nChild; struct TYPE_10__** apChild; TYPE_5__* pNear; } ;
struct TYPE_9__ {int nTerm; TYPE_2__* aTerm; } ;
struct TYPE_8__ {char* zTerm; scalar_t__ bPrefix; } ;
struct TYPE_7__ {int* aiCol; int nCol; } ;
typedef TYPE_3__ Fts5ExprPhrase ;
typedef TYPE_4__ Fts5ExprNode ;
typedef TYPE_5__ Fts5ExprNearset ;
typedef int Fts5Config ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*) ;

__attribute__((used)) static char *FUNC_4(
  Fts5Config *VAR_3,
  const char *VAR_4,
  Fts5ExprNode *VAR_5
){
  char *VAR_6 = 0;
  if( VAR_5->eType==VAR_1 || VAR_5->eType==VAR_2 ){
    Fts5ExprNearset *VAR_7 = VAR_5->pNear;
    int VAR_8;
    int VAR_9;

    VAR_6 = FUNC_1(VAR_6, "%s ", VAR_4);
    if( VAR_6==0 ) return 0;
    if( VAR_7->pColset ){
      int *VAR_10 = VAR_7->pColset->aiCol;
      int VAR_11 = VAR_7->pColset->nCol;
      if( VAR_11==1 ){
        VAR_6 = FUNC_1(VAR_6, "-col %d ", VAR_10[0]);
      }else{
        VAR_6 = FUNC_1(VAR_6, "-col {%d", VAR_10[0]);
        for(VAR_8=1; VAR_8<VAR_7->pColset->nCol; VAR_8++){
          VAR_6 = FUNC_1(VAR_6, " %d", VAR_10[VAR_8]);
        }
        VAR_6 = FUNC_1(VAR_6, "} ");
      }
      if( VAR_6==0 ) return 0;
    }

    if( VAR_7->nPhrase>1 ){
      VAR_6 = FUNC_1(VAR_6, "-near %d ", VAR_7->nNear);
      if( VAR_6==0 ) return 0;
    }

    VAR_6 = FUNC_1(VAR_6, "--");
    if( VAR_6==0 ) return 0;

    for(VAR_8=0; VAR_8<VAR_7->nPhrase; VAR_8++){
      Fts5ExprPhrase *VAR_12 = VAR_7->apPhrase[VAR_8];

      VAR_6 = FUNC_1(VAR_6, " {");
      for(VAR_9=0; VAR_6 && VAR_9<VAR_12->nTerm; VAR_9++){
        char *VAR_13 = VAR_12->aTerm[VAR_9].zTerm;
        VAR_6 = FUNC_1(VAR_6, "%s%s", VAR_9==0?"":" ", VAR_13);
        if( VAR_12->aTerm[VAR_9].bPrefix ){
          VAR_6 = FUNC_1(VAR_6, "*");
        }
      }

      if( VAR_6 ) VAR_6 = FUNC_1(VAR_6, "}");
      if( VAR_6==0 ) return 0;
    }

  }else{
    char const *VAR_14 = 0;
    int VAR_15;
    switch( VAR_5->eType ){
      case 129: VAR_14 = "AND"; break;
      case 128: VAR_14 = "NOT"; break;
      default:
        FUNC_0( VAR_5->eType==VAR_0 );
        VAR_14 = "OR";
        break;
    }

    VAR_6 = FUNC_3("%s", VAR_14);
    for(VAR_15=0; VAR_6 && VAR_15<VAR_5->nChild; VAR_15++){
      char *VAR_16 = FUNC_4(VAR_3, VAR_4, VAR_5->apChild[VAR_15]);
      if( !VAR_16 ){
        FUNC_2(VAR_6);
        VAR_6 = 0;
      }else{
        VAR_6 = FUNC_1(VAR_6, " [%z]", VAR_16);
      }
    }
  }

  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_10__ {int eType; int nChild; struct TYPE_10__** apChild; TYPE_3__* pNear; scalar_t__ bEof; int iRowid; } ;
struct TYPE_9__ {TYPE_2__** apPhrase; } ;
struct TYPE_7__ {int n; } ;
struct TYPE_8__ {TYPE_1__ poslist; } ;
typedef TYPE_4__ Fts5ExprNode ;



 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2(Fts5ExprNode *VAR_1, i64 VAR_2){
  VAR_1->iRowid = VAR_2;
  VAR_1->bEof = 0;
  switch( VAR_1->eType ){
    case 128:
    case 129:
      return (VAR_1->pNear->apPhrase[0]->poslist.n>0);

    case 131: {
      int VAR_3;
      for(VAR_3=0; VAR_3<VAR_1->nChild; VAR_3++){
        if( FUNC_2(VAR_1->apChild[VAR_3], VAR_2)==0 ){
          FUNC_1(VAR_1);
          return 0;
        }
      }
      break;
    }

    case 130: {
      int VAR_4;
      int VAR_5 = 0;
      for(VAR_4=0; VAR_4<VAR_1->nChild; VAR_4++){
        if( FUNC_2(VAR_1->apChild[VAR_4], VAR_2) ){
          VAR_5 = 1;
        }
      }
      return VAR_5;
    }

    default: {
      FUNC_0( VAR_1->eType==VAR_0 );
      if( 0==FUNC_2(VAR_1->apChild[0], VAR_2)
          || 0!=FUNC_2(VAR_1->apChild[1], VAR_2)
        ){
        FUNC_1(VAR_1);
        return 0;
      }
      break;
    }
  }
  return 1;
}

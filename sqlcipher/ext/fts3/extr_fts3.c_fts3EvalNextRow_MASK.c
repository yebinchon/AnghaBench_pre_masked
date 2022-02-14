
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int sqlite3_int64 ;
struct TYPE_13__ {int bDesc; } ;
struct TYPE_12__ {int iDocid; int nList; int pList; int aAll; } ;
struct TYPE_11__ {scalar_t__ bEof; int bStart; int eType; int iDocid; TYPE_1__* pPhrase; struct TYPE_11__* pRight; struct TYPE_11__* pLeft; int bDeferred; } ;
struct TYPE_10__ {TYPE_3__ doclist; } ;
typedef TYPE_1__ Fts3Phrase ;
typedef TYPE_2__ Fts3Expr ;
typedef TYPE_3__ Fts3Doclist ;
typedef TYPE_4__ Fts3Cursor ;


 int FUNC_0 (int ,int ) ;




 int const VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_1__*,int*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(
  Fts3Cursor *VAR_2,
  Fts3Expr *VAR_3,
  int *VAR_4
){
  if( *VAR_4==VAR_1 ){
    int VAR_5 = VAR_2->bDesc;
    FUNC_1( VAR_3->bEof==0 );
    VAR_3->bStart = 1;

    switch( VAR_3->eType ){
      case 130:
      case 131: {
        Fts3Expr *VAR_6 = VAR_3->pLeft;
        Fts3Expr *VAR_7 = VAR_3->pRight;
        FUNC_1( !VAR_6->bDeferred || !VAR_7->bDeferred );

        if( VAR_6->bDeferred ){


          FUNC_5(VAR_2, VAR_7, VAR_4);
          VAR_3->iDocid = VAR_7->iDocid;
          VAR_3->bEof = VAR_7->bEof;
        }else if( VAR_7->bDeferred ){


          FUNC_5(VAR_2, VAR_6, VAR_4);
          VAR_3->iDocid = VAR_6->iDocid;
          VAR_3->bEof = VAR_6->bEof;
        }else{

          FUNC_5(VAR_2, VAR_6, VAR_4);
          FUNC_5(VAR_2, VAR_7, VAR_4);
          while( !VAR_6->bEof && !VAR_7->bEof && *VAR_4==VAR_1 ){
            sqlite3_int64 VAR_8 = FUNC_0(VAR_6->iDocid, VAR_7->iDocid);
            if( VAR_8==0 ) break;
            if( VAR_8<0 ){
              FUNC_5(VAR_2, VAR_6, VAR_4);
            }else{
              FUNC_5(VAR_2, VAR_7, VAR_4);
            }
          }
          VAR_3->iDocid = VAR_6->iDocid;
          VAR_3->bEof = (VAR_6->bEof || VAR_7->bEof);
          if( VAR_3->eType==130 && VAR_3->bEof ){
            FUNC_1( VAR_7->eType==VAR_0 );
            if( VAR_7->pPhrase->doclist.aAll ){
              Fts3Doclist *VAR_9 = &VAR_7->pPhrase->doclist;
              while( *VAR_4==VAR_1 && VAR_7->bEof==0 ){
                FUNC_4(VAR_9->pList, 0, VAR_9->nList);
                FUNC_5(VAR_2, VAR_7, VAR_4);
              }
            }
            if( VAR_6->pPhrase && VAR_6->pPhrase->doclist.aAll ){
              Fts3Doclist *VAR_10 = &VAR_6->pPhrase->doclist;
              while( *VAR_4==VAR_1 && VAR_6->bEof==0 ){
                FUNC_4(VAR_10->pList, 0, VAR_10->nList);
                FUNC_5(VAR_2, VAR_6, VAR_4);
              }
            }
          }
        }
        break;
      }

      case 128: {
        Fts3Expr *VAR_11 = VAR_3->pLeft;
        Fts3Expr *VAR_12 = VAR_3->pRight;
        sqlite3_int64 VAR_13 = FUNC_0(VAR_11->iDocid, VAR_12->iDocid);

        FUNC_1( VAR_11->bStart || VAR_11->iDocid==VAR_12->iDocid );
        FUNC_1( VAR_12->bStart || VAR_11->iDocid==VAR_12->iDocid );

        if( VAR_12->bEof || (VAR_11->bEof==0 && VAR_13<0) ){
          FUNC_5(VAR_2, VAR_11, VAR_4);
        }else if( VAR_11->bEof || VAR_13>0 ){
          FUNC_5(VAR_2, VAR_12, VAR_4);
        }else{
          FUNC_5(VAR_2, VAR_11, VAR_4);
          FUNC_5(VAR_2, VAR_12, VAR_4);
        }

        VAR_3->bEof = (VAR_11->bEof && VAR_12->bEof);
        VAR_13 = FUNC_0(VAR_11->iDocid, VAR_12->iDocid);
        if( VAR_12->bEof || (VAR_11->bEof==0 && VAR_13<0) ){
          VAR_3->iDocid = VAR_11->iDocid;
        }else{
          VAR_3->iDocid = VAR_12->iDocid;
        }

        break;
      }

      case 129: {
        Fts3Expr *VAR_14 = VAR_3->pLeft;
        Fts3Expr *VAR_15 = VAR_3->pRight;

        if( VAR_15->bStart==0 ){
          FUNC_5(VAR_2, VAR_15, VAR_4);
          FUNC_1( *VAR_4!=VAR_1 || VAR_15->bStart );
        }

        FUNC_5(VAR_2, VAR_14, VAR_4);
        if( VAR_14->bEof==0 ){
          while( !*VAR_4
              && !VAR_15->bEof
              && FUNC_0(VAR_14->iDocid, VAR_15->iDocid)>0
          ){
            FUNC_5(VAR_2, VAR_15, VAR_4);
          }
        }
        VAR_3->iDocid = VAR_14->iDocid;
        VAR_3->bEof = VAR_14->bEof;
        break;
      }

      default: {
        Fts3Phrase *VAR_16 = VAR_3->pPhrase;
        FUNC_2(VAR_16);
        *VAR_4 = FUNC_3(VAR_2, VAR_16, &VAR_3->bEof);
        VAR_3->iDocid = VAR_16->doclist.iDocid;
        break;
      }
    }
  }
}

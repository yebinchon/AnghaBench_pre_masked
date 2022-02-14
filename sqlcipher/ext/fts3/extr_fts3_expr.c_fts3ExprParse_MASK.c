
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int eType; struct TYPE_13__* pParent; struct TYPE_13__* pLeft; struct TYPE_13__* pRight; } ;
struct TYPE_12__ {scalar_t__ isNot; } ;
typedef TYPE_1__ ParseContext ;
typedef TYPE_2__ Fts3Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char const*,int,TYPE_2__**,int*) ;
 int FUNC_3 (TYPE_2__**,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(
  ParseContext *VAR_9,
  const char *VAR_10, int VAR_11,
  Fts3Expr **VAR_12,
  int *VAR_13
){
  Fts3Expr *VAR_14 = 0;
  Fts3Expr *VAR_15 = 0;
  Fts3Expr *VAR_16 = 0;
  int VAR_17 = VAR_11;
  const char *VAR_18 = VAR_10;
  int VAR_19 = VAR_7;
  int VAR_20 = 1;

  while( VAR_19==VAR_7 ){
    Fts3Expr *VAR_21 = 0;
    int VAR_22 = 0;

    VAR_19 = FUNC_2(VAR_9, VAR_18, VAR_17, &VAR_21, &VAR_22);
    FUNC_0( VAR_22>0 || (VAR_19!=VAR_7 && VAR_21==0) );
    if( VAR_19==VAR_7 ){
      if( VAR_21 ){
        int VAR_23;

        if( !VAR_8
            && VAR_21->eType==VAR_3 && VAR_9->isNot
        ){

          Fts3Expr *VAR_24 = FUNC_1(sizeof(Fts3Expr));
          if( !VAR_24 ){
            FUNC_4(VAR_21);
            VAR_19 = VAR_6;
            goto exprparse_out;
          }
          VAR_24->eType = VAR_2;
          VAR_24->pRight = VAR_21;
          VAR_21->pParent = VAR_24;
          if( VAR_16 ){
            VAR_24->pLeft = VAR_16;
            VAR_16->pParent = VAR_24;
          }
          VAR_16 = VAR_24;
          VAR_21 = VAR_15;
        }else{
          int VAR_25 = VAR_21->eType;
          VAR_23 = (VAR_25==VAR_3 || VAR_21->pLeft);






          if( !VAR_23 && VAR_20 ){
            FUNC_4(VAR_21);
            VAR_19 = VAR_5;
            goto exprparse_out;
          }

          if( VAR_23 && !VAR_20 ){

            Fts3Expr *VAR_26;
            FUNC_0( VAR_14 && VAR_15 );
            VAR_26 = FUNC_1(sizeof(Fts3Expr));
            if( !VAR_26 ){
              FUNC_4(VAR_21);
              VAR_19 = VAR_6;
              goto exprparse_out;
            }
            VAR_26->eType = VAR_0;
            FUNC_3(&VAR_14, VAR_15, VAR_26);
            VAR_15 = VAR_26;
          }
          if( VAR_15 && (
            (VAR_25==VAR_1 && !VAR_23 && VAR_15->eType!=VAR_3)
         || (VAR_25!=VAR_3 && VAR_23 && VAR_15->eType==VAR_1)
          )){
            FUNC_4(VAR_21);
            VAR_19 = VAR_5;
            goto exprparse_out;
          }

          if( VAR_23 ){
            if( VAR_14 ){
              FUNC_0( VAR_15 && VAR_15->pLeft && VAR_15->pRight==0 );
              VAR_15->pRight = VAR_21;
              VAR_21->pParent = VAR_15;
            }else{
              VAR_14 = VAR_21;
            }
          }else{
            FUNC_3(&VAR_14, VAR_15, VAR_21);
          }
          VAR_20 = !VAR_23;
        }
        VAR_15 = VAR_21;
      }
      FUNC_0( VAR_22>0 );
    }
    FUNC_0( VAR_19!=VAR_7 || (VAR_22>0 && VAR_22<=VAR_17) );
    VAR_17 -= VAR_22;
    VAR_18 += VAR_22;
  }

  if( VAR_19==VAR_4 && VAR_14 && VAR_20 ){
    VAR_19 = VAR_5;
  }

  if( VAR_19==VAR_4 ){
    VAR_19 = VAR_7;
    if( !VAR_8 && VAR_16 ){
      if( !VAR_14 ){
        VAR_19 = VAR_5;
      }else{
        Fts3Expr *VAR_27 = VAR_16;
        while( VAR_27->pLeft ){
          VAR_27 = VAR_27->pLeft;
        }
        VAR_27->pLeft = VAR_14;
        VAR_14->pParent = VAR_27;
        VAR_14 = VAR_16;
      }
    }
  }
  *VAR_13 = VAR_11 - VAR_17;

exprparse_out:
  if( VAR_19!=VAR_7 ){
    FUNC_4(VAR_14);
    FUNC_4(VAR_16);
    VAR_14 = 0;
  }
  *VAR_12 = VAR_14;
  return VAR_19;
}

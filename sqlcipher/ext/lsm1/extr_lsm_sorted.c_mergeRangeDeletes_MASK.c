
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nData; int pData; } ;
struct TYPE_8__ {int* aTree; int flags; int nPtr; int eType; TYPE_2__ key; TYPE_1__* pDb; } ;
struct TYPE_6__ {int xCmp; } ;
typedef TYPE_3__ MultiCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int,int*,void**,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ,int ,void*,int) ;

__attribute__((used)) static void FUNC_4(MultiCursor *VAR_7, int *VAR_8, int *VAR_9){
  int VAR_10 = *VAR_9;
  int VAR_11 = VAR_7->aTree[1];
  int VAR_12;

  FUNC_0( VAR_7->flags & VAR_2 );
  if( VAR_7->flags & VAR_1 ){



    FUNC_0( (VAR_10 & VAR_5)==0 );
    VAR_10 &= ~(VAR_6|VAR_3);
  }else{
    for(VAR_12=0; VAR_12<(VAR_0 + VAR_7->nPtr); VAR_12++){
      if( VAR_12!=VAR_11 ){
        int VAR_13;
        void *VAR_14;
        int VAR_15;
        int VAR_16;
        FUNC_1(VAR_7, VAR_12, &VAR_13, &VAR_14, &VAR_15);

        if( VAR_14 ){
          VAR_16 = FUNC_3(VAR_7->pDb->xCmp,
              FUNC_2(VAR_7->eType), VAR_7->key.pData, VAR_7->key.nData,
              FUNC_2(VAR_13), VAR_14, VAR_15
          );
          FUNC_0( VAR_16<=0 );
          if( VAR_16==0 ){
            if( (VAR_10 & (VAR_4|VAR_5))==0 ){
              if( VAR_13 & VAR_4 ){
                VAR_10 |= VAR_4;
                *VAR_8 = VAR_12;
              }
              else if( VAR_13 & VAR_5 ){
                VAR_10 |= VAR_5;
              }
            }
            VAR_10 |= (VAR_13 & (VAR_3|VAR_6));
          }

          if( VAR_12>VAR_11 && (VAR_13 & VAR_3) && VAR_16<0 ){
            if( VAR_10 & (VAR_4|VAR_5) ){
              VAR_10 |= (VAR_3|VAR_6);
            }else{
              VAR_10 = 0;
            }
            break;
          }
        }
      }
    }

    FUNC_0( (VAR_10 & VAR_4)==0 || (VAR_10 & VAR_5)==0 );
    if( (VAR_10 & VAR_6)
     && (VAR_10 & VAR_3)
     && (VAR_10 & VAR_5 )
    ){
      VAR_10 = 0;
    }
  }

  *VAR_9 = VAR_10;
}

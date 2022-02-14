
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int eState; int pBuf; int pColset; } ;
typedef TYPE_1__ PoslistCallbackCtx ;
typedef int Fts5Index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int const*,int,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(
  Fts5Index *VAR_0,
  void *VAR_1,
  const u8 *VAR_2, int VAR_3
){
  PoslistCallbackCtx *VAR_4 = (PoslistCallbackCtx*)VAR_1;
  FUNC_0(VAR_0);
  FUNC_1( VAR_3>=0 );
  if( VAR_3>0 ){


    int VAR_5 = 0;
    int VAR_6 = 0;

    if( VAR_4->eState==2 ){
      int VAR_7;
      FUNC_4(VAR_2, VAR_5, VAR_7);
      if( FUNC_5(VAR_4->pColset, VAR_7) ){
        VAR_4->eState = 1;
        FUNC_3(VAR_4->pBuf, 1);
      }else{
        VAR_4->eState = 0;
      }
    }

    do {
      while( VAR_5<VAR_3 && VAR_2[VAR_5]!=0x01 ){
        while( VAR_2[VAR_5] & 0x80 ) VAR_5++;
        VAR_5++;
      }
      if( VAR_4->eState ){
        FUNC_2(VAR_4->pBuf, &VAR_2[VAR_6], VAR_5-VAR_6);
      }
      if( VAR_5<VAR_3 ){
        int VAR_8;
        VAR_6 = VAR_5;
        VAR_5++;
        if( VAR_5>=VAR_3 ){
          VAR_4->eState = 2;
        }else{
          FUNC_4(VAR_2, VAR_5, VAR_8);
          VAR_4->eState = FUNC_5(VAR_4->pColset, VAR_8);
          if( VAR_4->eState ){
            FUNC_2(VAR_4->pBuf, &VAR_2[VAR_6], VAR_5-VAR_6);
            VAR_6 = VAR_5;
          }
        }
      }
    }while( VAR_5<VAR_3 );
  }
}

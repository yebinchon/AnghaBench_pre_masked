
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef int ht_slot ;
struct TYPE_3__ {void* iZero; int* aHash; void** aPgno; } ;
typedef TYPE_1__ WalHashLoc ;
typedef int Wal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(Wal *VAR_3, u32 VAR_4, u32 VAR_5){
  int VAR_6;
  WalHashLoc VAR_7;

  VAR_6 = FUNC_5(VAR_3, FUNC_3(VAR_4), &VAR_7);




  if( VAR_6==VAR_2 ){
    int VAR_8;
    int VAR_9;
    int VAR_10;

    VAR_9 = VAR_4 - VAR_7.iZero;
    FUNC_0( VAR_9 <= VAR_0/2 + 1 );




    if( VAR_9==1 ){
      int VAR_11 = (int)((u8 *)&VAR_7.aHash[VAR_0]
                               - (u8 *)&VAR_7.aPgno[1]);
      FUNC_1((void*)&VAR_7.aPgno[1], 0, VAR_11);
    }







    if( VAR_7.aPgno[VAR_9] ){
      FUNC_2(VAR_3);
      FUNC_0( !VAR_7.aPgno[VAR_9] );
    }


    VAR_10 = VAR_9;
    for(VAR_8=FUNC_4(VAR_5); VAR_7.aHash[VAR_8]; VAR_8=FUNC_6(VAR_8)){
      if( (VAR_10--)==0 ) return VAR_1;
    }
    VAR_7.aPgno[VAR_9] = VAR_5;
    VAR_7.aHash[VAR_8] = (ht_slot)VAR_9;
  }


  return VAR_6;
}

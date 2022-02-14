
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {struct TYPE_6__* pScanNext; } ;
typedef TYPE_1__ Fts5HashEntry ;


 char* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static Fts5HashEntry *FUNC_1(
  Fts5HashEntry *VAR_0,
  Fts5HashEntry *VAR_1
){
  Fts5HashEntry *VAR_2 = VAR_0;
  Fts5HashEntry *VAR_3 = VAR_1;
  Fts5HashEntry *VAR_4 = 0;
  Fts5HashEntry **VAR_5 = &VAR_4;

  while( VAR_2 || VAR_3 ){
    if( VAR_2==0 ){
      *VAR_5 = VAR_3;
      VAR_3 = 0;
    }else if( VAR_3==0 ){
      *VAR_5 = VAR_2;
      VAR_2 = 0;
    }else{
      int VAR_6 = 0;
      char *VAR_7 = FUNC_0(VAR_2);
      char *VAR_8 = FUNC_0(VAR_3);
      while( VAR_7[VAR_6]==VAR_8[VAR_6] ) VAR_6++;

      if( ((u8)VAR_7[VAR_6])>((u8)VAR_8[VAR_6]) ){

        *VAR_5 = VAR_3;
        VAR_5 = &VAR_3->pScanNext;
        VAR_3 = VAR_3->pScanNext;
      }else{

        *VAR_5 = VAR_2;
        VAR_5 = &VAR_2->pScanNext;
        VAR_2 = VAR_2->pScanNext;
      }
      *VAR_5 = 0;
    }
  }

  return VAR_4;
}

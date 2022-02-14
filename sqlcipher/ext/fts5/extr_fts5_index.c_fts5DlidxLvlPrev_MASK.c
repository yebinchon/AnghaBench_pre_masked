
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ i64 ;
struct TYPE_5__ {int iOff; int bEof; int iFirstOff; scalar_t__ iLeafPgno; int iRowid; TYPE_1__* pData; } ;
struct TYPE_4__ {int* p; } ;
typedef TYPE_2__ Fts5DlidxLvl ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int *) ;

__attribute__((used)) static int FUNC_2(Fts5DlidxLvl *VAR_0){
  int VAR_1 = VAR_0->iOff;

  FUNC_0( VAR_0->bEof==0 );
  if( VAR_1<=VAR_0->iFirstOff ){
    VAR_0->bEof = 1;
  }else{
    u8 *VAR_2 = VAR_0->pData->p;
    i64 VAR_3;
    int VAR_4;
    int VAR_5;
    int VAR_6 = 0;





    VAR_4 = (VAR_1>9 ? VAR_1-9 : 0);
    for(VAR_1--; VAR_1>VAR_4; VAR_1--){
      if( (VAR_2[VAR_1-1] & 0x80)==0 ) break;
    }

    FUNC_1(&VAR_2[VAR_1], (u64*)&VAR_3);
    VAR_0->iRowid -= VAR_3;
    VAR_0->iLeafPgno--;


    for(VAR_5=VAR_1-1; VAR_5>=VAR_0->iFirstOff && VAR_2[VAR_5]==0x00; VAR_5--){
      VAR_6++;
    }
    if( VAR_5>=VAR_0->iFirstOff && (VAR_2[VAR_5] & 0x80) ){



      int VAR_7 = 0;
      if( (VAR_5-8)>=VAR_0->iFirstOff ){
        int VAR_8;
        for(VAR_8=1; VAR_8<=8 && (VAR_2[VAR_5-VAR_8] & 0x80); VAR_8++);
        VAR_7 = (VAR_8>8);
      }
      if( VAR_7==0 ) VAR_6--;
    }
    VAR_0->iLeafPgno -= VAR_6;
    VAR_0->iOff = VAR_1 - VAR_6;
  }

  return VAR_0->bEof;
}

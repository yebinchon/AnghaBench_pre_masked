
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ eDetail; } ;
struct TYPE_6__ {int iSzPoslist; int nData; int bDel; scalar_t__ bContent; } ;
typedef TYPE_1__ Fts5HashEntry ;
typedef TYPE_2__ Fts5Hash ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int) ;

__attribute__((used)) static int FUNC_4(
  Fts5Hash *VAR_1,
  Fts5HashEntry *VAR_2,
  Fts5HashEntry *VAR_3
){
  int VAR_4 = 0;
  if( VAR_2->iSzPoslist ){
    u8 *VAR_5 = VAR_3 ? (u8*)VAR_3 : (u8*)VAR_2;
    int VAR_6 = VAR_2->nData;
    if( VAR_1->eDetail==VAR_0 ){
      FUNC_0( VAR_6==VAR_2->iSzPoslist );
      if( VAR_2->bDel ){
        VAR_5[VAR_6++] = 0x00;
        if( VAR_2->bContent ){
          VAR_5[VAR_6++] = 0x00;
        }
      }
    }else{
      int VAR_7 = (VAR_6 - VAR_2->iSzPoslist - 1);
      int VAR_8 = VAR_7*2 + VAR_2->bDel;

      FUNC_0( VAR_2->bDel==0 || VAR_2->bDel==1 );
      if( VAR_8<=127 ){
        VAR_5[VAR_2->iSzPoslist] = (u8)VAR_8;
      }else{
        int VAR_9 = FUNC_2((u32)VAR_8);
        FUNC_1(&VAR_5[VAR_2->iSzPoslist + VAR_9], &VAR_5[VAR_2->iSzPoslist + 1], VAR_7);
        FUNC_3(&VAR_5[VAR_2->iSzPoslist], VAR_8);
        VAR_6 += (VAR_9-1);
      }
    }

    VAR_4 = VAR_6 - VAR_2->nData;
    if( VAR_3==0 ){
      VAR_2->iSzPoslist = 0;
      VAR_2->bDel = 0;
      VAR_2->bContent = 0;
      VAR_2->nData = VAR_6;
    }
  }
  return VAR_4;
}

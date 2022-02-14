
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_int64 ;
typedef scalar_t__ i64 ;
typedef void* i16 ;
struct TYPE_11__ {scalar_t__ eDetail; int nSlot; int nEntry; int* pnByte; TYPE_1__** aSlot; } ;
struct TYPE_10__ {int nKey; int nAlloc; int nData; scalar_t__ iRowid; size_t iSzPoslist; int iCol; int iPos; int bContent; int bDel; struct TYPE_10__* pHashNext; } ;
typedef TYPE_1__ Fts5HashEntry ;
typedef TYPE_2__ Fts5Hash ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 unsigned int FUNC_3 (int,int*,int) ;
 unsigned int FUNC_4 (int,int,int const*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_9 (int*,int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;

int FUNC_12(
  Fts5Hash *VAR_4,
  i64 VAR_5,
  int VAR_6,
  int VAR_7,
  char VAR_8,
  const char *VAR_9, int VAR_10
){
  unsigned int VAR_11;
  Fts5HashEntry *VAR_12;
  u8 *VAR_13;
  int VAR_14 = 0;
  int VAR_15;

  VAR_15 = (VAR_4->eDetail==VAR_0);


  VAR_11 = FUNC_4(VAR_4->nSlot, (u8)VAR_8, (const u8*)VAR_9, VAR_10);
  for(VAR_12=VAR_4->aSlot[VAR_11]; VAR_12; VAR_12=VAR_12->pHashNext){
    char *VAR_16 = FUNC_1(VAR_12);
    if( VAR_16[0]==VAR_8
     && VAR_12->nKey==VAR_10
     && FUNC_6(&VAR_16[1], VAR_9, VAR_10)==0
    ){
      break;
    }
  }


  if( VAR_12==0 ){

    char *VAR_17;
    sqlite3_int64 VAR_18 = sizeof(Fts5HashEntry) + (VAR_10+1) + 1 + 64;
    if( VAR_18<128 ) VAR_18 = 128;


    if( (VAR_4->nEntry*2)>=VAR_4->nSlot ){
      int VAR_19 = FUNC_5(VAR_4);
      if( VAR_19!=VAR_3 ) return VAR_19;
      VAR_11 = FUNC_4(VAR_4->nSlot, (u8)VAR_8, (const u8*)VAR_9, VAR_10);
    }


    VAR_12 = (Fts5HashEntry*)FUNC_10(VAR_18);
    if( !VAR_12 ) return VAR_2;
    FUNC_8(VAR_12, 0, sizeof(Fts5HashEntry));
    VAR_12->nAlloc = (int)VAR_18;
    VAR_17 = FUNC_1(VAR_12);
    VAR_17[0] = VAR_8;
    FUNC_7(&VAR_17[1], VAR_9, VAR_10);
    FUNC_0( VAR_11==FUNC_3(VAR_4->nSlot, (u8*)VAR_17, VAR_10+1) );
    VAR_12->nKey = VAR_10;
    VAR_17[VAR_10+1] = '\0';
    VAR_12->nData = VAR_10+1 + 1 + sizeof(Fts5HashEntry);
    VAR_12->pHashNext = VAR_4->aSlot[VAR_11];
    VAR_4->aSlot[VAR_11] = VAR_12;
    VAR_4->nEntry++;


    VAR_12->nData += FUNC_9(&((u8*)VAR_12)[VAR_12->nData], VAR_5);
    VAR_12->iRowid = VAR_5;

    VAR_12->iSzPoslist = VAR_12->nData;
    if( VAR_4->eDetail!=VAR_1 ){
      VAR_12->nData += 1;
      VAR_12->iCol = (VAR_4->eDetail==VAR_0 ? 0 : -1);
    }

    VAR_14 += VAR_12->nData;
  }else{
    if( (VAR_12->nAlloc - VAR_12->nData) < (9 + 4 + 1 + 3 + 5) ){
      sqlite3_int64 VAR_20 = VAR_12->nAlloc * 2;
      Fts5HashEntry *VAR_21;
      Fts5HashEntry **VAR_22;
      VAR_21 = (Fts5HashEntry*)FUNC_11(VAR_12, VAR_20);
      if( VAR_21==0 ) return VAR_2;
      VAR_21->nAlloc = (int)VAR_20;
      for(VAR_22=&VAR_4->aSlot[VAR_11]; *VAR_22!=VAR_12; VAR_22=&(*VAR_22)->pHashNext);
      *VAR_22 = VAR_21;
      VAR_12 = VAR_21;
    }
    VAR_14 -= VAR_12->nData;
  }
  FUNC_0( (VAR_12->nAlloc - VAR_12->nData) >= (9 + 4 + 1 + 3 + 5) );

  VAR_13 = (u8*)VAR_12;



  if( VAR_5!=VAR_12->iRowid ){
    FUNC_2(VAR_4, VAR_12, 0);
    VAR_12->nData += FUNC_9(&VAR_13[VAR_12->nData], VAR_5 - VAR_12->iRowid);
    VAR_12->iRowid = VAR_5;
    VAR_15 = 1;
    VAR_12->iSzPoslist = VAR_12->nData;
    if( VAR_4->eDetail!=VAR_1 ){
      VAR_12->nData += 1;
      VAR_12->iCol = (VAR_4->eDetail==VAR_0 ? 0 : -1);
      VAR_12->iPos = 0;
    }
  }

  if( VAR_6>=0 ){
    if( VAR_4->eDetail==VAR_1 ){
      VAR_12->bContent = 1;
    }else{

      FUNC_0( VAR_6>=VAR_12->iCol );
      if( VAR_6!=VAR_12->iCol ){
        if( VAR_4->eDetail==VAR_0 ){
          VAR_13[VAR_12->nData++] = 0x01;
          VAR_12->nData += FUNC_9(&VAR_13[VAR_12->nData], VAR_6);
          VAR_12->iCol = (i16)VAR_6;
          VAR_12->iPos = 0;
        }else{
          VAR_15 = 1;
          VAR_12->iCol = (i16)(VAR_7 = VAR_6);
        }
      }


      if( VAR_15 ){
        VAR_12->nData += FUNC_9(&VAR_13[VAR_12->nData], VAR_7 - VAR_12->iPos + 2);
        VAR_12->iPos = VAR_7;
      }
    }
  }else{

    VAR_12->bDel = 1;
  }

  VAR_14 += VAR_12->nData;
  *VAR_4->pnByte += VAR_14;
  return VAR_3;
}

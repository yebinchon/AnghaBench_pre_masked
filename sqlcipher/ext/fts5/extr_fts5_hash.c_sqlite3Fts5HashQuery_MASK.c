
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {TYPE_1__** aSlot; int nSlot; } ;
struct TYPE_8__ {int nKey; int nData; struct TYPE_8__* pHashNext; } ;
typedef TYPE_1__ Fts5HashEntry ;
typedef TYPE_2__ Fts5Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 unsigned int FUNC_3 (int ,int const*,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int *,int *,int) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char*) ;

int FUNC_8(
  Fts5Hash *VAR_2,
  int VAR_3,
  const char *VAR_4, int VAR_5,
  void **VAR_6,
  int *VAR_7
){
  unsigned int VAR_8 = FUNC_3(VAR_2->nSlot, (const u8*)VAR_4, VAR_5);
  char *VAR_9 = 0;
  Fts5HashEntry *VAR_10;

  for(VAR_10=VAR_2->aSlot[VAR_8]; VAR_10; VAR_10=VAR_10->pHashNext){
    VAR_9 = FUNC_1(VAR_10);
    FUNC_0( VAR_10->nKey+1==(int)FUNC_7(VAR_9) );
    if( VAR_5==VAR_10->nKey+1 && FUNC_4(VAR_9, VAR_4, VAR_5)==0 ) break;
  }

  if( VAR_10 ){
    int VAR_11 = sizeof(Fts5HashEntry) + VAR_5 + 1;
    int VAR_12 = VAR_10->nData - VAR_11;
    u8 *VAR_13 = (u8*)(*VAR_6 = FUNC_6(VAR_3 + VAR_12 + 10));
    if( VAR_13 ){
      Fts5HashEntry *VAR_14 = (Fts5HashEntry*)&VAR_13[VAR_3-VAR_11];
      FUNC_5(&VAR_13[VAR_3], &((u8*)VAR_10)[VAR_11], VAR_12);
      VAR_12 += FUNC_2(VAR_2, VAR_10, VAR_14);
      *VAR_7 = VAR_12;
    }else{
      *VAR_7 = 0;
      return VAR_0;
    }
  }else{
    *VAR_6 = 0;
    *VAR_7 = 0;
  }

  return VAR_1;
}

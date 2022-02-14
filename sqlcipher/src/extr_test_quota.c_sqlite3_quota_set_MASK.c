
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sqlite3_int64 ;
struct TYPE_5__ {char* zPattern; void (* xCallback ) (char const*,scalar_t__*,scalar_t__,void*) ;void (* xDestroy ) (void*) ;void* pArg; scalar_t__ iLimit; struct TYPE_5__** ppPrev; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ quotaGroup ;
struct TYPE_6__ {TYPE_1__* pGroup; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;
 void FUNC_8 (void*) ;

int FUNC_9(
  const char *VAR_3,
  sqlite3_int64 VAR_4,
  void (*VAR_5)(
     const char *VAR_6,
     sqlite3_int64 *VAR_7,
     sqlite3_int64 VAR_8,
     void *VAR_9
  ),
  void *VAR_10,
  void (*VAR_11)(void*)
){
  quotaGroup *VAR_12;
  FUNC_2();
  VAR_12 = VAR_2.pGroup;
  while( VAR_12 && FUNC_6(VAR_12->zPattern, VAR_3)!=0 ){
    VAR_12 = VAR_12->pNext;
  }
  if( VAR_12==0 ){
    int VAR_13 = (int)(FUNC_7(VAR_3) & 0x3fffffff);
    if( VAR_4<=0 ){
      FUNC_4();
      return VAR_1;
    }
    VAR_12 = (quotaGroup *)FUNC_5( sizeof(*VAR_12) + VAR_13 + 1 );
    if( VAR_12==0 ){
      FUNC_4();
      return VAR_0;
    }
    FUNC_1(VAR_12, 0, sizeof(*VAR_12));
    VAR_12->zPattern = (char*)&VAR_12[1];
    FUNC_0((char *)VAR_12->zPattern, VAR_3, VAR_13+1);
    if( VAR_2.pGroup ) VAR_2.pGroup->ppPrev = &VAR_12->pNext;
    VAR_12->pNext = VAR_2.pGroup;
    VAR_12->ppPrev = &VAR_2.pGroup;
    VAR_2.pGroup = VAR_12;
  }
  VAR_12->iLimit = VAR_4;
  VAR_12->xCallback = VAR_5;
  if( VAR_12->xDestroy && VAR_12->pArg!=VAR_10 ){
    VAR_12->xDestroy(VAR_12->pArg);
  }
  VAR_12->pArg = VAR_10;
  VAR_12->xDestroy = VAR_11;
  FUNC_3(VAR_12);
  FUNC_4();
  return VAR_1;
}

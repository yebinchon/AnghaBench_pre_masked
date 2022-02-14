
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pFirst; TYPE_1__** aHash; } ;
struct TYPE_5__ {char const* zKey; char* zVal; struct TYPE_5__* pNext; struct TYPE_5__* pHashNext; } ;
typedef TYPE_1__ IdxHashEntry ;
typedef TYPE_2__ IdxHash ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int) ;
 TYPE_1__* FUNC_3 (int*,int) ;
 scalar_t__ FUNC_4 (char const*,char const*,int) ;
 int FUNC_5 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_6(
  int *VAR_0,
  IdxHash *VAR_1,
  const char *VAR_2,
  const char *VAR_3
){
  int VAR_4 = FUNC_0(VAR_2);
  int VAR_5 = FUNC_2(VAR_2, VAR_4);
  int VAR_6 = (VAR_3 ? FUNC_0(VAR_3) : 0);
  IdxHashEntry *VAR_7;
  FUNC_1( VAR_5>=0 );
  for(VAR_7=VAR_1->aHash[VAR_5]; VAR_7; VAR_7=VAR_7->pHashNext){
    if( FUNC_0(VAR_7->zKey)==VAR_4 && 0==FUNC_4(VAR_7->zKey, VAR_2, VAR_4) ){
      return 1;
    }
  }
  VAR_7 = FUNC_3(VAR_0, sizeof(IdxHashEntry) + VAR_4+1 + VAR_6+1);
  if( VAR_7 ){
    VAR_7->zKey = (char*)&VAR_7[1];
    FUNC_5(VAR_7->zKey, VAR_2, VAR_4);
    if( VAR_3 ){
      VAR_7->zVal = &VAR_7->zKey[VAR_4+1];
      FUNC_5(VAR_7->zVal, VAR_3, VAR_6);
    }
    VAR_7->pHashNext = VAR_1->aHash[VAR_5];
    VAR_1->aHash[VAR_5] = VAR_7;

    VAR_7->pNext = VAR_1->pFirst;
    VAR_1->pFirst = VAR_7;
  }
  return 0;
}

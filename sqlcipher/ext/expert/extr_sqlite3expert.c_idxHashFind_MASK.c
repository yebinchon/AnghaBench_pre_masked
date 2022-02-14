
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** aHash; } ;
struct TYPE_5__ {char const* zKey; struct TYPE_5__* pHashNext; } ;
typedef TYPE_1__ IdxHashEntry ;
typedef TYPE_2__ IdxHash ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const*,char const*,int) ;

__attribute__((used)) static IdxHashEntry *FUNC_4(IdxHash *VAR_0, const char *VAR_1, int VAR_2){
  int VAR_3;
  IdxHashEntry *VAR_4;
  if( VAR_2<0 ) VAR_2 = FUNC_0(VAR_1);
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  FUNC_1( VAR_3>=0 );
  for(VAR_4=VAR_0->aHash[VAR_3]; VAR_4; VAR_4=VAR_4->pHashNext){
    if( FUNC_0(VAR_4->zKey)==VAR_2 && 0==FUNC_3(VAR_4->zKey, VAR_1, VAR_2) ){
      return VAR_4;
    }
  }
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pTok; TYPE_1__* pDfltTok; } ;
struct TYPE_5__ {int zName; struct TYPE_5__* pNext; } ;
typedef TYPE_1__ Fts5TokenizerModule ;
typedef TYPE_2__ Fts5Global ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static Fts5TokenizerModule *FUNC_1(
  Fts5Global *VAR_0,
  const char *VAR_1
){
  Fts5TokenizerModule *VAR_2 = 0;

  if( VAR_1==0 ){
    VAR_2 = VAR_0->pDfltTok;
  }else{
    for(VAR_2=VAR_0->pTok; VAR_2; VAR_2=VAR_2->pNext){
      if( FUNC_0(VAR_1, VAR_2->zName)==0 ) break;
    }
  }

  return VAR_2;
}

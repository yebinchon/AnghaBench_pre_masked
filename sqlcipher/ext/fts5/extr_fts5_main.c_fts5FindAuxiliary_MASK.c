
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int zFunc; struct TYPE_8__* pNext; } ;
struct TYPE_7__ {TYPE_1__* pGlobal; } ;
struct TYPE_6__ {TYPE_3__* pAux; } ;
typedef TYPE_2__ Fts5FullTable ;
typedef TYPE_3__ Fts5Auxiliary ;


 scalar_t__ FUNC_0 (char const*,int ) ;

__attribute__((used)) static Fts5Auxiliary *FUNC_1(Fts5FullTable *VAR_0, const char *VAR_1){
  Fts5Auxiliary *VAR_2;

  for(VAR_2=VAR_0->pGlobal->pAux; VAR_2; VAR_2=VAR_2->pNext){
    if( FUNC_0(VAR_1, VAR_2->zFunc)==0 ) return VAR_2;
  }


  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pFirstEntry; TYPE_2__* pLastEntry; } ;
typedef TYPE_1__ ZipfileTab ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ ZipfileEntry ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(
  ZipfileTab *VAR_0,
  ZipfileEntry *VAR_1,
  ZipfileEntry *VAR_2
){
  FUNC_0( (VAR_0->pFirstEntry==0)==(VAR_0->pLastEntry==0) );
  FUNC_0( VAR_2->pNext==0 );
  if( VAR_1==0 ){
    if( VAR_0->pFirstEntry==0 ){
      VAR_0->pFirstEntry = VAR_0->pLastEntry = VAR_2;
    }else{
      FUNC_0( VAR_0->pLastEntry->pNext==0 );
      VAR_0->pLastEntry->pNext = VAR_2;
      VAR_0->pLastEntry = VAR_2;
    }
  }else{
    ZipfileEntry **VAR_3;
    for(VAR_3=&VAR_0->pFirstEntry; *VAR_3!=VAR_1; VAR_3=&((*VAR_3)->pNext));
    VAR_2->pNext = VAR_1;
    *VAR_3 = VAR_2;
  }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* pFirstEntry; } ;
typedef TYPE_1__ ZipfileTab ;
struct TYPE_7__ {struct TYPE_7__* pNext; } ;
typedef TYPE_2__ ZipfileEntry ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(ZipfileTab *VAR_0, ZipfileEntry *VAR_1){
  if( VAR_1 ){
    ZipfileEntry **VAR_2;
    for(VAR_2=&VAR_0->pFirstEntry; (*VAR_2)!=VAR_1; VAR_2=&((*VAR_2)->pNext));
    *VAR_2 = (*VAR_2)->pNext;
    FUNC_0(VAR_1);
  }
}

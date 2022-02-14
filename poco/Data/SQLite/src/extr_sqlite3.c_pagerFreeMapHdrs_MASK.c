
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* pMmapFreelist; } ;
struct TYPE_5__ {struct TYPE_5__* pDirty; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(Pager *VAR_0){
  PgHdr *VAR_1;
  PgHdr *VAR_2;
  for(VAR_1=VAR_0->pMmapFreelist; VAR_1; VAR_1=VAR_2){
    VAR_2 = VAR_1->pDirty;
    FUNC_0(VAR_1);
  }
}

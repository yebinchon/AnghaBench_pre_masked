
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int i64 ;
struct TYPE_6__ {TYPE_1__* pDirty; } ;
struct TYPE_5__ {struct TYPE_5__* pDirtyNext; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ PCache ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(PCache *VAR_0){
  PgHdr *VAR_1;
  int VAR_2 = 0;
  int VAR_3 = FUNC_0(VAR_0);
  for(VAR_1=VAR_0->pDirty; VAR_1; VAR_1=VAR_1->pDirtyNext) VAR_2++;
  return VAR_3 ? (int)(((i64)VAR_2 * 100) / VAR_3) : 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nRef; TYPE_1__* pCache; } ;
struct TYPE_5__ {int nRefSum; } ;
typedef TYPE_2__ PgHdr ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(PgHdr *VAR_0){
  FUNC_0(VAR_0->nRef>0);
  FUNC_0( FUNC_1(VAR_0) );
  VAR_0->nRef++;
  VAR_0->pCache->nRefSum++;
}

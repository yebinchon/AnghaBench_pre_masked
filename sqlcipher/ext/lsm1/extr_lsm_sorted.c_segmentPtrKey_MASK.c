
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nKey; void* pKey; int pPg; } ;
typedef TYPE_1__ SegmentPtr ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(SegmentPtr *VAR_0, void **VAR_1, int *VAR_2){
  FUNC_0( VAR_0->pPg );
  *VAR_1 = VAR_0->pKey;
  *VAR_2 = VAR_0->nKey;
}

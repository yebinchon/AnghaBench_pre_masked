
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nRef; void* pData; TYPE_1__* pPager; } ;
struct TYPE_4__ {scalar_t__ memDb; } ;
typedef TYPE_2__ DbPage ;


 int FUNC_0 (int) ;

void *FUNC_1(DbPage *VAR_0){
  FUNC_0( VAR_0->nRef>0 || VAR_0->pPager->memDb );
  return VAR_0->pData;
}

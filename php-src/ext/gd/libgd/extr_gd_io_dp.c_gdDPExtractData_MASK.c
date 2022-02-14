
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gdIOCtx {int dummy; } ;
struct TYPE_4__ {int logicalSize; scalar_t__ realSize; int * data; scalar_t__ freeOK; scalar_t__ dataGood; } ;
typedef TYPE_1__ dynamicPtr ;
struct TYPE_5__ {TYPE_1__* dp; } ;
typedef TYPE_2__ dpIOCtx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;

void * FUNC_2 (struct gdIOCtx *VAR_0, int *VAR_1)
{
 dynamicPtr *VAR_2;
 dpIOCtx *VAR_3;
 void *VAR_4;

 VAR_3 = (dpIOCtx *) VAR_0;
 VAR_2 = VAR_3->dp;


 if (VAR_2->dataGood) {
  FUNC_1 (VAR_2);
  *VAR_1 = VAR_2->logicalSize;
  VAR_4 = VAR_2->data;
 } else {
  *VAR_1 = 0;
  VAR_4 = ((void*)0);
  if (VAR_2->data != ((void*)0) && VAR_2->freeOK) {
   FUNC_0(VAR_2->data);
  }
 }

 VAR_2->data = ((void*)0);
 VAR_2->realSize = 0;
 VAR_2->logicalSize = 0;

 return VAR_4;
}

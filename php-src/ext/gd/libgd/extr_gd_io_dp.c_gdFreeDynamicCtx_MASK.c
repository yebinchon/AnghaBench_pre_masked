
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdIOCtx {scalar_t__ logicalSize; scalar_t__ realSize; } ;
typedef struct gdIOCtx dynamicPtr ;
struct TYPE_2__ {struct gdIOCtx* dp; } ;
typedef TYPE_1__ dpIOCtx ;


 int FUNC_0 (struct gdIOCtx*) ;

__attribute__((used)) static void FUNC_1 (struct gdIOCtx *VAR_0)
{
 dynamicPtr *VAR_1;
 dpIOCtx *VAR_2;

 VAR_2 = (dpIOCtx *) VAR_0;
 VAR_1 = VAR_2->dp;

 FUNC_0(VAR_0);

 VAR_1->realSize = 0;
 VAR_1->logicalSize = 0;

 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdIOCtx {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dp; } ;
typedef TYPE_2__ dpIOCtx ;
struct TYPE_3__ {long pos; } ;



__attribute__((used)) static long FUNC_0 (struct gdIOCtx *VAR_0)
{
 dpIOCtx *VAR_1;

 VAR_1 = (dpIOCtx *) VAR_0;

 return (VAR_1->dp->pos);
}

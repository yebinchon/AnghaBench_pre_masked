
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gdIOCtx {int dummy; } ;
struct TYPE_3__ {TYPE_2__* dp; } ;
typedef TYPE_1__ dpIOCtx ;
struct TYPE_4__ {scalar_t__ dataGood; } ;


 int FUNC_0 (TYPE_2__*,void const*,int) ;

__attribute__((used)) static int
FUNC_1 (struct gdIOCtx *VAR_0, const void *VAR_1, int VAR_2)
{
  dpIOCtx *VAR_3;
  VAR_3 = (dpIOCtx *) VAR_0;

  FUNC_0 (VAR_3->dp, VAR_1, VAR_2);

  if (VAR_3->dp->dataGood)
    {
      return VAR_2;
    }
  else
    {
      return -1;
    };

}

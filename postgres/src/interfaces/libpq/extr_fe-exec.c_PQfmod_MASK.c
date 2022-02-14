
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* attDescs; } ;
struct TYPE_5__ {int atttypmod; } ;
typedef TYPE_2__ PGresult ;


 int FUNC_0 (TYPE_2__ const*,int) ;

int
FUNC_1(const PGresult *VAR_0, int VAR_1)
{
 if (!FUNC_0(VAR_0, VAR_1))
  return 0;
 if (VAR_0->attDescs)
  return VAR_0->attDescs[VAR_1].atttypmod;
 else
  return 0;
}

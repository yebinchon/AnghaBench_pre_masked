
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* attDescs; } ;
struct TYPE_5__ {int tableid; } ;
typedef TYPE_2__ PGresult ;
typedef int Oid ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const*,int) ;

Oid
FUNC_1(const PGresult *VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_2))
  return VAR_0;
 if (VAR_1->attDescs)
  return VAR_1->attDescs[VAR_2].tableid;
 else
  return VAR_0;
}

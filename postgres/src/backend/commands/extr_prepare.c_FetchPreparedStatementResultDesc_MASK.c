
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * TupleDesc ;
struct TYPE_5__ {TYPE_1__* plansource; } ;
struct TYPE_4__ {scalar_t__ resultDesc; int fixed_result; } ;
typedef TYPE_2__ PreparedStatement ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (scalar_t__) ;

TupleDesc
FUNC_2(PreparedStatement *VAR_0)
{




 FUNC_0(VAR_0->plansource->fixed_result);
 if (VAR_0->plansource->resultDesc)
  return FUNC_1(VAR_0->plansource->resultDesc);
 else
  return ((void*)0);
}

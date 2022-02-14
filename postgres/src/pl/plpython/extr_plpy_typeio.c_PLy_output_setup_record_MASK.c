
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_4__* TupleDesc ;
struct TYPE_11__ {TYPE_3__* recdesc; } ;
struct TYPE_12__ {TYPE_1__ tuple; } ;
struct TYPE_15__ {scalar_t__ typoid; TYPE_2__ u; int typmod; } ;
struct TYPE_14__ {scalar_t__ tdtypeid; int tdtypmod; } ;
struct TYPE_13__ {int tdtypmod; } ;
typedef int PLyProcedure ;
typedef TYPE_5__ PLyObToDatum ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int *) ;
 scalar_t__ VAR_0 ;

void
FUNC_3(PLyObToDatum *VAR_1, TupleDesc VAR_2, PLyProcedure *VAR_3)
{

 FUNC_0(VAR_1->typoid == VAR_0);
 FUNC_0(VAR_2->tdtypeid == VAR_0);






 FUNC_1(VAR_2);






 VAR_1->typmod = VAR_2->tdtypmod;
 if (VAR_1->u.tuple.recdesc &&
  VAR_1->u.tuple.recdesc->tdtypmod != VAR_1->typmod)
  VAR_1->u.tuple.recdesc = ((void*)0);


 FUNC_2(VAR_1, VAR_2, VAR_3);
}

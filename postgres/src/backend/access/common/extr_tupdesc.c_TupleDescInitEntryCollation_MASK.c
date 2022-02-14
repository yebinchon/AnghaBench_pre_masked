
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int attcollation; } ;
struct TYPE_6__ {int natts; } ;
typedef int Oid ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,int) ;

void
FUNC_3(TupleDesc VAR_0,
       AttrNumber VAR_1,
       Oid VAR_2)
{



 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_1 >= 1);
 FUNC_0(VAR_1 <= VAR_0->natts);

 FUNC_2(VAR_0, VAR_1 - 1)->attcollation = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_6__ {scalar_t__ tdtypeid; scalar_t__ tdtypmod; } ;
struct TYPE_5__ {scalar_t__ base_typid; scalar_t__ base_typmod; TYPE_3__* tupdesc; } ;
typedef int MemoryContext ;
typedef TYPE_1__ CompositeIOData ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(CompositeIOData *VAR_0, MemoryContext VAR_1)
{
 if (!VAR_0->tupdesc ||
  VAR_0->tupdesc->tdtypeid != VAR_0->base_typid ||
  VAR_0->tupdesc->tdtypmod != VAR_0->base_typmod)
 {
  TupleDesc VAR_2 = FUNC_4(VAR_0->base_typid,
              VAR_0->base_typmod);
  MemoryContext VAR_3;

  if (VAR_0->tupdesc)
   FUNC_1(VAR_0->tupdesc);


  VAR_3 = FUNC_2(VAR_1);
  VAR_0->tupdesc = FUNC_0(VAR_2);
  FUNC_2(VAR_3);

  FUNC_3(VAR_2);
 }
}

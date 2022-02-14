
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_4__ {scalar_t__ sort_out; int * sort_slot; scalar_t__ sort_in; } ;
typedef TYPE_1__ AggState ;


 int FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int,int,int *,int *) ;
 int FUNC_5 (scalar_t__,int *) ;

__attribute__((used)) static TupleTableSlot *
FUNC_6(AggState *VAR_0)
{
 TupleTableSlot *VAR_1;

 if (VAR_0->sort_in)
 {

  FUNC_0();
  if (!FUNC_4(VAR_0->sort_in, 1, 0,
         VAR_0->sort_slot, ((void*)0)))
   return ((void*)0);
  VAR_1 = VAR_0->sort_slot;
 }
 else
  VAR_1 = FUNC_1(FUNC_3(VAR_0));

 if (!FUNC_2(VAR_1) && VAR_0->sort_out)
  FUNC_5(VAR_0->sort_out, VAR_1);

 return VAR_1;
}

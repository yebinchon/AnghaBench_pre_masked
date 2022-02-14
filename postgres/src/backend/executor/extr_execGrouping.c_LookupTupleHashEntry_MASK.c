
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef TYPE_1__* TupleHashTable ;
struct TYPE_9__ {int firstTuple; int * additional; } ;
typedef TYPE_2__ TupleHashEntryData ;
typedef TYPE_2__* TupleHashEntry ;
struct TYPE_8__ {int hashtab; int tablecxt; int tab_eq_func; int cur_eq_func; int tab_hash_funcs; int in_hash_funcs; int * inputslot; int tempcxt; } ;
typedef int * MinimalTuple ;
typedef int MemoryContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,int *,int*) ;
 TYPE_2__* FUNC_3 (int ,int *) ;

TupleHashEntry
FUNC_4(TupleHashTable VAR_0, TupleTableSlot *VAR_1,
      bool *VAR_2)
{
 TupleHashEntryData *VAR_3;
 MemoryContext VAR_4;
 bool VAR_5;
 MinimalTuple VAR_6;


 VAR_4 = FUNC_1(VAR_0->tempcxt);


 VAR_0->inputslot = VAR_1;
 VAR_0->in_hash_funcs = VAR_0->tab_hash_funcs;
 VAR_0->cur_eq_func = VAR_0->tab_eq_func;

 VAR_6 = ((void*)0);

 if (VAR_2)
 {
  VAR_3 = FUNC_2(VAR_0->hashtab, VAR_6, &VAR_5);

  if (VAR_5)
  {

   *VAR_2 = 0;
  }
  else
  {

   *VAR_2 = 1;

   VAR_3->additional = ((void*)0);
   FUNC_1(VAR_0->tablecxt);

   VAR_3->firstTuple = FUNC_0(VAR_1);
  }
 }
 else
 {
  VAR_3 = FUNC_3(VAR_0->hashtab, VAR_6);
 }

 FUNC_1(VAR_4);

 return VAR_3;
}

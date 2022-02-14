
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef TYPE_1__* TupleHashTable ;
typedef int TupleHashEntry ;
struct TYPE_3__ {int hashtab; int * cur_eq_func; int * in_hash_funcs; int * inputslot; int tempcxt; } ;
typedef int * MinimalTuple ;
typedef int MemoryContext ;
typedef int FmgrInfo ;
typedef int ExprState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

TupleHashEntry
FUNC_2(TupleHashTable VAR_0, TupleTableSlot *VAR_1,
       ExprState *VAR_2,
       FmgrInfo *VAR_3)
{
 TupleHashEntry VAR_4;
 MemoryContext VAR_5;
 MinimalTuple VAR_6;


 VAR_5 = FUNC_0(VAR_0->tempcxt);


 VAR_0->inputslot = VAR_1;
 VAR_0->in_hash_funcs = VAR_3;
 VAR_0->cur_eq_func = VAR_2;


 VAR_6 = ((void*)0);
 VAR_4 = FUNC_1(VAR_0->hashtab, VAR_6);
 FUNC_0(VAR_5);

 return VAR_4;
}

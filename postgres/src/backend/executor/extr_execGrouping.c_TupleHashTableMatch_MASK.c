
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tuplehash_hash {int private_data; } ;
typedef int TupleTableSlot ;
typedef TYPE_1__* TupleHashTable ;
struct TYPE_5__ {int * ecxt_outertuple; int * ecxt_innertuple; } ;
struct TYPE_4__ {int cur_eq_func; int * inputslot; int * tableslot; TYPE_2__* exprcontext; } ;
typedef int * MinimalTuple ;
typedef TYPE_2__ ExprContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int * const,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct tuplehash_hash *VAR_0, const MinimalTuple VAR_1, const MinimalTuple VAR_2)
{
 TupleTableSlot *VAR_3;
 TupleTableSlot *VAR_4;
 TupleHashTable VAR_5 = (TupleHashTable) VAR_0->private_data;
 ExprContext *VAR_6 = VAR_5->exprcontext;







 FUNC_0(VAR_1 != ((void*)0));
 VAR_3 = VAR_5->tableslot;
 FUNC_2(VAR_1, VAR_3, 0);
 FUNC_0(VAR_2 == ((void*)0));
 VAR_4 = VAR_5->inputslot;


 VAR_6->ecxt_innertuple = VAR_4;
 VAR_6->ecxt_outertuple = VAR_3;
 return !FUNC_1(VAR_5->cur_eq_func, VAR_6);
}

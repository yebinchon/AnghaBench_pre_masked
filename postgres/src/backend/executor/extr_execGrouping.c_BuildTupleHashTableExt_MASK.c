
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleHashTableData ;
typedef TYPE_1__* TupleHashTable ;
typedef int TupleHashEntryData ;
typedef int TupleDesc ;
struct TYPE_4__ {int numCols; long entrysize; int exprcontext; int tab_eq_func; int * tableslot; int hashtab; scalar_t__ hash_iv; int * cur_eq_func; int * in_hash_funcs; int * inputslot; scalar_t__ tempcxt; scalar_t__ tablecxt; int * tab_collations; int * tab_hash_funcs; int * keyColIdx; } ;
typedef long Size ;
typedef int PlanState ;
typedef int Oid ;
typedef scalar_t__ MemoryContext ;
typedef int FmgrInfo ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *,int,int *,int const*,int *,int *) ;
 int * FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 long FUNC_6 (long,long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,long,TYPE_1__*) ;
 long VAR_2 ;

TupleHashTable
FUNC_10(PlanState *VAR_3,
        TupleDesc VAR_4,
        int VAR_5, AttrNumber *VAR_6,
        const Oid *VAR_7,
        FmgrInfo *VAR_8,
        Oid *VAR_9,
        long VAR_10, Size VAR_11,
        MemoryContext VAR_12,
        MemoryContext VAR_13,
        MemoryContext VAR_14,
        bool VAR_15)
{
 TupleHashTable VAR_16;
 Size VAR_17 = sizeof(TupleHashEntryData) + VAR_11;
 MemoryContext VAR_18;
 bool VAR_19;

 FUNC_0(VAR_10 > 0);


 VAR_10 = FUNC_6(VAR_10, (long) ((VAR_2 * 1024L) / VAR_17));

 VAR_18 = FUNC_5(VAR_12);

 VAR_16 = (TupleHashTable) FUNC_8(sizeof(TupleHashTableData));

 VAR_16->numCols = VAR_5;
 VAR_16->keyColIdx = VAR_6;
 VAR_16->tab_hash_funcs = VAR_8;
 VAR_16->tab_collations = VAR_9;
 VAR_16->tablecxt = VAR_13;
 VAR_16->tempcxt = VAR_14;
 VAR_16->entrysize = VAR_17;
 VAR_16->tableslot = ((void*)0);
 VAR_16->inputslot = ((void*)0);
 VAR_16->in_hash_funcs = ((void*)0);
 VAR_16->cur_eq_func = ((void*)0);
 if (VAR_15)
  VAR_16->hash_iv = FUNC_7(VAR_0);
 else
  VAR_16->hash_iv = 0;

 VAR_16->hashtab = FUNC_9(VAR_12, VAR_10, VAR_16);





 VAR_16->tableslot = FUNC_4(FUNC_2(VAR_4),
             &VAR_1);
 VAR_19 = VAR_12 != VAR_13;



 VAR_16->tab_eq_func = FUNC_3(VAR_4, VAR_4,
             &VAR_1, &VAR_1,
             VAR_5,
             VAR_6, VAR_7, VAR_9,
             VAR_19 ? VAR_3 : ((void*)0));







 VAR_16->exprcontext = FUNC_1();

 FUNC_5(VAR_18);

 return VAR_16;
}

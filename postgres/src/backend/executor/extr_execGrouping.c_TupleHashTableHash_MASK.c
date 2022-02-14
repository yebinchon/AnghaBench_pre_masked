
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct tuplehash_hash {int private_data; } ;
typedef int TupleTableSlot ;
typedef TYPE_1__* TupleHashTable ;
struct TYPE_2__ {int numCols; int hash_iv; int * tab_collations; int * tab_hash_funcs; int * tableslot; int * in_hash_funcs; int * inputslot; int * keyColIdx; } ;
typedef int * MinimalTuple ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int * const,int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int*) ;

__attribute__((used)) static uint32
FUNC_5(struct tuplehash_hash *VAR_0, const MinimalTuple VAR_1)
{
 TupleHashTable VAR_2 = (TupleHashTable) VAR_0->private_data;
 int VAR_3 = VAR_2->numCols;
 AttrNumber *VAR_4 = VAR_2->keyColIdx;
 uint32 VAR_5 = VAR_2->hash_iv;
 TupleTableSlot *VAR_6;
 FmgrInfo *VAR_7;
 int VAR_8;

 if (VAR_1 == ((void*)0))
 {

  VAR_6 = VAR_2->inputslot;
  VAR_7 = VAR_2->in_hash_funcs;
 }
 else
 {






  VAR_6 = VAR_2->tableslot;
  FUNC_1(VAR_1, VAR_6, 0);
  VAR_7 = VAR_2->tab_hash_funcs;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
 {
  AttrNumber VAR_9 = VAR_4[VAR_8];
  Datum VAR_10;
  bool VAR_11;


  VAR_5 = (VAR_5 << 1) | ((VAR_5 & 0x80000000) ? 1 : 0);

  VAR_10 = FUNC_4(VAR_6, VAR_9, &VAR_11);

  if (!VAR_11)
  {
   uint32 VAR_12;

   VAR_12 = FUNC_0(FUNC_2(&VAR_7[VAR_8],
             VAR_2->tab_collations[VAR_8],
             VAR_10));
   VAR_5 ^= VAR_12;
  }
 }







 return FUNC_3(VAR_5);
}

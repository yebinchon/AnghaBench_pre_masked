
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32 ;
typedef int dsa_pointer ;
typedef int TupleTableSlot ;
struct TYPE_19__ {int * shared; } ;
struct TYPE_23__ {TYPE_3__* batches; TYPE_2__ buckets; TYPE_1__* parallel_state; } ;
struct TYPE_22__ {int hashvalue; } ;
struct TYPE_21__ {scalar_t__ t_len; } ;
struct TYPE_20__ {size_t preallocated; int ntuples; int inner_tuples; } ;
struct TYPE_18__ {int build_barrier; } ;
typedef TYPE_4__* MinimalTuple ;
typedef TYPE_5__* HashJoinTuple ;
typedef TYPE_6__* HashJoinTable ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *,int*) ;
 int FUNC_3 (TYPE_6__*,int ,int*,int*) ;
 int FUNC_4 (int *,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_5 (TYPE_6__*,scalar_t__,int *) ;
 int FUNC_6 (TYPE_6__*,int,size_t) ;
 int FUNC_7 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ,TYPE_4__*,scalar_t__) ;
 int FUNC_11 (int ,int *,TYPE_4__*) ;

void
FUNC_12(HashJoinTable VAR_2,
       TupleTableSlot *VAR_3,
       uint32 VAR_4)
{
 bool VAR_5;
 MinimalTuple VAR_6 = FUNC_2(VAR_3, &VAR_5);
 dsa_pointer VAR_7;
 int VAR_8;
 int VAR_9;

retry:
 FUNC_3(VAR_2, VAR_4, &VAR_8, &VAR_9);

 if (VAR_9 == 0)
 {
  HashJoinTuple VAR_10;


  FUNC_0(FUNC_1(&VAR_2->parallel_state->build_barrier) ==
      VAR_1);
  VAR_10 = FUNC_5(VAR_2,
              VAR_0 + VAR_6->t_len,
              &VAR_7);
  if (VAR_10 == ((void*)0))
   goto retry;


  VAR_10->hashvalue = VAR_4;
  FUNC_10(FUNC_7(VAR_10), VAR_6, VAR_6->t_len);


  FUNC_4(&VAR_2->buckets.shared[VAR_8],
          VAR_10, VAR_7);
 }
 else
 {
  size_t VAR_11 = FUNC_8(VAR_0 + VAR_6->t_len);

  FUNC_0(VAR_9 > 0);


  if (VAR_2->batches[VAR_9].preallocated < VAR_11)
  {
   if (!FUNC_6(VAR_2, VAR_9, VAR_11))
    goto retry;
  }

  FUNC_0(VAR_2->batches[VAR_9].preallocated >= VAR_11);
  VAR_2->batches[VAR_9].preallocated -= VAR_11;
  FUNC_11(VAR_2->batches[VAR_9].inner_tuples, &VAR_4,
      VAR_6);
 }
 ++VAR_2->batches[VAR_9].ntuples;

 if (VAR_5)
  FUNC_9(VAR_6);
}

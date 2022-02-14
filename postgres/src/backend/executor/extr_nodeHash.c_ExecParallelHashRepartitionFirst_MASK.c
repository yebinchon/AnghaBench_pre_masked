
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int dsa_pointer ;
struct TYPE_22__ {int * shared; } ;
struct TYPE_27__ {scalar_t__ nbatch; int area; TYPE_3__* batches; TYPE_2__ buckets; TYPE_1__* parallel_state; } ;
struct TYPE_26__ {int hashvalue; } ;
struct TYPE_25__ {size_t used; } ;
struct TYPE_24__ {scalar_t__ t_len; } ;
struct TYPE_23__ {size_t estimated_size; int ntuples; int old_ntuples; int inner_tuples; } ;
struct TYPE_21__ {scalar_t__ nbatch; } ;
typedef TYPE_4__* MinimalTuple ;
typedef TYPE_5__* HashMemoryChunk ;
typedef TYPE_6__* HashJoinTuple ;
typedef TYPE_7__* HashJoinTable ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_7__*,int ,int*,int*) ;
 TYPE_5__* FUNC_3 (TYPE_7__*,int *) ;
 int FUNC_4 (int *,TYPE_6__*,int ) ;
 TYPE_6__* FUNC_5 (TYPE_7__*,scalar_t__,int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 TYPE_4__* FUNC_7 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*,TYPE_4__*,scalar_t__) ;
 int FUNC_11 (int ,int *,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_12(HashJoinTable VAR_1)
{
 dsa_pointer VAR_2;
 HashMemoryChunk VAR_3;

 FUNC_0(VAR_1->nbatch == VAR_1->parallel_state->nbatch);

 while ((VAR_3 = FUNC_3(VAR_1, &VAR_2)))
 {
  size_t VAR_4 = 0;


  while (VAR_4 < VAR_3->used)
  {
   HashJoinTuple VAR_5 = (HashJoinTuple) (FUNC_6(VAR_3) + VAR_4);
   MinimalTuple VAR_6 = FUNC_7(VAR_5);
   HashJoinTuple VAR_7;
   dsa_pointer VAR_8;
   int VAR_9;
   int VAR_10;

   FUNC_2(VAR_1, VAR_5->hashvalue,
           &VAR_9, &VAR_10);

   FUNC_0(VAR_10 < VAR_1->nbatch);
   if (VAR_10 == 0)
   {

    VAR_7 =
     FUNC_5(VAR_1,
              VAR_0 + VAR_6->t_len,
              &VAR_8);
    VAR_7->hashvalue = VAR_5->hashvalue;
    FUNC_10(FUNC_7(VAR_7), VAR_6, VAR_6->t_len);
    FUNC_4(&VAR_1->buckets.shared[VAR_9],
            VAR_7, VAR_8);
   }
   else
   {
    size_t VAR_11 =
    FUNC_8(VAR_0 + VAR_6->t_len);


    VAR_1->batches[VAR_10].estimated_size += VAR_11;
    FUNC_11(VAR_1->batches[VAR_10].inner_tuples,
        &VAR_5->hashvalue, VAR_6);
   }


   ++VAR_1->batches[0].old_ntuples;
   ++VAR_1->batches[VAR_10].ntuples;

   VAR_4 += FUNC_8(VAR_0 +
       FUNC_7(VAR_5)->t_len);
  }


  FUNC_9(VAR_1->area, VAR_2);

  FUNC_1();
 }
}

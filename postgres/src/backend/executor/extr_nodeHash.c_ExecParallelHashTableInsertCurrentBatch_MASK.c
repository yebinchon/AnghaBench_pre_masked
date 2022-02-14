
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32 ;
typedef int dsa_pointer ;
typedef int TupleTableSlot ;
struct TYPE_14__ {int * shared; } ;
struct TYPE_17__ {int curbatch; TYPE_1__ buckets; } ;
struct TYPE_16__ {int hashvalue; } ;
struct TYPE_15__ {scalar_t__ t_len; } ;
typedef TYPE_2__* MinimalTuple ;
typedef TYPE_3__* HashJoinTuple ;
typedef TYPE_4__* HashJoinTable ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int *,int*) ;
 int FUNC_2 (TYPE_4__*,int ,int*,int*) ;
 int FUNC_3 (int *,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,scalar_t__,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_2__*,scalar_t__) ;

void
FUNC_9(HashJoinTable VAR_1,
          TupleTableSlot *VAR_2,
          uint32 VAR_3)
{
 bool VAR_4;
 MinimalTuple VAR_5 = FUNC_1(VAR_2, &VAR_4);
 HashJoinTuple VAR_6;
 dsa_pointer VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_2(VAR_1, VAR_3, &VAR_9, &VAR_8);
 FUNC_0(VAR_8 == VAR_1->curbatch);
 VAR_6 = FUNC_4(VAR_1,
             VAR_0 + VAR_5->t_len,
             &VAR_7);
 VAR_6->hashvalue = VAR_3;
 FUNC_8(FUNC_5(VAR_6), VAR_5, VAR_5->t_len);
 FUNC_6(FUNC_5(VAR_6));
 FUNC_3(&VAR_1->buckets.shared[VAR_9],
         VAR_6, VAR_7);

 if (VAR_4)
  FUNC_7(VAR_5);
}

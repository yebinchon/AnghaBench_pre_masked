
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32 ;
typedef int TupleTableSlot ;
struct TYPE_17__ {scalar_t__ spaceUsed; int spaceUsedSkew; scalar_t__ spacePeak; scalar_t__ spaceAllowedSkew; scalar_t__ spaceAllowed; TYPE_1__** skewBucket; int batchCxt; } ;
struct TYPE_14__ {TYPE_4__* unshared; } ;
struct TYPE_16__ {TYPE_2__ next; int hashvalue; } ;
struct TYPE_15__ {int t_len; } ;
struct TYPE_13__ {TYPE_4__* tuples; } ;
typedef TYPE_3__* MinimalTuple ;
typedef TYPE_4__* HashJoinTuple ;
typedef TYPE_5__* HashJoinTable ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int *,int*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_9(HashJoinTable VAR_1,
      TupleTableSlot *VAR_2,
      uint32 VAR_3,
      int VAR_4)
{
 bool VAR_5;
 MinimalTuple VAR_6 = FUNC_1(VAR_2, &VAR_5);
 HashJoinTuple VAR_7;
 int VAR_8;


 VAR_8 = VAR_0 + VAR_6->t_len;
 VAR_7 = (HashJoinTuple) FUNC_6(VAR_1->batchCxt,
               VAR_8);
 VAR_7->hashvalue = VAR_3;
 FUNC_8(FUNC_4(VAR_7), VAR_6, VAR_6->t_len);
 FUNC_5(FUNC_4(VAR_7));


 VAR_7->next.unshared = VAR_1->skewBucket[VAR_4]->tuples;
 VAR_1->skewBucket[VAR_4]->tuples = VAR_7;
 FUNC_0(VAR_7 != VAR_7->next.unshared);


 VAR_1->spaceUsed += VAR_8;
 VAR_1->spaceUsedSkew += VAR_8;
 if (VAR_1->spaceUsed > VAR_1->spacePeak)
  VAR_1->spacePeak = VAR_1->spaceUsed;
 while (VAR_1->spaceUsedSkew > VAR_1->spaceAllowedSkew)
  FUNC_3(VAR_1);


 if (VAR_1->spaceUsed > VAR_1->spaceAllowed)
  FUNC_2(VAR_1);

 if (VAR_5)
  FUNC_7(VAR_6);
}

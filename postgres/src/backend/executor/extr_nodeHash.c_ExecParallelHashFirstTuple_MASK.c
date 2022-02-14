
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsa_pointer ;
struct TYPE_4__ {int * shared; } ;
struct TYPE_5__ {int area; TYPE_1__ buckets; int parallel_state; } ;
typedef scalar_t__ HashJoinTuple ;
typedef TYPE_2__* HashJoinTable ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline HashJoinTuple
FUNC_3(HashJoinTable VAR_0, int VAR_1)
{
 HashJoinTuple VAR_2;
 dsa_pointer VAR_3;

 FUNC_0(VAR_0->parallel_state);
 VAR_3 = FUNC_2(&VAR_0->buckets.shared[VAR_1]);
 VAR_2 = (HashJoinTuple) FUNC_1(VAR_0->area, VAR_3);

 return VAR_2;
}

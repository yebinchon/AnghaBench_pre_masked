
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int area; int parallel_state; } ;
struct TYPE_7__ {int shared; } ;
struct TYPE_8__ {TYPE_1__ next; } ;
typedef TYPE_2__* HashJoinTuple ;
typedef TYPE_3__* HashJoinTable ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static inline HashJoinTuple
FUNC_2(HashJoinTable VAR_0, HashJoinTuple VAR_1)
{
 HashJoinTuple VAR_2;

 FUNC_0(VAR_0->parallel_state);
 VAR_2 = (HashJoinTuple) FUNC_1(VAR_0->area, VAR_1->next.shared);

 return VAR_2;
}

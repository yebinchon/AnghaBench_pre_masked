
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int dsa_pointer_atomic ;
typedef int dsa_pointer ;
struct TYPE_4__ {int shared; } ;
struct TYPE_5__ {TYPE_1__ next; } ;
typedef TYPE_2__* HashJoinTuple ;


 scalar_t__ FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(dsa_pointer_atomic *VAR_0,
        HashJoinTuple VAR_1,
        dsa_pointer VAR_2)
{
 for (;;)
 {
  VAR_1->next.shared = FUNC_1(VAR_0);
  if (FUNC_0(VAR_0,
            &VAR_1->next.shared,
            VAR_2))
   break;
 }
}

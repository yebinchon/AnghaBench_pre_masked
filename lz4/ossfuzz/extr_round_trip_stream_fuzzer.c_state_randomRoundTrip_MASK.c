
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int seed; } ;
typedef TYPE_1__ state_t ;
typedef int (* round_trip_t ) (TYPE_1__*) ;


 scalar_t__ FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(state_t* VAR_0, round_trip_t VAR_1,
                                  round_trip_t VAR_2)
{
    if (FUNC_0(&VAR_0->seed, 0, 1)) {
      VAR_1(VAR_0);
    } else {
      VAR_2(VAR_0);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* parallelSlot; } ;
struct TYPE_4__ {int pipeWrite; } ;
typedef TYPE_2__ ParallelState ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(ParallelState *VAR_0, int VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2) + 1;

 if (FUNC_1(VAR_0->parallelSlot[VAR_1].pipeWrite, VAR_2, VAR_3) != VAR_3)
 {
  FUNC_0("could not write to the communication channel: %m");
 }
}

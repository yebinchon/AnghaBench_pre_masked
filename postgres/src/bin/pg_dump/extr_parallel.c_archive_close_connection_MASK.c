
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pipeRevWrite; int pipeRevRead; TYPE_1__* AH; } ;
struct TYPE_6__ {int * AHX; scalar_t__ pstate; } ;
struct TYPE_5__ {int public; } ;
typedef TYPE_2__ ShutdownInformation ;
typedef TYPE_3__ ParallelSlot ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_0, void *VAR_1)
{
 ShutdownInformation *VAR_2 = (ShutdownInformation *) VAR_1;

 if (VAR_2->pstate)
 {

  ParallelSlot *VAR_3 = FUNC_1(VAR_2->pstate);

  if (!VAR_3)
  {




   FUNC_2(VAR_2->pstate);

   if (VAR_2->AHX)
    FUNC_0(VAR_2->AHX);
  }
  else
  {
   if (VAR_3->AH)
    FUNC_0(&(VAR_3->AH->public));





  }
 }
 else
 {

  if (VAR_2->AHX)
   FUNC_0(VAR_2->AHX);
 }
}

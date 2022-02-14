
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int location; int pstate; } ;
typedef TYPE_1__ ParseCallbackState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 ParseCallbackState *VAR_2 = (ParseCallbackState *) VAR_1;

 if (FUNC_0() != VAR_0)
  (void) FUNC_1(VAR_2->pstate, VAR_2->location);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmpin {TYPE_1__* user; int num_pg; } ;
struct TYPE_2__ {int locked_vm; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct mmpin *VAR_0)
{
 if (VAR_0->user) {
  FUNC_0(VAR_0->num_pg, &VAR_0->user->locked_vm);
  FUNC_1(VAR_0->user);
 }
}

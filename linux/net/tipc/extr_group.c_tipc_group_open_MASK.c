
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_member {TYPE_1__* group; int small_win; } ;
struct TYPE_2__ {int* open; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct tipc_member *VAR_0, bool *VAR_1)
{
 *VAR_1 = 0;
 if (FUNC_1(&VAR_0->small_win))
  return;
 FUNC_0(&VAR_0->small_win);
 *VAR_0->group->open = 1;
 *VAR_1 = 1;
}

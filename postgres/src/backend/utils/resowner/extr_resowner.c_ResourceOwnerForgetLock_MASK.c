
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlocks; int name; int ** locks; } ;
typedef TYPE_1__* ResourceOwner ;
typedef int LOCALLOCK ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *,int ) ;

void
FUNC_2(ResourceOwner VAR_2, LOCALLOCK *VAR_3)
{
 int VAR_4;

 if (VAR_2->nlocks > VAR_1)
  return;

 FUNC_0(VAR_2->nlocks > 0);
 for (VAR_4 = VAR_2->nlocks - 1; VAR_4 >= 0; VAR_4--)
 {
  if (VAR_3 == VAR_2->locks[VAR_4])
  {
   VAR_2->locks[VAR_4] = VAR_2->locks[VAR_2->nlocks - 1];
   VAR_2->nlocks--;
   return;
  }
 }
 FUNC_1(VAR_0, "lock reference %p is not owned by resource owner %s",
   VAR_3, VAR_2->name);
}

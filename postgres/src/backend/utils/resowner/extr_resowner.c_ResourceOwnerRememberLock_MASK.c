
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nlocks; int ** locks; } ;
typedef TYPE_1__* ResourceOwner ;
typedef int LOCALLOCK ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;

void
FUNC_1(ResourceOwner VAR_1, LOCALLOCK *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0));

 if (VAR_1->nlocks > VAR_0)
  return;

 if (VAR_1->nlocks < VAR_0)
  VAR_1->locks[VAR_1->nlocks] = VAR_2;
 else
 {

 }
 VAR_1->nlocks++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int catrefarr; } ;
typedef TYPE_1__* ResourceOwner ;
typedef int HeapTuple ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

void
FUNC_3(ResourceOwner VAR_1, HeapTuple VAR_2)
{
 if (!FUNC_1(&(VAR_1->catrefarr), FUNC_0(VAR_2)))
  FUNC_2(VAR_0, "catcache reference %p is not owned by resource owner %s",
    VAR_2, VAR_1->name);
}

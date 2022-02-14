
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int relrefarr; } ;
typedef TYPE_1__* ResourceOwner ;
typedef int Relation ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;

void
FUNC_4(ResourceOwner VAR_1, Relation VAR_2)
{
 if (!FUNC_2(&(VAR_1->relrefarr), FUNC_0(VAR_2)))
  FUNC_3(VAR_0, "relcache reference %s is not owned by resource owner %s",
    FUNC_1(VAR_2), VAR_1->name);
}

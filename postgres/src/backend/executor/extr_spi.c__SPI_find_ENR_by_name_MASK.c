
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * queryEnv; } ;
typedef int * EphemeralNamedRelation ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_1 (int *,char const*) ;

__attribute__((used)) static EphemeralNamedRelation
FUNC_2(const char *VAR_1)
{

 FUNC_0(VAR_1 != ((void*)0));


 if (VAR_0->queryEnv == ((void*)0))
  return ((void*)0);

 return FUNC_1(VAR_0->queryEnv, VAR_1);
}

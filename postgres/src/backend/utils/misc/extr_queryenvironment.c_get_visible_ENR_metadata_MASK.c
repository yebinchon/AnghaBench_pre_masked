
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md; } ;
typedef int QueryEnvironment ;
typedef int * EphemeralNamedRelationMetadata ;
typedef TYPE_1__* EphemeralNamedRelation ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,char const*) ;

EphemeralNamedRelationMetadata
FUNC_2(QueryEnvironment *VAR_0, const char *VAR_1)
{
 EphemeralNamedRelation VAR_2;

 FUNC_0(VAR_1 != ((void*)0));

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2)
  return &(VAR_2->md);

 return ((void*)0);
}

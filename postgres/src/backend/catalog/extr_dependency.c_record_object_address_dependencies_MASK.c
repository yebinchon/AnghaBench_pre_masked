
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numrefs; int refs; } ;
typedef TYPE_1__ ObjectAddresses ;
typedef int ObjectAddress ;
typedef int DependencyType ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const*,int ,int ,int ) ;

void
FUNC_2(const ObjectAddress *VAR_0,
           ObjectAddresses *VAR_1,
           DependencyType VAR_2)
{
 FUNC_0(VAR_1);
 FUNC_1(VAR_0,
          VAR_1->refs, VAR_1->numrefs,
          VAR_2);
}

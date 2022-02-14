
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int k; int n; scalar_t__ current; scalar_t__ ndependencies; int * dependencies; } ;
typedef int DependencyGeneratorData ;
typedef TYPE_1__* DependencyGenerator ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static DependencyGenerator
FUNC_4(int VAR_0, int VAR_1)
{
 DependencyGenerator VAR_2;

 FUNC_0((VAR_0 >= VAR_1) && (VAR_1 > 0));


 VAR_2 = (DependencyGenerator) FUNC_3(sizeof(DependencyGeneratorData));
 VAR_2->dependencies = (AttrNumber *) FUNC_2(VAR_1 * sizeof(AttrNumber));

 VAR_2->ndependencies = 0;
 VAR_2->current = 0;
 VAR_2->k = VAR_1;
 VAR_2->n = VAR_0;


 FUNC_1(VAR_2);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int held; } ;
typedef int PREDICATELOCKTARGETTAG ;
typedef TYPE_1__ LOCALPREDICATELOCK ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int const*,int ,int *) ;

__attribute__((used)) static bool
FUNC_1(const PREDICATELOCKTARGETTAG *VAR_2)
{
 LOCALPREDICATELOCK *VAR_3;


 VAR_3 = (LOCALPREDICATELOCK *) FUNC_0(VAR_1,
             VAR_2,
             VAR_0, ((void*)0));

 if (!VAR_3)
  return 0;





 return VAR_3->held;
}

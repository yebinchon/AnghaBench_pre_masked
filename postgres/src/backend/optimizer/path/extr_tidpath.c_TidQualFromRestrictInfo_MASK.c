
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pseudoconstant; } ;
typedef TYPE_1__ RestrictInfo ;
typedef int RelOptInfo ;
typedef int List ;


 scalar_t__ FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 int * VAR_0 ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static List *
FUNC_5(RestrictInfo *VAR_1, RelOptInfo *VAR_2)
{




 if (VAR_1->pseudoconstant)
  return VAR_0;





 if (!FUNC_4(VAR_1, VAR_2))
  return VAR_0;




 if (FUNC_2(VAR_1, VAR_2) ||
  FUNC_1(VAR_1, VAR_2) ||
  FUNC_0(VAR_1, VAR_2))
  return FUNC_3(VAR_1);

 return VAR_0;
}

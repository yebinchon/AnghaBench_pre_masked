
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int this10; int coefset; } ;
struct TYPE_5__ {TYPE_2__ eq; } ;
typedef TYPE_1__ vortex_t ;
typedef TYPE_2__ eqlzr_t ;
typedef int auxxEqCoeffSet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_2)
{
 eqlzr_t *VAR_3 = &(VAR_2->eq);


 FUNC_0(&(VAR_3->coefset), &VAR_0, sizeof(auxxEqCoeffSet_t));

 FUNC_1(VAR_2, VAR_1, VAR_3->this10 * 2);
}

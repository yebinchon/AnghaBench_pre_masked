
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * mcxt; int * plan; } ;
struct TYPE_7__ {TYPE_1__* ob_type; } ;
struct TYPE_6__ {int (* tp_free ) (TYPE_2__*) ;} ;
typedef TYPE_2__ PyObject ;
typedef TYPE_3__ PLyPlanObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(PyObject *VAR_0)
{
 PLyPlanObject *VAR_1 = (PLyPlanObject *) VAR_0;

 if (VAR_1->plan)
 {
  FUNC_1(VAR_1->plan);
  VAR_1->plan = ((void*)0);
 }
 if (VAR_1->mcxt)
 {
  FUNC_0(VAR_1->mcxt);
  VAR_1->mcxt = ((void*)0);
 }
 VAR_0->ob_type->tp_free(VAR_0);
}

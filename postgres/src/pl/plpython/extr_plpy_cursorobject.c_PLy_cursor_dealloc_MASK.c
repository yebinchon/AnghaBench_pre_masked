
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int closed; int * mcxt; int portalname; } ;
struct TYPE_7__ {TYPE_1__* ob_type; } ;
struct TYPE_6__ {int (* tp_free ) (TYPE_2__*) ;} ;
typedef TYPE_2__ PyObject ;
typedef int Portal ;
typedef TYPE_3__ PLyCursorObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(PyObject *VAR_0)
{
 PLyCursorObject *VAR_1;
 Portal VAR_2;

 VAR_1 = (PLyCursorObject *) VAR_0;

 if (!VAR_1->closed)
 {
  VAR_2 = FUNC_0(VAR_1->portalname);

  if (FUNC_2(VAR_2))
  {
   FUNC_4(VAR_2);
   FUNC_3(VAR_2);
  }
  VAR_1->closed = 1;
 }
 if (VAR_1->mcxt)
 {
  FUNC_1(VAR_1->mcxt);
  VAR_1->mcxt = ((void*)0);
 }
 VAR_0->ob_type->tp_free(VAR_0);
}

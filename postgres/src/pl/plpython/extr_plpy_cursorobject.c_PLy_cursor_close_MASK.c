
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int closed; int portalname; } ;
typedef int PyObject ;
typedef int Portal ;
typedef TYPE_1__ PLyCursorObject ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_2, PyObject *VAR_3)
{
 PLyCursorObject *VAR_4 = (PLyCursorObject *) VAR_2;

 if (!VAR_4->closed)
 {
  Portal VAR_5 = FUNC_0(VAR_4->portalname);

  if (!FUNC_2(VAR_5))
  {
   FUNC_1(VAR_0,
         "closing a cursor in an aborted subtransaction");
   return ((void*)0);
  }

  FUNC_4(VAR_5);
  FUNC_3(VAR_5);
  VAR_4->closed = 1;
 }

 VAR_1;
}

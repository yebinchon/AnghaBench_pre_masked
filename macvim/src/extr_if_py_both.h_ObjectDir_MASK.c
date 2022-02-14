
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int * ml_name; } ;
struct TYPE_10__ {TYPE_1__* ob_type; } ;
struct TYPE_9__ {TYPE_3__* tp_methods; } ;
typedef TYPE_2__ PyObject ;
typedef TYPE_3__ PyMethodDef ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static PyObject *
FUNC_3(PyObject *VAR_0, char **VAR_1)
{
    PyMethodDef *VAR_2;
    char **VAR_3;
    PyObject *VAR_4;

    if (!(VAR_4 = FUNC_0(0)))
 return ((void*)0);

    if (VAR_0)
 for (VAR_2 = VAR_0->ob_type->tp_methods ; VAR_2->ml_name != ((void*)0) ; ++VAR_2)
     if (FUNC_2(VAR_4, (char *)VAR_2->ml_name))
     {
  FUNC_1(VAR_4);
  return ((void*)0);
     }

    for (VAR_3 = VAR_1 ; *VAR_3 ; ++VAR_3)
 if (FUNC_2(VAR_4, *VAR_3))
 {
     FUNC_1(VAR_4);
     return ((void*)0);
 }


    if (FUNC_2(VAR_4, "__members__"))
    {
 FUNC_1(VAR_4);
 return ((void*)0);
    }


    return VAR_4;
}

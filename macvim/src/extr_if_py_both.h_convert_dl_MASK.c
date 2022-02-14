
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_2__* v_list; TYPE_1__* v_dict; } ;
struct TYPE_17__ {int v_type; TYPE_3__ vval; } ;
typedef TYPE_4__ typval_T ;
typedef int (* pytotvfunc ) (int *,TYPE_4__*,int *) ;
struct TYPE_15__ {int lv_refcount; } ;
struct TYPE_14__ {int dv_refcount; } ;
typedef int PyObject ;


 TYPE_4__* FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_4__*,int *) ;
 TYPE_4__* FUNC_2 (int *,int *) ;
 int * FUNC_3 (TYPE_4__*,int *,int *) ;
 int * FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *) ;


 void* VAR_0 ;
 int FUNC_7 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_8 (char*,char*,int *) ;

__attribute__((used)) static int
FUNC_9(PyObject *VAR_1, typval_T *VAR_2,
        pytotvfunc VAR_3, PyObject *VAR_4)
{
    PyObject *VAR_5;
    char VAR_6[sizeof(void *) * 2 + 3];

    FUNC_8(VAR_6, "%p", VAR_1);




    VAR_5 = (PyObject *)FUNC_4(VAR_4, VAR_6);

    if (VAR_5 == ((void*)0))
    {



 VAR_5 = FUNC_1(VAR_2, ((void*)0));

 if (FUNC_5(VAR_4, VAR_6, VAR_5))
 {
     FUNC_6(VAR_5);
     VAR_2->v_type = VAR_0;
     return -1;
 }

 FUNC_6(VAR_5);

 if (VAR_3(VAR_1, VAR_2, VAR_4) == -1)
 {
     VAR_2->v_type = VAR_0;
     return -1;
 }


 switch(VAR_2->v_type)
 {
     case 129: ++VAR_2->vval.v_dict->dv_refcount; break;
     case 128: ++VAR_2->vval.v_list->lv_refcount; break;
 }
    }
    else
    {
 typval_T *VAR_7;




 VAR_7 = FUNC_0(VAR_5);

 FUNC_7(VAR_7, VAR_2);
    }
    return 0;
}

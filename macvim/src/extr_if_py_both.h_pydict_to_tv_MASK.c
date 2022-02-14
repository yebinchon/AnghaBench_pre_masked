
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_15__ {TYPE_4__* v_dict; } ;
struct TYPE_16__ {TYPE_1__ vval; int v_type; } ;
typedef TYPE_2__ typval_T ;
struct TYPE_14__ {scalar_t__ v_lock; } ;
struct TYPE_17__ {TYPE_12__ di_tv; int di_key; } ;
typedef TYPE_3__ dictitem_T ;
struct TYPE_18__ {int dv_refcount; } ;
typedef TYPE_4__ dict_T ;
typedef scalar_t__ char_u ;
typedef int Py_ssize_t ;
typedef int PyObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int **,int **) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__* FUNC_4 (int *,int **) ;
 int VAR_3 ;
 int FUNC_5 (int *,TYPE_12__*,int *) ;
 int FUNC_6 (TYPE_12__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_3__* FUNC_9 (scalar_t__*) ;
 TYPE_4__* FUNC_10 () ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_12(PyObject *VAR_4, typval_T *VAR_5, PyObject *VAR_6)
{
    dict_T *VAR_7;
    char_u *VAR_8;
    dictitem_T *VAR_9;
    PyObject *VAR_10;
    PyObject *VAR_11;
    Py_ssize_t VAR_12 = 0;

    if (!(VAR_7 = FUNC_10()))
 return -1;

    VAR_5->v_type = VAR_3;
    VAR_5->vval.v_dict = VAR_7;

    while (FUNC_0(VAR_4, &VAR_12, &VAR_10, &VAR_11))
    {
 PyObject *VAR_13 = ((void*)0);

 if (VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
     FUNC_8(VAR_7);
     return -1;
 }

 if (!(VAR_8 = FUNC_4(VAR_10, &VAR_13)))
 {
     FUNC_8(VAR_7);
     return -1;
 }

 if (*VAR_8 == VAR_1)
 {
     FUNC_8(VAR_7);
     FUNC_2(VAR_13);
     VAR_2;
     return -1;
 }

 VAR_9 = FUNC_9(VAR_8);

 FUNC_2(VAR_13);

 if (VAR_9 == ((void*)0))
 {
     FUNC_1();
     FUNC_8(VAR_7);
     return -1;
 }
 VAR_9->di_tv.v_lock = 0;

 if (FUNC_5(VAR_11, &VAR_9->di_tv, VAR_6) == -1)
 {
     FUNC_11(VAR_9);
     FUNC_8(VAR_7);
     return -1;
 }

 if (FUNC_7(VAR_7, VAR_9) == VAR_0)
 {
     FUNC_3(VAR_9->di_key);
     FUNC_6(&VAR_9->di_tv);
     FUNC_11(VAR_9);
     FUNC_8(VAR_7);
     return -1;
 }
    }

    --VAR_7->dv_refcount;
    return 0;
}

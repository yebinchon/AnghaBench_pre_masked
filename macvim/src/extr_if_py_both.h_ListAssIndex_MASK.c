
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int typval_T ;
struct TYPE_13__ {int li_tv; } ;
typedef TYPE_1__ listitem_T ;
struct TYPE_14__ {scalar_t__ lv_lock; } ;
typedef TYPE_2__ list_T ;
struct TYPE_15__ {TYPE_2__* list; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_3__ ListObject ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int *) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,long) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(ListObject *VAR_3, Py_ssize_t VAR_4, PyObject *VAR_5)
{
    typval_T VAR_6;
    list_T *VAR_7 = VAR_3->list;
    listitem_T *VAR_8;
    Py_ssize_t VAR_9 = FUNC_1(VAR_3);

    if (VAR_7->lv_lock)
    {
 VAR_2;
 return -1;
    }
    if (VAR_4 > VAR_9 || (VAR_4 == VAR_9 && VAR_5 == ((void*)0)))
    {
 FUNC_3(VAR_1, FUNC_2("list index out of range"));
 return -1;
    }

    if (VAR_5 == ((void*)0))
    {
 VAR_8 = FUNC_8(VAR_7, (long) VAR_4);
 FUNC_10(VAR_7, VAR_8, VAR_8);
 FUNC_5(&VAR_8->li_tv);
 FUNC_9(VAR_8);
 return 0;
    }

    if (FUNC_0(VAR_5, &VAR_6) == -1)
 return -1;

    if (VAR_4 == VAR_9)
    {
 if (FUNC_7(VAR_7, &VAR_6) == VAR_0)
 {
     FUNC_5(&VAR_6);
     FUNC_4(FUNC_2("failed to add item to list"));
     return -1;
 }
    }
    else
    {
 VAR_8 = FUNC_8(VAR_7, (long) VAR_4);
 FUNC_5(&VAR_8->li_tv);
 FUNC_6(&VAR_6, &VAR_8->li_tv);
 FUNC_5(&VAR_6);
    }
    return 0;
}

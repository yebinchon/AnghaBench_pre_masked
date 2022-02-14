
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int v_type; scalar_t__ v_lock; } ;
struct TYPE_6__ {TYPE_5__ li_tv; } ;
typedef TYPE_1__ listitem_T ;
typedef int list_T ;
typedef int PyObject ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,TYPE_5__*,int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_9(list_T *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    PyObject *VAR_4;
    PyObject *VAR_5;
    listitem_T *VAR_6;

    if (!(VAR_4 = FUNC_3(VAR_2)))
 return -1;

    while ((VAR_5 = FUNC_2(VAR_4)))
    {
 if (!(VAR_6 = FUNC_7()))
 {
     FUNC_0();
     FUNC_4(VAR_5);
     FUNC_4(VAR_4);
     return -1;
 }
 VAR_6->li_tv.v_lock = 0;
 VAR_6->li_tv.v_type = VAR_0;

 if (FUNC_5(VAR_5, &VAR_6->li_tv, VAR_3) == -1)
 {
     FUNC_4(VAR_5);
     FUNC_4(VAR_4);
     FUNC_8(VAR_6);
     return -1;
 }

 FUNC_4(VAR_5);

 FUNC_6(VAR_1, VAR_6);
    }

    FUNC_4(VAR_4);


    if (FUNC_1())
 return -1;

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PySliceObject_T ;
typedef int PyObject ;
typedef int ListObject ;


 int FUNC_0 (int *,long,int *) ;
 int FUNC_1 (int *,int,int,int,int *) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 long FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ,int*,int*,int*,int*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static Py_ssize_t
FUNC_10(ListObject *VAR_0, PyObject *VAR_1, PyObject *VAR_2)
{

    if (FUNC_4(VAR_1))
    {
 long VAR_3 = FUNC_3(VAR_1);
 return FUNC_0(VAR_0, VAR_3, VAR_2);
    }
    else

    if (FUNC_6(VAR_1))
    {
 long VAR_4 = FUNC_5(VAR_1);
 return FUNC_0(VAR_0, VAR_4, VAR_2);
    }
    else if (FUNC_7(VAR_1))
    {
 Py_ssize_t VAR_5, VAR_6, VAR_7, VAR_8;

 if (FUNC_8((PySliceObject_T *)VAR_1, FUNC_2(VAR_0),
     &VAR_5, &VAR_6, &VAR_7, &VAR_8) < 0)
     return -1;
 return FUNC_1(VAR_0, VAR_5, VAR_7, VAR_8,
  VAR_2);
    }
    else
    {
 FUNC_9(VAR_1);
 return -1;
    }
}

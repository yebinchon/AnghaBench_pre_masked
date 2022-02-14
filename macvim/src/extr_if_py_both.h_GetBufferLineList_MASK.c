
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int linenr_T ;
typedef int buf_T ;
typedef int PyObject ;
typedef scalar_t__ PyInt ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static PyObject *
FUNC_5(buf_T *VAR_1, PyInt VAR_2, PyInt VAR_3)
{
    PyInt VAR_4;
    PyInt VAR_5 = VAR_3 - VAR_2;
    PyObject *VAR_6 = FUNC_1(VAR_5);

    if (VAR_6 == ((void*)0))
 return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
    {
 PyObject *VAR_7 = FUNC_0(
  (char *)FUNC_4(VAR_1, (linenr_T)(VAR_2+VAR_4), VAR_0));


 if (VAR_7 == ((void*)0))
 {
     FUNC_3(VAR_6);
     return ((void*)0);
 }

 FUNC_2(VAR_6, VAR_4, VAR_7);
    }






    return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int char_u ;
typedef int PyObject ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int **) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_10 (int *) ;

__attribute__((used)) static PyObject *
FUNC_11(PyObject *VAR_2, PyObject *VAR_3, PyObject *VAR_4)
{
    PyObject *VAR_5;
    PyObject *VAR_6;
    PyObject *VAR_7;
    char_u *VAR_8;

    if (VAR_2 == ((void*)0))
 return ((void*)0);
    if (!(VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4)))
 return ((void*)0);

    if (!(VAR_6 = FUNC_3(VAR_1, ((void*)0))))
    {
 FUNC_4(VAR_5);
 return ((void*)0);
    }

    if (!(VAR_8 = FUNC_6(VAR_6, &VAR_7)))
    {
 FUNC_4(VAR_5);
 FUNC_4(VAR_6);
 return ((void*)0);
    }

    FUNC_8();

    if (FUNC_10(VAR_8))
    {
 FUNC_4(VAR_5);
 FUNC_4(VAR_6);
 FUNC_5(VAR_7);

 if (FUNC_7())
     return ((void*)0);

 FUNC_1(FUNC_0("failed to change directory"));
 return ((void*)0);
    }

    FUNC_4(VAR_6);
    FUNC_5(VAR_7);

    FUNC_9(VAR_0);

    if (FUNC_7())
    {
 FUNC_4(VAR_5);
 return ((void*)0);
    }

    return VAR_5;
}

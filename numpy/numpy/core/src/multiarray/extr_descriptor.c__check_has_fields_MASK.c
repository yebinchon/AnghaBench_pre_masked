
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(PyArray_Descr *VAR_1)
{
    if (!FUNC_1(VAR_1)) {
        PyObject *VAR_2 = FUNC_5(VAR_1);
        if (VAR_2 == ((void*)0)) {
            return -1;
        }







        FUNC_2(VAR_0,
                "There are no fields in dtype %s.", FUNC_0(VAR_2));
        FUNC_4(VAR_2);
        return -1;
    }
    else {
        return 0;
    }
}

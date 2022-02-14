
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_0 ;

int
FUNC_5(PyObject *VAR_1, char *VAR_2, PyObject *VAR_3)
{
    if (VAR_3==((void*)0)) {
        FUNC_4(VAR_0, "Error loading %s\n", VAR_2);
        if (FUNC_2()) {
            FUNC_3();
            FUNC_1();
        }
        return -1;
    }
    return FUNC_0(VAR_1, VAR_2, VAR_3);
}

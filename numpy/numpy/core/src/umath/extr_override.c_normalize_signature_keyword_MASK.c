
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(PyObject *VAR_1)
{
    PyObject* VAR_2 = FUNC_1(VAR_1, "sig");
    if (VAR_2 != ((void*)0)) {
        if (FUNC_1(VAR_1, "signature")) {
            FUNC_3(VAR_0,
                            "cannot specify both 'sig' and 'signature'");
            return -1;
        }




        FUNC_2(VAR_1, "signature", VAR_2);
        FUNC_0(VAR_1, "sig");
    }
    return 0;
}

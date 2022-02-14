
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;
typedef int (* PyUFuncGenericFunction ) (char**,scalar_t__*,scalar_t__*,void*) ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,scalar_t__,char*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(PyArrayObject **VAR_2,
                    PyUFuncGenericFunction VAR_3,
                    void *VAR_4)
{
    char *VAR_5[2];
    npy_intp VAR_6[2], VAR_7[2];
    int VAR_8;
    VAR_0;

    VAR_8 = FUNC_4(FUNC_2(VAR_2[0])) ||
                FUNC_4(FUNC_2(VAR_2[1]));

    FUNC_3(VAR_2[0], VAR_2[1],
                                            VAR_6[0],
                                            VAR_5[0], VAR_5[1],
                                            VAR_7[0], VAR_7[1]);
    VAR_6[1] = VAR_6[0];
    FUNC_1("two operand loop count %d\n", (int)VAR_6[0]);

    if (!VAR_8) {
        FUNC_0(VAR_6[0]);
    }

    VAR_3(VAR_5, VAR_6, VAR_7, VAR_4);

    VAR_1;
}

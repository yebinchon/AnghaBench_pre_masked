
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;
typedef int PyObject ;
typedef int NpyAuxData ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(char *VAR_0, npy_intp VAR_1,
                        char *VAR_2, npy_intp VAR_3,
                        npy_intp VAR_4, npy_intp VAR_5,
                        NpyAuxData *VAR_6)
{
    PyObject *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    while (VAR_4 > 0) {
        FUNC_0(&VAR_7, VAR_2);
        FUNC_0(&VAR_8, VAR_0);


        FUNC_1("copy src ref", VAR_7);
        FUNC_0(VAR_0, &VAR_7);

        FUNC_3(VAR_7);

        FUNC_1("dec dst ref", VAR_8);
        FUNC_2(VAR_8);

        VAR_2 += VAR_3;
        VAR_0 += VAR_1;
        --VAR_4;
    }
}

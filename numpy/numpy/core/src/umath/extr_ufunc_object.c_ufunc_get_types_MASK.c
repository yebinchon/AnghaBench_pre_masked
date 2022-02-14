
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ntypes; int nin; int nout; int * types; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int *) ;
 int * FUNC_4 (char*,int) ;
 char FUNC_5 (int ) ;

__attribute__((used)) static PyObject *
FUNC_6(PyUFuncObject *VAR_0)
{

    PyObject *VAR_1;
    PyObject *VAR_2;
    int VAR_3, VAR_4, VAR_5, VAR_6 = VAR_0->ntypes;
    int VAR_7 = VAR_0->nin;
    int VAR_8 = VAR_0->nout;
    char *VAR_9;
    VAR_1 = FUNC_2(VAR_6);
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_9 = FUNC_1(VAR_8+VAR_7+2);
    VAR_5 = 0;
    for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++) {
        for (VAR_4 = 0; VAR_4<VAR_7; VAR_4++) {
            VAR_9[VAR_4] = FUNC_5(VAR_0->types[VAR_5]);
            VAR_5++;
        }
        VAR_9[VAR_7] = '-';
        VAR_9[VAR_7+1] = '>';
        for (VAR_4 = 0; VAR_4 < VAR_8; VAR_4++) {
            VAR_9[VAR_7 + 2 + VAR_4] = FUNC_5(VAR_0->types[VAR_5]);
            VAR_5++;
        }
        VAR_2 = FUNC_4(VAR_9, VAR_8 + VAR_7 + 2);
        FUNC_3(VAR_1, VAR_3, VAR_2);
    }
    FUNC_0(VAR_9);
    return VAR_1;
}

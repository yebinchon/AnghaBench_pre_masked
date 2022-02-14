
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 double FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static PyObject*
FUNC_9(PyObject *VAR_2, PyObject *VAR_3)
{
    int VAR_4, VAR_5;
    PyObject *VAR_6;
    PyObject *VAR_7[VAR_0], *VAR_8[VAR_0];
    PyObject *VAR_9 = ((void*)0);

    VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < FUNC_7(VAR_2); VAR_4++) {
        VAR_6 = FUNC_6(VAR_2, VAR_4);
        if (FUNC_0(VAR_6) || FUNC_2(VAR_6)) {
            continue;
        }
        VAR_9 = FUNC_5(VAR_6, VAR_3);
        if (VAR_9) {
            if (FUNC_3(VAR_9)) {
                VAR_7[VAR_5] = VAR_6;
                VAR_8[VAR_5] = VAR_9;
                ++VAR_5;
            }
            else {
                FUNC_8(VAR_9);
                VAR_9 = ((void*)0);
            }
        }
        else {
            FUNC_4();
        }
    }
    if (VAR_5 > 0) {

        VAR_9 = VAR_8[0];
        if (VAR_5 > 1) {
            double VAR_10 = FUNC_1(VAR_7[0],
                                                     VAR_1);
            for (VAR_4 = 1; VAR_4 < VAR_5; ++VAR_4) {
                double VAR_11 = FUNC_1(VAR_7[VAR_4],
                                                      VAR_1);
                if (VAR_11 > VAR_10) {
                    VAR_10 = VAR_11;
                    FUNC_8(VAR_9);
                    VAR_9 = VAR_8[VAR_4];
                }
                else {
                    FUNC_8(VAR_8[VAR_4]);
                }
            }
        }
    }
    return VAR_9;
}

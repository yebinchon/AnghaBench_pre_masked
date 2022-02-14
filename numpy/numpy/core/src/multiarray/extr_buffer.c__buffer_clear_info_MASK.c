
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _buffer_info_t ;
typedef int PyObject ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (void*) ;
 int FUNC_6 (int *) ;
 int * VAR_0 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(PyObject *VAR_1)
{
    PyObject *VAR_2, *VAR_3, *VAR_4;
    _buffer_info_t *VAR_5;
    int VAR_6;

    if (VAR_0 == ((void*)0)) {
        return;
    }

    VAR_2 = FUNC_5((void*)VAR_1);
    VAR_3 = FUNC_1(VAR_0, VAR_2);
    if (VAR_3 != ((void*)0)) {
        for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_3); ++VAR_6) {
            VAR_4 = FUNC_2(VAR_3, VAR_6);
            VAR_5 = (_buffer_info_t*)FUNC_4(VAR_4);
            FUNC_7(VAR_5);
        }
        FUNC_0(VAR_0, VAR_2);
    }

    FUNC_6(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 long FUNC_7 (int *) ;
 long FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (long) ;

__attribute__((used)) static npy_intp
FUNC_13(PyObject *VAR_5, const char * VAR_6)
{



    long VAR_7 = -1;

    PyObject *VAR_8, *VAR_9;






    if (!VAR_5 || FUNC_1(VAR_5) || FUNC_0(VAR_5, VAR_0)) {
        FUNC_4(VAR_4, VAR_6);
        return -1;
    }






    if (FUNC_6(VAR_5)) {


        return FUNC_5(VAR_5);




    }
    else

    if (FUNC_9(VAR_5)) {



        VAR_7 = FUNC_7(VAR_5);

        return (npy_intp)VAR_7;
    }






    VAR_8 = FUNC_10(VAR_5);
    if (VAR_8 == ((void*)0)) {
        return -1;
    }



    VAR_7 = FUNC_7(VAR_8);

    FUNC_11(VAR_8);

    if (FUNC_12(VAR_7)) {
        VAR_9 = FUNC_3();

        if (FUNC_2(VAR_9, VAR_4)) {
            FUNC_4(VAR_4, VAR_6);
        }
        return -1;
    }
    goto overflow_check;

overflow_check:
    return VAR_7;
}

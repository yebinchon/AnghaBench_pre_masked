
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_3__ {int * iter; scalar_t__ finished; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,size_t*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (size_t) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,size_t,int ) ;

__attribute__((used)) static PyObject *FUNC_6(NewNpyArrayIterObject *VAR_3)
{
    PyObject *VAR_4;
    npy_intp VAR_5, VAR_6, VAR_7[VAR_0];

    if (VAR_3->iter == ((void*)0) || VAR_3->finished) {
        FUNC_2(VAR_2,
                "Iterator is past the end");
        return ((void*)0);
    }

    if (FUNC_1(VAR_3->iter, VAR_7) == VAR_1) {
        VAR_6 = FUNC_0(VAR_3->iter);
        VAR_4 = FUNC_4(VAR_6);
        if (VAR_4 != ((void*)0)) {
            for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
                FUNC_5(VAR_4, VAR_5,
                        FUNC_3(VAR_7[VAR_5]));
            }
            return VAR_4;
        }
    }

    return ((void*)0);
}

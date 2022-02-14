
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_3__ {int * iter; int (* get_multi_index ) (int *,size_t*) ;scalar_t__ finished; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int VAR_0 ;
 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int FUNC_4 (size_t) ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int *,size_t,int ) ;
 int FUNC_7 (int *,size_t*) ;

__attribute__((used)) static PyObject *FUNC_8(NewNpyArrayIterObject *VAR_2)
{
    PyObject *VAR_3;
    npy_intp VAR_4, VAR_5, VAR_6[VAR_0];

    if (VAR_2->iter == ((void*)0) || VAR_2->finished) {
        FUNC_3(VAR_1,
                "Iterator is past the end");
        return ((void*)0);
    }

    if (VAR_2->get_multi_index != ((void*)0)) {
        VAR_5 = FUNC_0(VAR_2->iter);
        VAR_2->get_multi_index(VAR_2->iter, VAR_6);
        VAR_3 = FUNC_5(VAR_5);
        if (VAR_3 == ((void*)0)) {
            return ((void*)0);
        }
        for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
            FUNC_6(VAR_3, VAR_4,
                    FUNC_4(VAR_6[VAR_4]));
        }
        return VAR_3;
    }
    else {
        if (!FUNC_2(VAR_2->iter)) {
            FUNC_3(VAR_1,
                    "Iterator is not tracking a multi-index");
            return ((void*)0);
        }
        else if (FUNC_1(VAR_2->iter)) {
            FUNC_3(VAR_1,
                    "Iterator construction used delayed buffer allocation, "
                    "and no reset has been done yet");
            return ((void*)0);
        }
        else {
            FUNC_3(VAR_1,
                    "Iterator is in an invalid state");
            return ((void*)0);
        }
    }
}

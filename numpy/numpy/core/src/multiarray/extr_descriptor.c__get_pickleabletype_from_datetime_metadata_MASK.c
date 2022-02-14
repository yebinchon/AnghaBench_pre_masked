
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t base; int num; } ;
struct TYPE_6__ {int * metadata; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef TYPE_2__ PyArray_DatetimeMetaData ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_0 ;
 TYPE_2__* FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_8(PyArray_Descr *VAR_1)
{
    PyObject *VAR_2, *VAR_3;
    PyArray_DatetimeMetaData *VAR_4;


    VAR_2 = FUNC_3(2);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }


    if (VAR_1->metadata != ((void*)0)) {
        FUNC_6(VAR_1->metadata);
        FUNC_4(VAR_2, 0, VAR_1->metadata);
    } else {
        FUNC_4(VAR_2, 0, FUNC_1());
    }


    VAR_4 = FUNC_7(VAR_1);
    if (VAR_4 == ((void*)0)) {
        FUNC_5(VAR_2);
        return ((void*)0);
    }

    VAR_3 = FUNC_3(4);
    if (VAR_3 == ((void*)0)) {
        FUNC_5(VAR_2);
        return ((void*)0);
    }
    FUNC_4(VAR_3, 0,
            FUNC_0(VAR_0[VAR_4->base]));
    FUNC_4(VAR_3, 1,
            FUNC_2(VAR_4->num));
    FUNC_4(VAR_3, 2,
            FUNC_2(1));
    FUNC_4(VAR_3, 3,
            FUNC_2(1));

    FUNC_4(VAR_2, 1, VAR_3);

    return VAR_2;
}

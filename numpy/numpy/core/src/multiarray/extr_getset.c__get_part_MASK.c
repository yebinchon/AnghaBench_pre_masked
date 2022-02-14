
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int type_num; int byteorder; } ;
struct TYPE_8__ {int elsize; int byteorder; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;
typedef int PyArrayObject ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_7__* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*,int ,int ,int ,scalar_t__,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char*,int) ;
 int VAR_3 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static PyArrayObject *
FUNC_13(PyArrayObject *VAR_4, int VAR_5)
{
    int VAR_6;
    PyArray_Descr *VAR_7;
    PyArrayObject *VAR_8;
    int VAR_9;

    switch (FUNC_1(VAR_4)->type_num) {
        case 129:
            VAR_6 = VAR_1;
            break;
        case 130:
            VAR_6 = VAR_0;
            break;
        case 128:
            VAR_6 = VAR_2;
            break;
        default:
            FUNC_10(VAR_3,
                     "Cannot convert complex type number %d to float",
                     FUNC_1(VAR_4)->type_num);
            return ((void*)0);

    }
    VAR_7 = FUNC_3(VAR_6);

    VAR_9 = (VAR_5 ? VAR_7->elsize : 0);

    if (!FUNC_6(FUNC_1(VAR_4)->byteorder)) {
        PyArray_Descr *VAR_10;
        VAR_10 = FUNC_4(VAR_7);
        VAR_10->byteorder = FUNC_1(VAR_4)->byteorder;
        FUNC_11(VAR_7);
        VAR_7 = VAR_10;
    }
    VAR_8 = (PyArrayObject *)FUNC_8(
            FUNC_12(VAR_4),
            VAR_7,
            FUNC_7(VAR_4),
            FUNC_2(VAR_4),
            FUNC_9(VAR_4),
            FUNC_0(VAR_4) + VAR_9,
            FUNC_5(VAR_4), (PyObject *)VAR_4, (PyObject *)VAR_4);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }
    return VAR_8;
}

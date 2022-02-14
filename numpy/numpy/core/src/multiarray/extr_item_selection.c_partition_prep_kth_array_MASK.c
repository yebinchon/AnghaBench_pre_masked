
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t npy_intp ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 size_t* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int *) ;

__attribute__((used)) static PyArrayObject *
FUNC_10(PyArrayObject * VAR_4,
                         PyArrayObject * VAR_5,
                         int VAR_6)
{
    const npy_intp * VAR_7 = FUNC_4(VAR_5);
    PyArrayObject * VAR_8;
    npy_intp * VAR_9;
    npy_intp VAR_10, VAR_11;

    if (!FUNC_0(FUNC_7(VAR_4), VAR_0)) {
        FUNC_8(VAR_2, "Partition index must be integer");
        return ((void*)0);
    }

    if (FUNC_3(VAR_4) > 1) {
        FUNC_8(VAR_3, "kth array must have dimension <= 1");
        return ((void*)0);
    }
    VAR_8 = (PyArrayObject *)FUNC_1(VAR_4, VAR_0);

    if (VAR_8 == ((void*)0))
        return ((void*)0);

    VAR_9 = FUNC_2(VAR_8);
    VAR_10 = FUNC_5(VAR_8);

    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        if (VAR_9[VAR_11] < 0) {
            VAR_9[VAR_11] += VAR_7[VAR_6];
        }
        if (FUNC_5(VAR_5) != 0 &&
                    (VAR_9[VAR_11] < 0 || VAR_9[VAR_11] >= VAR_7[VAR_6])) {
            FUNC_8(VAR_3, "kth(=%zd) out of bounds (%zd)",
                         VAR_9[VAR_11], VAR_7[VAR_6]);
            FUNC_9(VAR_8);
            return ((void*)0);
        }
    }





    if (FUNC_5(VAR_8) > 1) {
        FUNC_6(VAR_8, -1, VAR_1);
    }

    return VAR_8;
}

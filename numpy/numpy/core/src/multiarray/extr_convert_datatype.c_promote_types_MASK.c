
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int type_num; } ;
typedef TYPE_1__ PyArray_Descr ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int** VAR_1 ;
 int FUNC_4 (int) ;

__attribute__((used)) static PyArray_Descr *
FUNC_5(PyArray_Descr *VAR_2, PyArray_Descr *VAR_3,
                        int VAR_4, int VAR_5)
{
    if (VAR_4) {
        int VAR_6 = VAR_2->type_num;
        int VAR_7 = VAR_3->type_num;
        int VAR_8;

        if (VAR_7 < VAR_0 && !(FUNC_2(VAR_7) ||
                                        FUNC_3(VAR_7))) {

            VAR_6 = FUNC_4(VAR_6);

            VAR_8 = VAR_1[VAR_6][VAR_7];

            if (VAR_8 >= 0) {
                return FUNC_0(VAR_8);
            }
        }

        return FUNC_1(VAR_2, VAR_3);
    }
    else if (VAR_5) {
        int VAR_9 = VAR_2->type_num;
        int VAR_10 = VAR_3->type_num;
        int VAR_11;

        if (VAR_9 < VAR_0 && !(FUNC_2(VAR_9) ||
                                        FUNC_3(VAR_9))) {

            VAR_10 = FUNC_4(VAR_10);

            VAR_11 = VAR_1[VAR_9][VAR_10];

            if (VAR_11 >= 0) {
                return FUNC_0(VAR_11);
            }
        }

        return FUNC_1(VAR_2, VAR_3);
    }
    else {
        return FUNC_1(VAR_2, VAR_3);
    }

}

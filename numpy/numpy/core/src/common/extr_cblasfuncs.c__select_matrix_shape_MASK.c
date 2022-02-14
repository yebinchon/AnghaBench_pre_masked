
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyArrayObject ;
typedef int MatrixShape ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static MatrixShape
FUNC_2(PyArrayObject *VAR_4)
{
    switch (FUNC_1(VAR_4)) {
        case 0:
            return VAR_3;
        case 1:
            if (FUNC_0(VAR_4, 0) > 1)
                return VAR_0;
            return VAR_3;
        case 2:
            if (FUNC_0(VAR_4, 0) > 1) {
                if (FUNC_0(VAR_4, 1) == 1)
                    return VAR_0;
                else
                    return VAR_1;
            }
            if (FUNC_0(VAR_4, 1) == 1)
                return VAR_3;
            return VAR_2;
    }
    return VAR_1;
}

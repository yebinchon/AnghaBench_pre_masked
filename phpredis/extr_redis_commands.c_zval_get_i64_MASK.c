
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_long ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,scalar_t__*,double*,int) ;

__attribute__((used)) static int FUNC_6(zval *VAR_3, int64_t *VAR_4) {
    if (FUNC_4(VAR_3) == 128) {
        *VAR_4 = (int64_t)FUNC_1(VAR_3);
        return VAR_2;
    } else if (FUNC_4(VAR_3) == 129) {
        *VAR_4 = (int64_t)FUNC_0(VAR_3);
        return VAR_2;
    } else if (FUNC_4(VAR_3) == VAR_1) {
        zend_long VAR_5;
        double VAR_6;

        switch (FUNC_5(FUNC_3(VAR_3), FUNC_2(VAR_3), &VAR_5, &VAR_6, 1)) {
            case 128:
                *VAR_4 = (int64_t)VAR_5;
                return VAR_2;
            case 129:
                *VAR_4 = (int64_t)VAR_6;
                return VAR_2;
        }
    }


    return VAR_0;
}

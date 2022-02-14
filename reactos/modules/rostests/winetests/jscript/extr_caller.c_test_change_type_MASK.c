
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float int_result; float str_result; scalar_t__ bool_result; scalar_t__ double_result; scalar_t__ test_double; } ;
typedef TYPE_1__ conv_results_t ;
typedef int VARIANT ;
typedef scalar_t__ UINT16 ;
typedef int IVariantChangeType ;
typedef float INT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 float FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 float FUNC_2 (int *) ;
 float FUNC_3 (int *) ;
 float FUNC_4 (int *) ;
 float FUNC_5 (int *) ;
 float FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,scalar_t__) ;
 int FUNC_10 (int *,int *,scalar_t__,int ) ;
 int FUNC_11 (int,char*,float,float) ;
 int FUNC_12 (int ,float) ;
 float FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(IVariantChangeType *VAR_10, VARIANT *VAR_11, const conv_results_t *VAR_12)
{
    VARIANT VAR_13;

    FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_5);
    FUNC_11(FUNC_3(&VAR_13) == VAR_12->int_result, "V_I4(v) = %d, expected %d\n", FUNC_3(&VAR_13), VAR_12->int_result);

    FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_9);
    FUNC_11(FUNC_6(&VAR_13) == (UINT16)VAR_12->int_result, "V_UI2(v) = %u, expected %u\n", FUNC_6(&VAR_13), (UINT16)VAR_12->int_result);

    FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_2);
    FUNC_11(!FUNC_12(FUNC_1(&VAR_13), VAR_12->str_result), "V_BSTR(v) = %s, expected %s\n", FUNC_13(FUNC_1(&VAR_13)), VAR_12->str_result);
    FUNC_8(&VAR_13);

    FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_1);
    FUNC_11(FUNC_0(&VAR_13) == VAR_12->bool_result, "V_BOOL(v) = %x, expected %x\n", FUNC_0(&VAR_13), VAR_12->bool_result);

    if(VAR_12->test_double) {
        FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_8);
        FUNC_11(FUNC_5(&VAR_13) == VAR_12->double_result, "V_R8(v) = %lf, expected %lf\n", FUNC_5(&VAR_13), VAR_12->double_result);

        FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_7);
        FUNC_11(FUNC_4(&VAR_13) == (float)VAR_12->double_result, "V_R4(v) = %f, expected %f\n", FUNC_4(&VAR_13), (float)VAR_12->double_result);
    }

    if(FUNC_7(VAR_11) == VAR_6)
        FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_6);
    else
        FUNC_10(VAR_10, VAR_11, VAR_6, VAR_0);

    if(FUNC_7(VAR_11) == VAR_3)
        FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_3);
    else
        FUNC_10(VAR_10, VAR_11, VAR_3, VAR_0);

    FUNC_9(VAR_10, &VAR_13, VAR_11, VAR_4);
    FUNC_11(FUNC_2(&VAR_13) == (INT16)VAR_12->int_result, "V_I2(v) = %d, expected %d\n", FUNC_2(&VAR_13), VAR_12->int_result);
}

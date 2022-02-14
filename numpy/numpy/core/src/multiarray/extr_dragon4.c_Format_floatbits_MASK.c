
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_uint32 ;
typedef int npy_int32 ;
typedef int npy_bool ;
struct TYPE_3__ {int digits_right; int digits_left; int trim_mode; int precision; int cutoff_mode; int digit_mode; int exp_digits; scalar_t__ scientific; } ;
typedef TYPE_1__ Dragon4_Options ;
typedef int BigInt ;


 int FUNC_0 (char*,int ,int *,int ,char,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int *,int ,char,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static npy_uint32
FUNC_2(char *VAR_0, npy_uint32 VAR_1, BigInt *VAR_2,
                 npy_int32 VAR_3, char VAR_4, npy_uint32 VAR_5,
                 npy_bool VAR_6, Dragon4_Options *VAR_7)
{

    if (VAR_7->scientific) {
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
                                VAR_4, VAR_5, VAR_6,
                                VAR_7->digit_mode, VAR_7->precision,
                                VAR_7->trim_mode, VAR_7->digits_left,
                                VAR_7->exp_digits);
    }
    else {
        return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
                                VAR_4, VAR_5, VAR_6,
                                VAR_7->digit_mode, VAR_7->cutoff_mode,
                                VAR_7->precision, VAR_7->trim_mode,
                                VAR_7->digits_left, VAR_7->digits_right);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _strided_zero_pad_data ;
typedef int NpyAuxData ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_2(NpyAuxData *VAR_0)
{
    _strided_zero_pad_data *VAR_1 =
            (_strided_zero_pad_data *)FUNC_0(
                                    sizeof(_strided_zero_pad_data));
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_1(VAR_1, VAR_0, sizeof(_strided_zero_pad_data));

    return (NpyAuxData *)VAR_1;
}

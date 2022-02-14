
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int aop; int aip; } ;
typedef TYPE_1__ _strided_cast_data ;
typedef int NpyAuxData ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;

__attribute__((used)) static NpyAuxData *FUNC_3(NpyAuxData *VAR_0)
{
    _strided_cast_data *VAR_1 =
            (_strided_cast_data *)FUNC_0(sizeof(_strided_cast_data));
    if (VAR_1 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(VAR_1, VAR_0, sizeof(_strided_cast_data));
    FUNC_1(VAR_1->aip);
    FUNC_1(VAR_1->aop);

    return (NpyAuxData *)VAR_1;
}

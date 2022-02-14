
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SIZE_T ;
typedef scalar_t__ PVOID ;
typedef scalar_t__* PSIZE_T ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static
PVOID
FUNC_5(
    PVOID VAR_0,
    SIZE_T VAR_1)
{
    PVOID VAR_2;
    SIZE_T VAR_3;

    VAR_3 = ((PSIZE_T)VAR_0)[-1];
    FUNC_0(VAR_3 != 0);

    VAR_2 = FUNC_1(VAR_1);
    FUNC_0(((PSIZE_T)VAR_0)[-1] == VAR_3);
    FUNC_3(VAR_2, VAR_0, FUNC_4(VAR_3, VAR_1));
    FUNC_0(((PSIZE_T)VAR_0)[-1] == VAR_3);
    FUNC_2(VAR_0);
    return VAR_2;
}

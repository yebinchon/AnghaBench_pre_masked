
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
typedef scalar_t__ PVOID ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
BOOLEAN
FUNC_0(
    PVOID VAR_2,
    ULONG VAR_3,
    PVOID VAR_4,
    PVOID VAR_5,
    ULONG VAR_6)
{
    if ((ULONG_PTR)VAR_2 < (ULONG_PTR)VAR_4 ||
        (ULONG_PTR)VAR_2 + VAR_3 >= (ULONG_PTR)VAR_5 ||
        (ULONG_PTR)VAR_2 & (VAR_6 -1))
    {
        return VAR_0;
    }
    return VAR_1;
}

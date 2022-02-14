
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (scalar_t__*,int const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

long FUNC_1(const ASN1_INTEGER *VAR_2)
{
    int VAR_3;
    int64_t VAR_4;
    if (VAR_2 == ((void*)0))
        return 0;
    VAR_3 = FUNC_0(&VAR_4, VAR_2);
    if (VAR_3 == 0)
        return -1;
    if (VAR_4 > VAR_0 || VAR_4 < VAR_1)
        return -1;
    return (long)VAR_4;
}

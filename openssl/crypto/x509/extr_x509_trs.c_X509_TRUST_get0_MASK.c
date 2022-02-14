
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_TRUST ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,scalar_t__) ;
 int * VAR_1 ;
 int VAR_2 ;

X509_TRUST *FUNC_1(int VAR_3)
{
    if (VAR_3 < 0)
        return ((void*)0);
    if (VAR_3 < (int)VAR_0)
        return VAR_1 + VAR_3;
    return FUNC_0(VAR_2, VAR_3 - VAR_0);
}

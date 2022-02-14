
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;
typedef int SSL_CIPHER ;


 long VAR_0 ;
 int const* FUNC_0 (long) ;

const SSL_CIPHER *FUNC_1(const unsigned char *VAR_1)
{
    return FUNC_0(VAR_0
                                 | ((uint32_t)VAR_1[0] << 8L)
                                 | (uint32_t)VAR_1[1]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CIPHER ;


 unsigned int VAR_0 ;
 int const* VAR_1 ;

const SSL_CIPHER *FUNC_0(unsigned int VAR_2)
{
    if (VAR_2 < VAR_0)
        return &(VAR_1[VAR_0 - 1 - VAR_2]);
    else
        return ((void*)0);
}

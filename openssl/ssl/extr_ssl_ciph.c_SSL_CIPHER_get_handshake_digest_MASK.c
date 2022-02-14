
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algorithm2; } ;
typedef TYPE_1__ SSL_CIPHER ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int const** VAR_2 ;

const EVP_MD *FUNC_0(const SSL_CIPHER *VAR_3)
{
    int VAR_4 = VAR_3->algorithm2 & VAR_0;

    if (VAR_4 < 0 || VAR_4 >= VAR_1)
        return ((void*)0);
    return VAR_2[VAR_4];
}

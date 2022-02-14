
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ enc; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_2(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                                     const unsigned char *VAR_3, size_t VAR_4)
{





    if (VAR_4 >= VAR_0 || VAR_4 % 8)
        return -1;
    if (VAR_1->enc)
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
    else
        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}

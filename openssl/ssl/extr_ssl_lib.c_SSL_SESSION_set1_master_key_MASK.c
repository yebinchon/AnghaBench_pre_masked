
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t master_key_length; int master_key; } ;
typedef TYPE_1__ SSL_SESSION ;


 int FUNC_0 (int ,unsigned char const*,size_t) ;

int FUNC_1(SSL_SESSION *VAR_0, const unsigned char *VAR_1,
                                size_t VAR_2)
{
    if (VAR_2 > sizeof(VAR_0->master_key))
        return 0;

    FUNC_0(VAR_0->master_key, VAR_1, VAR_2);
    VAR_0->master_key_length = VAR_2;
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t master_key_length; int master_key; } ;
typedef TYPE_1__ SSL_SESSION ;


 int FUNC_0 (unsigned char*,int ,size_t) ;

size_t FUNC_1(const SSL_SESSION *VAR_0,
                                  unsigned char *VAR_1, size_t VAR_2)
{
    if (VAR_2 == 0)
        return VAR_0->master_key_length;
    if (VAR_2 > VAR_0->master_key_length)
        VAR_2 = VAR_0->master_key_length;
    FUNC_0(VAR_1, VAR_0->master_key, VAR_2);
    return VAR_2;
}

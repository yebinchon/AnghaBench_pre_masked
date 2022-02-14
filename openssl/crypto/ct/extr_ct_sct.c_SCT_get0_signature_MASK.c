
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* sig; size_t sig_len; } ;
typedef TYPE_1__ SCT ;



size_t FUNC_0(const SCT *VAR_0, unsigned char **VAR_1)
{
    *VAR_1 = VAR_0->sig;
    return VAR_0->sig_len;
}

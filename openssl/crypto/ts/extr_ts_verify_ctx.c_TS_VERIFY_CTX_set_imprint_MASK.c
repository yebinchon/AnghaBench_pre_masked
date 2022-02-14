
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* imprint; long imprint_len; } ;
typedef TYPE_1__ TS_VERIFY_CTX ;



unsigned char *FUNC_0(TS_VERIFY_CTX *VAR_0,
                                         unsigned char *VAR_1, long VAR_2)
{
    VAR_0->imprint = VAR_1;
    VAR_0->imprint_len = VAR_2;
    return VAR_0->imprint;
}

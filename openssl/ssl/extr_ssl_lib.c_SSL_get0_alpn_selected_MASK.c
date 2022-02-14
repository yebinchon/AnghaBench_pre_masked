
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* alpn_selected; scalar_t__ alpn_selected_len; } ;
struct TYPE_5__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;



void FUNC_0(const SSL *VAR_0, const unsigned char **VAR_1,
                            unsigned int *VAR_2)
{
    *VAR_1 = VAR_0->s3.alpn_selected;
    if (*VAR_1 == ((void*)0))
        *VAR_2 = 0;
    else
        *VAR_2 = (unsigned int)VAR_0->s3.alpn_selected_len;
}

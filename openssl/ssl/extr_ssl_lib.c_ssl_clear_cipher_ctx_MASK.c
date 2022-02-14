
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * compress; int * expand; int * enc_write_ctx; int * enc_read_ctx; } ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(SSL *VAR_0)
{
    if (VAR_0->enc_read_ctx != ((void*)0)) {
        FUNC_1(VAR_0->enc_read_ctx);
        VAR_0->enc_read_ctx = ((void*)0);
    }
    if (VAR_0->enc_write_ctx != ((void*)0)) {
        FUNC_1(VAR_0->enc_write_ctx);
        VAR_0->enc_write_ctx = ((void*)0);
    }

    FUNC_0(VAR_0->expand);
    VAR_0->expand = ((void*)0);
    FUNC_0(VAR_0->compress);
    VAR_0->compress = ((void*)0);

}

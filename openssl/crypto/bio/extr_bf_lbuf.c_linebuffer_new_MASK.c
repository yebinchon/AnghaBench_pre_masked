
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int init; char* ptr; scalar_t__ flags; } ;
struct TYPE_5__ {int obuf_size; scalar_t__ obuf_len; int * obuf; } ;
typedef TYPE_1__ BIO_LINEBUFFER_CTX ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_3)
{
    BIO_LINEBUFFER_CTX *VAR_4;

    if ((VAR_4 = FUNC_2(sizeof(*VAR_4))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    VAR_4->obuf = FUNC_2(VAR_1);
    if (VAR_4->obuf == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        FUNC_1(VAR_4);
        return 0;
    }
    VAR_4->obuf_size = VAR_1;
    VAR_4->obuf_len = 0;

    VAR_3->init = 1;
    VAR_3->ptr = (char *)VAR_4;
    VAR_3->flags = 0;
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int init; char* ptr; scalar_t__ flags; } ;
struct TYPE_6__ {struct TYPE_6__* ibuf; int * obuf; void* obuf_size; void* ibuf_size; } ;
typedef TYPE_1__ BIO_F_BUFFER_CTX ;
typedef TYPE_2__ BIO ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_1)
{
    BIO_F_BUFFER_CTX *VAR_2 = FUNC_2(sizeof(*VAR_2));

    if (VAR_2 == ((void*)0))
        return 0;
    VAR_2->ibuf_size = VAR_0;
    VAR_2->ibuf = FUNC_1(VAR_0);
    if (VAR_2->ibuf == ((void*)0)) {
        FUNC_0(VAR_2);
        return 0;
    }
    VAR_2->obuf_size = VAR_0;
    VAR_2->obuf = FUNC_1(VAR_0);
    if (VAR_2->obuf == ((void*)0)) {
        FUNC_0(VAR_2->ibuf);
        FUNC_0(VAR_2);
        return 0;
    }

    VAR_1->init = 1;
    VAR_1->ptr = (char *)VAR_2;
    VAR_1->flags = 0;
    return 1;
}

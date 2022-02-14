
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ init; int * ptr; } ;
struct TYPE_8__ {TYPE_2__* buf; TYPE_1__* readp; } ;
struct TYPE_7__ {scalar_t__ data; int length; } ;
struct TYPE_6__ {scalar_t__ data; int length; } ;
typedef TYPE_3__ BIO_BUF_MEM ;
typedef TYPE_4__ BIO ;


 int FUNC_0 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0)
{
    if (VAR_0 != ((void*)0) && VAR_0->init != 0 && VAR_0->ptr != ((void*)0)) {
        BIO_BUF_MEM *VAR_1 = (BIO_BUF_MEM *)VAR_0->ptr;

        if (VAR_1->readp->data != VAR_1->buf->data) {
            FUNC_0(VAR_1->buf->data, VAR_1->readp->data, VAR_1->readp->length);
            VAR_1->buf->length = VAR_1->readp->length;
            VAR_1->readp->data = VAR_1->buf->data;
        }
    }
    return 0;
}

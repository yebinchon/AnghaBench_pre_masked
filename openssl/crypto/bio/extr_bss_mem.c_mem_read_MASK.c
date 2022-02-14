
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; int num; scalar_t__ ptr; } ;
struct TYPE_8__ {TYPE_1__* buf; TYPE_1__* readp; } ;
struct TYPE_7__ {size_t length; int data; int max; } ;
typedef TYPE_1__ BUF_MEM ;
typedef TYPE_2__ BIO_BUF_MEM ;
typedef TYPE_3__ BIO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_1, char *VAR_2, int VAR_3)
{
    int VAR_4 = -1;
    BIO_BUF_MEM *VAR_5 = (BIO_BUF_MEM *)VAR_1->ptr;
    BUF_MEM *VAR_6 = VAR_5->readp;

    if (VAR_1->flags & VAR_0)
        VAR_6 = VAR_5->buf;
    FUNC_0(VAR_1);
    VAR_4 = (VAR_3 >= 0 && (size_t)VAR_3 > VAR_6->length) ? (int)VAR_6->length : VAR_3;
    if ((VAR_2 != ((void*)0)) && (VAR_4 > 0)) {
        FUNC_2(VAR_2, VAR_6->data, VAR_4);
        VAR_6->length -= VAR_4;
        VAR_6->max -= VAR_4;
        VAR_6->data += VAR_4;
    } else if (VAR_6->length == 0) {
        VAR_4 = VAR_1->num;
        if (VAR_4 != 0)
            FUNC_1(VAR_1);
    }
    return VAR_4;
}

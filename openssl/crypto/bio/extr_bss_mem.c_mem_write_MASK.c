
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int length; scalar_t__ data; } ;
struct TYPE_8__ {int flags; scalar_t__ ptr; } ;
struct TYPE_7__ {TYPE_5__* buf; TYPE_5__* readp; } ;
typedef TYPE_1__ BIO_BUF_MEM ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,char const*,int) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_4, const char *VAR_5, int VAR_6)
{
    int VAR_7 = -1;
    int VAR_8;
    BIO_BUF_MEM *VAR_9 = (BIO_BUF_MEM *)VAR_4->ptr;

    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_1, VAR_2);
        goto end;
    }
    if (VAR_4->flags & VAR_0) {
        FUNC_1(VAR_1, VAR_3);
        goto end;
    }
    FUNC_0(VAR_4);
    if (VAR_6 == 0)
        return 0;
    VAR_8 = VAR_9->readp->length;
    FUNC_3(VAR_4);
    if (FUNC_2(VAR_9->buf, VAR_8 + VAR_6) == 0)
        goto end;
    FUNC_4(VAR_9->buf->data + VAR_8, VAR_5, VAR_6);
    *VAR_9->readp = *VAR_9->buf;
    VAR_7 = VAR_6;
 end:
    return VAR_7;
}

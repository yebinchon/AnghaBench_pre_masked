
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iovec {int iov_len; int iov_base; } ;
struct TYPE_6__ {scalar_t__ written; TYPE_3__* wbuf; } ;
typedef TYPE_1__ store_page ;
struct TYPE_7__ {scalar_t__ offset; int len; int iovcnt; struct iovec* iov; int buf; } ;
typedef TYPE_2__ obj_io ;
struct TYPE_8__ {scalar_t__ size; unsigned int buf; unsigned int offset; } ;
typedef TYPE_3__ _store_wbuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_2(store_page *VAR_0, obj_io *VAR_1) {
    _store_wbuf *VAR_2 = VAR_0->wbuf;
    FUNC_0(VAR_2 != ((void*)0));
    FUNC_0(VAR_1->offset < VAR_0->written + VAR_2->size);
    if (VAR_1->iov == ((void*)0)) {
        FUNC_1(VAR_1->buf, VAR_2->buf + (VAR_1->offset - VAR_2->offset), VAR_1->len);
    } else {
        int VAR_3;
        unsigned int VAR_4 = VAR_1->offset - VAR_2->offset;

        for (VAR_3 = 0; VAR_3 < VAR_1->iovcnt; VAR_3++) {
            struct iovec *VAR_5 = &VAR_1->iov[VAR_3];
            FUNC_1(VAR_5->iov_base, VAR_2->buf + VAR_4, VAR_5->iov_len);
            VAR_4 += VAR_5->iov_len;
        }
    }
    return VAR_1->len;
}

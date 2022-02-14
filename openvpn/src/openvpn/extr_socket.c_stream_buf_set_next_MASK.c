
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; scalar_t__ len; } ;
struct stream_buf {scalar_t__ len; scalar_t__ maxlen; TYPE_1__ next; TYPE_1__ buf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_3(struct stream_buf *VAR_1)
{

    VAR_1->next = VAR_1->buf;
    VAR_1->next.offset = VAR_1->buf.offset + VAR_1->buf.len;
    VAR_1->next.len = (VAR_1->len >= 0 ? VAR_1->len : VAR_1->maxlen) - VAR_1->buf.len;
    FUNC_2(VAR_0, "STREAM: SET NEXT, buf=[%d,%d] next=[%d,%d] len=%d maxlen=%d",
         VAR_1->buf.offset, VAR_1->buf.len,
         VAR_1->next.offset, VAR_1->next.len,
         VAR_1->len, VAR_1->maxlen);
    FUNC_0(VAR_1->next.len > 0);
    FUNC_0(FUNC_1(&VAR_1->buf, VAR_1->next.len));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {size_t len; TYPE_1__* head; } ;
struct TYPE_2__ {size_t iov_len; } ;



__attribute__((used)) static inline void FUNC_0(struct xdr_buf *VAR_0, size_t VAR_1)
{
 VAR_0->head[0].iov_len = VAR_1;
 VAR_0->len = VAR_1;
}

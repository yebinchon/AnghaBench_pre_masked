
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {TYPE_2__* head; } ;
struct TYPE_3__ {scalar_t__ copied; scalar_t__ offset; int xid; } ;
struct sock_xprt {TYPE_1__ recv; } ;
struct TYPE_4__ {scalar_t__ iov_len; int iov_base; } ;


 int FUNC_0 (int ,int *,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct sock_xprt *VAR_0, struct xdr_buf *VAR_1)
{
 if (!VAR_0->recv.copied) {
  if (VAR_1->head[0].iov_len >= VAR_0->recv.offset)
   FUNC_0(VAR_1->head[0].iov_base,
     &VAR_0->recv.xid,
     VAR_0->recv.offset);
  VAR_0->recv.copied = VAR_0->recv.offset;
 }
}

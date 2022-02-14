
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_buf {unsigned long page_base; unsigned int page_len; TYPE_1__* tail; } ;
struct svcxprt_rdma {int sc_max_send_sges; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ iov_len; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_1(struct svcxprt_rdma *VAR_3,
        struct xdr_buf *VAR_4,
        __be32 *VAR_5)
{
 int VAR_6;


 VAR_6 = 1;


 if (!VAR_5) {
  unsigned int VAR_7;
  unsigned long VAR_8;

  VAR_8 = VAR_4->page_base & ~VAR_0;
  VAR_7 = VAR_4->page_len;
  while (VAR_7) {
   ++VAR_6;
   VAR_7 -= FUNC_0(VAR_2, VAR_1 - VAR_8,
        VAR_7);
   VAR_8 = 0;
  }
 }


 if (VAR_4->tail[0].iov_len)
  ++VAR_6;


 return VAR_6 >= VAR_3->sc_max_send_sges;
}

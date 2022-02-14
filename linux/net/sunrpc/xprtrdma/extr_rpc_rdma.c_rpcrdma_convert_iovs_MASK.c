
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {unsigned int page_len; long page_base; int flags; TYPE_2__* tail; struct page** pages; TYPE_2__* head; } ;
struct TYPE_3__ {scalar_t__ ri_implicit_roundup; } ;
struct rpcrdma_xprt {TYPE_1__ rx_ia; } ;
struct rpcrdma_mr_seg {char* mr_offset; unsigned int mr_len; struct page* mr_page; } ;
struct page {int dummy; } ;
typedef enum rpcrdma_chunktype { ____Placeholder_rpcrdma_chunktype } rpcrdma_chunktype ;
struct TYPE_4__ {scalar_t__ iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct page* FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,scalar_t__,unsigned int) ;
 unsigned long FUNC_2 (long) ;
 struct rpcrdma_mr_seg* FUNC_3 (TYPE_2__*,struct rpcrdma_mr_seg*,unsigned int*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct rpcrdma_xprt *VAR_11, struct xdr_buf *VAR_12,
       unsigned int VAR_13, enum rpcrdma_chunktype VAR_14,
       struct rpcrdma_mr_seg *VAR_15)
{
 unsigned long VAR_16;
 unsigned int VAR_17, VAR_18;
 struct page **VAR_19;

 VAR_18 = 0;
 if (VAR_13 == 0)
  VAR_15 = FUNC_3(&VAR_12->head[0], VAR_15, &VAR_18);

 VAR_17 = VAR_12->page_len;
 VAR_19 = VAR_12->pages + (VAR_12->page_base >> VAR_3);
 VAR_16 = FUNC_2(VAR_12->page_base);
 while (VAR_17) {



  if (FUNC_4(VAR_12->flags & VAR_6)) {
   if (!*VAR_19)
    *VAR_19 = FUNC_0(VAR_2 | VAR_7);
   if (!*VAR_19)
    return -VAR_1;
  }
  VAR_15->mr_page = *VAR_19;
  VAR_15->mr_offset = (char *)VAR_16;
  VAR_15->mr_len = FUNC_1(VAR_10, VAR_4 - VAR_16, VAR_17);
  VAR_17 -= VAR_15->mr_len;
  ++VAR_19;
  ++VAR_15;
  ++VAR_18;
  VAR_16 = 0;
 }




 if (VAR_14 == VAR_8 && VAR_11->rx_ia.ri_implicit_roundup)
  goto out;






 if (VAR_14 == VAR_9 && VAR_11->rx_ia.ri_implicit_roundup)
  goto out;

 if (VAR_12->tail[0].iov_len)
  VAR_15 = FUNC_3(&VAR_12->tail[0], VAR_15, &VAR_18);

out:
 if (FUNC_4(VAR_18 > VAR_5))
  return -VAR_0;
 return VAR_18;
}

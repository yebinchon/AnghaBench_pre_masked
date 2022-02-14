
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_buf {int page_len; int page_base; TYPE_2__* tail; struct page** pages; TYPE_1__* head; } ;
struct rpcrdma_xprt {int dummy; } ;
struct TYPE_6__ {unsigned int num_sge; } ;
struct rpcrdma_sendctx {scalar_t__ sc_unmap_count; TYPE_3__ sc_wr; int sc_device; struct ib_sge* sc_sges; } ;
struct rpcrdma_req {int rl_kref; struct rpcrdma_regbuf* rl_sendbuf; struct rpcrdma_sendctx* rl_sendctx; } ;
struct rpcrdma_regbuf {int dummy; } ;
struct page {int dummy; } ;
struct ib_sge {unsigned int length; void* addr; void* lkey; } ;
typedef enum rpcrdma_chunktype { ____Placeholder_rpcrdma_chunktype } rpcrdma_chunktype ;
struct TYPE_5__ {unsigned int iov_len; int iov_base; } ;
struct TYPE_4__ {unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,struct page*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,unsigned int,int ) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int ,scalar_t__,unsigned int) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 void* FUNC_7 (struct rpcrdma_regbuf*) ;
 int FUNC_8 (struct rpcrdma_regbuf*) ;
 void* FUNC_9 (struct rpcrdma_regbuf*) ;
 int VAR_4 ;
 int FUNC_10 (struct rpcrdma_xprt*,struct rpcrdma_regbuf*) ;
 int FUNC_11 (struct rpcrdma_sendctx*) ;
 int FUNC_12 (void*) ;
 int VAR_5 ;
 struct page* FUNC_13 (int) ;

__attribute__((used)) static bool FUNC_14(struct rpcrdma_xprt *VAR_6,
         struct rpcrdma_req *VAR_7,
         struct xdr_buf *VAR_8,
         enum rpcrdma_chunktype VAR_9)
{
 struct rpcrdma_sendctx *VAR_10 = VAR_7->rl_sendctx;
 unsigned int VAR_11, VAR_12, VAR_13, VAR_14;
 struct rpcrdma_regbuf *VAR_15 = VAR_7->rl_sendbuf;
 struct ib_sge *VAR_16 = VAR_10->sc_sges;
 struct page *VAR_17, **VAR_18;




 if (!FUNC_10(VAR_6, VAR_15))
  goto out_regbuf;
 VAR_10->sc_device = FUNC_8(VAR_15);
 VAR_11 = 1;
 VAR_16[VAR_11].addr = FUNC_7(VAR_15);
 VAR_16[VAR_11].length = VAR_8->head[0].iov_len;
 VAR_16[VAR_11].lkey = FUNC_9(VAR_15);
 FUNC_2(FUNC_8(VAR_15), VAR_16[VAR_11].addr,
          VAR_16[VAR_11].length, VAR_0);







 if (VAR_9 == VAR_4) {
  VAR_13 = VAR_8->tail[0].iov_len;


  if (VAR_13 < 4)
   goto out;

  VAR_17 = FUNC_13(VAR_8->tail[0].iov_base);
  VAR_12 = FUNC_5(VAR_8->tail[0].iov_base);






  VAR_12 += VAR_13 & 3;
  VAR_13 -= VAR_13 & 3;
  goto map_tail;
 }




 if (VAR_8->page_len) {
  VAR_18 = VAR_8->pages + (VAR_8->page_base >> VAR_1);
  VAR_12 = FUNC_5(VAR_8->page_base);
  VAR_14 = VAR_8->page_len;
  while (VAR_14) {
   VAR_11++;
   if (VAR_11 > VAR_3 - 2)
    goto out_mapping_overflow;

   VAR_13 = FUNC_4(VAR_5, VAR_2 - VAR_12, VAR_14);
   VAR_16[VAR_11].addr =
    FUNC_0(FUNC_8(VAR_15), *VAR_18,
      VAR_12, VAR_13, VAR_0);
   if (FUNC_1(FUNC_8(VAR_15),
       VAR_16[VAR_11].addr))
    goto out_mapping_err;
   VAR_16[VAR_11].length = VAR_13;
   VAR_16[VAR_11].lkey = FUNC_9(VAR_15);

   VAR_10->sc_unmap_count++;
   VAR_18++;
   VAR_14 -= VAR_13;
   VAR_12 = 0;
  }
 }






 if (VAR_8->tail[0].iov_len) {
  VAR_17 = FUNC_13(VAR_8->tail[0].iov_base);
  VAR_12 = FUNC_5(VAR_8->tail[0].iov_base);
  VAR_13 = VAR_8->tail[0].iov_len;

map_tail:
  VAR_11++;
  VAR_16[VAR_11].addr =
   FUNC_0(FUNC_8(VAR_15), VAR_17, VAR_12, VAR_13,
     VAR_0);
  if (FUNC_1(FUNC_8(VAR_15), VAR_16[VAR_11].addr))
   goto out_mapping_err;
  VAR_16[VAR_11].length = VAR_13;
  VAR_16[VAR_11].lkey = FUNC_9(VAR_15);
  VAR_10->sc_unmap_count++;
 }

out:
 VAR_10->sc_wr.num_sge += VAR_11;
 if (VAR_10->sc_unmap_count)
  FUNC_3(&VAR_7->rl_kref);
 return 1;

out_regbuf:
 FUNC_6("rpcrdma: failed to DMA map a Send buffer\n");
 return 0;

out_mapping_overflow:
 FUNC_11(VAR_10);
 FUNC_6("rpcrdma: too many Send SGEs (%u)\n", VAR_11);
 return 0;

out_mapping_err:
 FUNC_11(VAR_10);
 FUNC_12(VAR_16[VAR_11].addr);
 return 0;
}

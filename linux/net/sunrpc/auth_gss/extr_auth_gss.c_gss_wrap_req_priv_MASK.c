
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct xdr_buf {int page_base; scalar_t__ len; scalar_t__ buflen; struct kvec* head; struct kvec* tail; scalar_t__ page_len; struct page** pages; } ;
struct rpc_task {struct rpc_rqst* tk_rqstp; } ;
struct rpc_rqst {scalar_t__ rq_seqno; int rq_enc_pages_num; struct page** rq_enc_pages; struct xdr_buf rq_snd_buf; } ;
struct rpc_cred {int cr_flags; } ;
struct page {int dummy; } ;
struct kvec {int iov_len; char* iov_base; } ;
struct gss_cl_ctx {int gc_gss_ctx; } ;
typedef char __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rpc_rqst*) ;
 int FUNC_1 (int ,int *) ;
 char FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,struct xdr_buf*,struct page**) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 char* FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct rpc_task*,struct xdr_stream*) ;
 int FUNC_8 (struct rpc_task*,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 char* FUNC_10 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_11(struct rpc_cred *VAR_4, struct gss_cl_ctx *VAR_5,
        struct rpc_task *VAR_6, struct xdr_stream *VAR_7)
{
 struct rpc_rqst *VAR_8 = VAR_6->tk_rqstp;
 struct xdr_buf *VAR_9 = &VAR_8->rq_snd_buf;
 u32 VAR_10, VAR_11, VAR_12;
 int VAR_13;
 __be32 *VAR_14, *VAR_15;
 struct page **VAR_16;
 int VAR_17;
 struct kvec *VAR_18;

 VAR_13 = -VAR_0;
 VAR_14 = FUNC_10(VAR_7, 2 * sizeof(*VAR_14));
 if (!VAR_14)
  goto wrap_failed;
 VAR_15 = VAR_14++;
 *VAR_14 = FUNC_2(VAR_8->rq_seqno);

 if (FUNC_7(VAR_6, VAR_7))
  goto wrap_failed;

 VAR_13 = FUNC_0(VAR_8);
 if (FUNC_9(VAR_13))
  goto wrap_failed;
 VAR_17 = VAR_9->page_base >> VAR_2;
 VAR_16 = VAR_9->pages + VAR_17;
 VAR_9->pages = VAR_8->rq_enc_pages;
 VAR_9->page_base -= VAR_17 << VAR_2;






 if (VAR_9->page_len || VAR_9->tail[0].iov_len) {
  char *VAR_19;

  VAR_19 = FUNC_6(VAR_8->rq_enc_pages[VAR_8->rq_enc_pages_num - 1]);
  FUNC_4(VAR_19, VAR_9->tail[0].iov_base, VAR_9->tail[0].iov_len);
  VAR_9->tail[0].iov_base = VAR_19;
 }
 VAR_11 = (u8 *)VAR_14 - (u8 *)VAR_9->head[0].iov_base;
 VAR_12 = FUNC_3(VAR_5->gc_gss_ctx, VAR_11, VAR_9, VAR_16);

 if (FUNC_9(VAR_9->len > VAR_9->buflen))
  goto wrap_failed;


 if (VAR_12 == VAR_1)
  FUNC_1(VAR_3, &VAR_4->cr_flags);
 else if (VAR_12)
  goto bad_wrap;

 *VAR_15 = FUNC_2(VAR_9->len - VAR_11);

 if (VAR_9->page_len || VAR_9->tail[0].iov_len)
  VAR_18 = VAR_9->tail;
 else
  VAR_18 = VAR_9->head;
 VAR_14 = VAR_18->iov_base + VAR_18->iov_len;
 VAR_10 = 3 - ((VAR_9->len - VAR_11 - 1) & 3);
 FUNC_5(VAR_14, 0, VAR_10);
 VAR_18->iov_len += VAR_10;
 VAR_9->len += VAR_10;

 return 0;
wrap_failed:
 return VAR_13;
bad_wrap:
 FUNC_8(VAR_6, VAR_12);
 return -VAR_0;
}

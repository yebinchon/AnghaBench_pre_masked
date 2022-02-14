
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct xdr_buf {int len; TYPE_3__* tail; TYPE_1__* head; struct page** pages; } ;
struct svc_rqst {struct xdr_buf rq_res; scalar_t__ rq_auth_data; } ;
struct rpc_gss_wire_cred {int gc_seq; } ;
struct page {int dummy; } ;
struct gss_svc_data {TYPE_2__* rsci; struct rpc_gss_wire_cred clcred; } ;
typedef void* __be32 ;
struct TYPE_6__ {int iov_len; int * iov_base; } ;
struct TYPE_5__ {int mechctx; } ;
struct TYPE_4__ {int iov_len; int * iov_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int,struct xdr_buf*,struct page**) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (void**,int ,int) ;
 void** FUNC_5 (struct xdr_buf*,struct gss_svc_data*) ;

__attribute__((used)) static inline int
FUNC_6(struct svc_rqst *VAR_3)
{
 struct gss_svc_data *VAR_4 = (struct gss_svc_data *)VAR_3->rq_auth_data;
 struct rpc_gss_wire_cred *VAR_5 = &VAR_4->clcred;
 struct xdr_buf *VAR_6 = &VAR_3->rq_res;
 struct page **VAR_7 = ((void*)0);
 __be32 *VAR_8, *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_5(VAR_6, VAR_4);
 if (VAR_8 == ((void*)0))
  return 0;
 VAR_9 = VAR_8++;
 VAR_10 = (u8 *)VAR_8 - (u8 *)VAR_6->head[0].iov_base;
 *VAR_8++ = FUNC_2(VAR_5->gc_seq);
 VAR_7 = VAR_6->pages;
 if (VAR_6->tail[0].iov_base) {
  FUNC_0(VAR_6->tail[0].iov_base >= VAR_6->head[0].iov_base
       + VAR_1);
  FUNC_0(VAR_6->tail[0].iov_base < VAR_6->head[0].iov_base);
  if (VAR_6->tail[0].iov_len + VAR_6->head[0].iov_len
    + 2 * VAR_2 > VAR_1)
   return -VAR_0;
  FUNC_3(VAR_6->tail[0].iov_base + VAR_2,
   VAR_6->tail[0].iov_base,
   VAR_6->tail[0].iov_len);
  VAR_6->tail[0].iov_base += VAR_2;
 }







 if (VAR_6->tail[0].iov_base == ((void*)0)) {
  if (VAR_6->head[0].iov_len + 2*VAR_2 > VAR_1)
   return -VAR_0;
  VAR_6->tail[0].iov_base = VAR_6->head[0].iov_base
   + VAR_6->head[0].iov_len + VAR_2;
  VAR_6->tail[0].iov_len = 0;
 }
 if (FUNC_1(VAR_4->rsci->mechctx, VAR_10, VAR_6, VAR_7))
  return -VAR_0;
 *VAR_9 = FUNC_2(VAR_6->len - VAR_10);
 VAR_11 = 3 - ((VAR_6->len - VAR_10 - 1)&3);
 VAR_8 = (__be32 *)(VAR_6->tail[0].iov_base + VAR_6->tail[0].iov_len);
 FUNC_4(VAR_8, 0, VAR_11);
 VAR_6->tail[0].iov_len += VAR_11;
 VAR_6->len += VAR_11;
 return 0;
}

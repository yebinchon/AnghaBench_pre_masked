
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct xdr_netobj {scalar_t__ len; int * data; } ;
struct xdr_buf {int dummy; } ;
struct TYPE_3__ {TYPE_2__* head; } ;
struct svc_rqst {TYPE_1__ rq_res; } ;
struct kvec {int iov_len; void** iov_base; } ;
struct gss_ctx {int dummy; } ;
typedef void* __be32 ;
struct TYPE_4__ {int iov_len; void** iov_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct gss_ctx*,struct xdr_buf*,struct xdr_netobj*) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (void**) ;
 void** FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (struct kvec*,struct xdr_buf*) ;
 int FUNC_9 (struct svc_rqst*,void**) ;

__attribute__((used)) static int
FUNC_10(struct svc_rqst *VAR_3, struct gss_ctx *VAR_4, u32 VAR_5)
{
 __be32 *VAR_6;
 u32 VAR_7;
 struct xdr_buf VAR_8;
 struct xdr_netobj VAR_9;
 __be32 *VAR_10;
 struct kvec VAR_11;
 int VAR_12 = -1;

 FUNC_7(VAR_3->rq_res.head, VAR_2);
 VAR_6 = FUNC_4(4, VAR_0);
 if (!VAR_6)
  return -1;
 *VAR_6 = FUNC_2(VAR_5);

 VAR_11.iov_base = VAR_6;
 VAR_11.iov_len = 4;
 FUNC_8(&VAR_11, &VAR_8);
 VAR_10 = VAR_3->rq_res.head->iov_base + VAR_3->rq_res.head->iov_len;
 VAR_9.data = (u8 *)(VAR_10 + 1);
 VAR_7 = FUNC_1(VAR_4, &VAR_8, &VAR_9);
 if (VAR_7 != VAR_1)
  goto out;
 *VAR_10++ = FUNC_2(VAR_9.len);
 FUNC_5((u8 *)VAR_10 + VAR_9.len, 0, FUNC_6(VAR_9.len) - VAR_9.len);
 VAR_10 += FUNC_0(VAR_9.len);
 if (!FUNC_9(VAR_3, VAR_10))
  goto out;
 VAR_12 = 0;
out:
 FUNC_3(VAR_6);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_netobj {scalar_t__ len; int data; } ;
struct xdr_buf {int len; int * head; } ;
struct svc_rqst {scalar_t__ rq_deferred; int rq_flags; } ;
struct gss_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct gss_ctx*,struct xdr_buf*,struct xdr_netobj*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct xdr_buf*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct xdr_buf*,int,scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct xdr_buf*,struct xdr_buf*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct svc_rqst *VAR_5, struct xdr_buf *VAR_6, u32 VAR_7, struct gss_ctx *VAR_8)
{
 int VAR_9 = -VAR_0;
 u32 VAR_10, VAR_11;
 struct xdr_netobj VAR_12;
 struct xdr_buf VAR_13;







 FUNC_1(VAR_4, &VAR_5->rq_flags);


 if (VAR_5->rq_deferred)
  return 0;

 VAR_10 = FUNC_8(&VAR_6->head[0]);
 if (VAR_10 & 3)
  return VAR_9;
 if (VAR_10 > VAR_6->len)
  return VAR_9;
 if (FUNC_9(VAR_6, &VAR_13, 0, VAR_10)) {
  FUNC_0(1);
  return VAR_9;
 }

 if (FUNC_6(VAR_6, VAR_10, &VAR_12.len))
  return VAR_9;
 if (VAR_12.len > VAR_3)
  return VAR_9;
 VAR_12.data = FUNC_4(VAR_12.len, VAR_1);
 if (!VAR_12.data)
  return VAR_9;
 if (FUNC_5(VAR_6, VAR_10 + 4, VAR_12.data, VAR_12.len))
  goto out;
 VAR_11 = FUNC_2(VAR_8, &VAR_13, &VAR_12);
 if (VAR_11 != VAR_2)
  goto out;
 if (FUNC_8(&VAR_6->head[0]) != VAR_7)
  goto out;

 VAR_6->len -= 4 + FUNC_7(VAR_12.len);
 VAR_9 = 0;
out:
 FUNC_3(VAR_12.data);
 return VAR_9;
}

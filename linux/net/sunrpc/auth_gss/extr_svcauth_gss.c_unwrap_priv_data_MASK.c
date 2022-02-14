
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_buf {int len; TYPE_1__* head; int buflen; } ;
struct svc_rqst {scalar_t__ rq_deferred; int rq_flags; } ;
struct gss_ctx {int dummy; } ;
struct TYPE_2__ {int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct xdr_buf*,int) ;
 int FUNC_2 (struct gss_ctx*,int ,struct xdr_buf*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct xdr_buf*) ;
 int FUNC_5 (struct xdr_buf*,int) ;

__attribute__((used)) static int
FUNC_6(struct svc_rqst *VAR_4, struct xdr_buf *VAR_5, u32 VAR_6, struct gss_ctx *VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;

 FUNC_0(VAR_3, &VAR_4->rq_flags);

 VAR_8 = FUNC_3(&VAR_5->head[0]);
 if (VAR_4->rq_deferred) {


  goto out_seq;
 }



 VAR_12 = FUNC_4(VAR_5);
 if (VAR_8 > VAR_12)
  return -VAR_0;
 VAR_10 = VAR_12 - VAR_8;
 VAR_5->len -= VAR_10;
 FUNC_1(VAR_5, VAR_10);


 VAR_11 = VAR_5->len;
 VAR_5->len = VAR_8;
 VAR_9 = FUNC_2(VAR_7, 0, VAR_5);
 VAR_10 = VAR_8 - VAR_5->len;
 VAR_5->len = VAR_11;
 VAR_5->len -= VAR_10;






 VAR_13 = VAR_5->head[0].iov_len % 4;
 if (VAR_13) {
  VAR_5->buflen = VAR_2;
  FUNC_5(VAR_5, VAR_13);
  FUNC_1(VAR_5, VAR_10);
 }
 if (VAR_9 != VAR_1)
  return -VAR_0;
out_seq:
 if (FUNC_3(&VAR_5->head[0]) != VAR_6)
  return -VAR_0;
 return 0;
}

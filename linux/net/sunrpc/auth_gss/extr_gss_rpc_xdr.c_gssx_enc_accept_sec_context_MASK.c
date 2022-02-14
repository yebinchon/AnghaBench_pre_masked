
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct rpc_rqst {TYPE_1__ rq_rcv_buf; } ;
struct gssx_arg_accept_sec_context {int npages; int pages; int options; int ret_deleg_cred; scalar_t__ input_cb; int input_token; scalar_t__ cred_handle; scalar_t__ context_handle; int call_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 int FUNC_3 (struct xdr_stream*,int *) ;
 int FUNC_4 (struct xdr_stream*,scalar_t__) ;
 int FUNC_5 (struct xdr_stream*,scalar_t__) ;
 int FUNC_6 (struct xdr_stream*,scalar_t__) ;
 int FUNC_7 (struct xdr_stream*,int *) ;
 int FUNC_8 (TYPE_1__*,int,int ,int ,int) ;

void FUNC_9(struct rpc_rqst *VAR_2,
     struct xdr_stream *VAR_3,
     const void *VAR_4)
{
 const struct gssx_arg_accept_sec_context *VAR_5 = VAR_4;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, &VAR_5->call_ctx);
 if (VAR_6)
  goto done;


 if (VAR_5->context_handle)
  VAR_6 = FUNC_6(VAR_3, VAR_5->context_handle);
 else
  VAR_6 = FUNC_2(VAR_3, 0);
 if (VAR_6)
  goto done;


 if (VAR_5->cred_handle)
  VAR_6 = FUNC_5(VAR_3, VAR_5->cred_handle);
 else
  VAR_6 = FUNC_2(VAR_3, 0);
 if (VAR_6)
  goto done;


 VAR_6 = FUNC_7(VAR_3, &VAR_5->input_token);
 if (VAR_6)
  goto done;


 if (VAR_5->input_cb)
  VAR_6 = FUNC_4(VAR_3, VAR_5->input_cb);
 else
  VAR_6 = FUNC_2(VAR_3, 0);
 if (VAR_6)
  goto done;

 VAR_6 = FUNC_2(VAR_3, VAR_5->ret_deleg_cred);
 if (VAR_6)
  goto done;




 VAR_6 = FUNC_1(VAR_3, &VAR_5->options);

 FUNC_8(&VAR_2->rq_rcv_buf,
  VAR_0/2 ,
  VAR_5->pages, 0 , VAR_5->npages * VAR_0);
 VAR_2->rq_rcv_buf.flags |= VAR_1;
done:
 if (VAR_6)
  FUNC_0("RPC:       gssx_enc_accept_sec_context: %d\n", VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct rpc_rqst {int dummy; } ;
struct page {int dummy; } ;
struct gssx_res_accept_sec_context {int options; int * output_token; int * context_handle; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct xdr_stream*,scalar_t__*) ;
 int FUNC_3 (struct xdr_stream*,int *) ;
 int FUNC_4 (struct xdr_stream*,int *) ;
 int FUNC_5 (struct xdr_stream*,int *) ;
 int FUNC_6 (struct xdr_stream*,int *) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct xdr_stream*,int ,int ) ;

int FUNC_9(struct rpc_rqst *VAR_4,
    struct xdr_stream *VAR_5,
    void *VAR_6)
{
 struct gssx_res_accept_sec_context *VAR_7 = VAR_6;
 u32 VAR_8;
 int VAR_9;
 struct page *VAR_10;

 VAR_10 = FUNC_1(VAR_2);
 if (!VAR_10)
  return -VAR_1;
 FUNC_8(VAR_5, FUNC_7(VAR_10), VAR_3);


 VAR_9 = FUNC_6(VAR_5, &VAR_7->status);
 if (VAR_9)
  goto out_free;


 VAR_9 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_9)
  goto out_free;
 if (VAR_8) {
  VAR_9 = FUNC_4(VAR_5, VAR_7->context_handle);
  if (VAR_9)
   goto out_free;
 } else {
  VAR_7->context_handle = ((void*)0);
 }


 VAR_9 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_9)
  goto out_free;
 if (VAR_8) {
  VAR_9 = FUNC_3(VAR_5, VAR_7->output_token);
  if (VAR_9)
   goto out_free;
 } else {
  VAR_7->output_token = ((void*)0);
 }


 VAR_9 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_9)
  goto out_free;
 if (VAR_8) {

  VAR_9 = -VAR_0;
  goto out_free;
 }


 VAR_9 = FUNC_5(VAR_5, &VAR_7->options);

out_free:
 FUNC_0(VAR_10);
 return VAR_9;
}

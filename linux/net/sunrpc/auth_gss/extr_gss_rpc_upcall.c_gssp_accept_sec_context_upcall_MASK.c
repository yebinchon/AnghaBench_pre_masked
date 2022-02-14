
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct xdr_netobj {TYPE_11__* data; int * member_1; int member_0; int len; } ;
struct svc_cred {void* cr_targ_princ; void* cr_principal; void* cr_raw_principal; } ;
struct rpc_message {int * rpc_cred; struct gssx_res_accept_sec_context* rpc_resp; struct gssx_arg_accept_sec_context* rpc_argp; int * rpc_proc; } ;
struct net {int dummy; } ;
struct TYPE_23__ {int count; TYPE_11__* data; } ;
struct TYPE_17__ {int minor_status; int major_status; } ;
struct gssx_res_accept_sec_context {TYPE_9__ options; struct gssx_ctx* context_handle; TYPE_3__ status; TYPE_2__* output_token; } ;
struct TYPE_22__ {struct xdr_netobj display_name; } ;
struct TYPE_21__ {struct xdr_netobj display_name; } ;
struct TYPE_20__ {TYPE_11__* data; int len; } ;
struct TYPE_18__ {int len; } ;
struct TYPE_15__ {scalar_t__ len; } ;
struct gssx_ctx {TYPE_8__ targ_name; TYPE_7__ src_name; TYPE_6__ mech; TYPE_4__ exported_context_token; TYPE_1__ state; } ;
struct gssx_arg_accept_sec_context {struct gssx_ctx* context_handle; int input_token; } ;
struct TYPE_19__ {int len; int data; } ;
struct TYPE_16__ {int len; } ;
struct gssp_upcall_data {int found_creds; struct svc_cred creds; TYPE_5__ mech_oid; TYPE_4__ out_handle; int minor_status; int major_status; TYPE_1__ in_handle; TYPE_2__ out_token; int in_token; } ;
struct TYPE_13__ {int len; TYPE_11__* data; } ;
typedef TYPE_10__ gssx_buffer ;
struct TYPE_14__ {TYPE_10__ value; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gssx_arg_accept_sec_context*) ;
 int FUNC_1 (struct net*,struct rpc_message*) ;
 int FUNC_2 (struct gssx_arg_accept_sec_context*) ;
 int FUNC_3 (void**) ;
 int * VAR_5 ;
 void* FUNC_4 (struct xdr_netobj*) ;
 int FUNC_5 (TYPE_11__*) ;
 int FUNC_6 (int ,TYPE_11__*,int ) ;

int FUNC_7(struct net *VAR_6,
    struct gssp_upcall_data *VAR_7)
{
 struct gssx_ctx VAR_8 = {
  .state = VAR_7->in_handle
 };
 struct gssx_arg_accept_sec_context VAR_9 = {
  .input_token = VAR_7->in_token,
 };
 struct gssx_ctx VAR_10 = {




  .exported_context_token.len = VAR_1,
  .mech.len = VAR_4,
  .targ_name.display_name.len = VAR_3,
  .src_name.display_name.len = VAR_3
 };
 struct gssx_res_accept_sec_context VAR_11 = {
  .context_handle = &VAR_10,
  .output_token = &VAR_7->out_token
 };
 struct rpc_message VAR_12 = {
  .rpc_proc = &VAR_5[VAR_0],
  .rpc_argp = &VAR_9,
  .rpc_resp = &VAR_11,
  .rpc_cred = ((void*)0),
 };
 struct xdr_netobj VAR_13 = { 0 , ((void*)0) };
 struct xdr_netobj VAR_14 = { 0, ((void*)0) };
 int VAR_15;

 if (VAR_7->in_handle.len != 0)
  VAR_9.context_handle = &VAR_8;
 VAR_11.output_token->len = VAR_2;

 VAR_15 = FUNC_0(&VAR_9);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_1(VAR_6, &VAR_12);

 FUNC_2(&VAR_9);



 VAR_7->major_status = VAR_11.status.major_status;
 VAR_7->minor_status = VAR_11.status.minor_status;
 if (VAR_11.context_handle) {
  VAR_7->out_handle = VAR_10.exported_context_token;
  VAR_7->mech_oid.len = VAR_10.mech.len;
  if (VAR_10.mech.data) {
   FUNC_6(VAR_7->mech_oid.data, VAR_10.mech.data,
      VAR_7->mech_oid.len);
   FUNC_5(VAR_10.mech.data);
  }
  VAR_13 = VAR_10.src_name.display_name;
  VAR_14 = VAR_10.targ_name.display_name;
 }

 if (VAR_11.options.count == 1) {
  gssx_buffer *VAR_16 = &VAR_11.options.data[0].value;



  if (VAR_16->len == 1) {

   VAR_7->creds = *(struct svc_cred *)VAR_16->data;
   VAR_7->found_creds = 1;
  }

  FUNC_5(VAR_16->data);
 }

 if (VAR_11.options.count != 0) {
  FUNC_5(VAR_11.options.data);
 }


 if (VAR_7->found_creds) {
  if (VAR_13.data) {
   VAR_7->creds.cr_raw_principal =
     FUNC_4(&VAR_13);
   VAR_7->creds.cr_principal =
     FUNC_4(&VAR_13);
   FUNC_3(&VAR_7->creds.cr_principal);
  }
  if (VAR_14.data) {
   VAR_7->creds.cr_targ_princ =
     FUNC_4(&VAR_14);
   FUNC_3(&VAR_7->creds.cr_targ_princ);
  }
 }
 FUNC_5(VAR_13.data);
 FUNC_5(VAR_14.data);

 return VAR_15;
}

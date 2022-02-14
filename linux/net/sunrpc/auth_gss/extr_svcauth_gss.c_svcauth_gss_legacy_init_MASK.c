
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct kvec* head; } ;
struct TYPE_3__ {struct kvec* head; } ;
struct svc_rqst {int rq_chandle; TYPE_2__ rq_res; TYPE_1__ rq_arg; } ;
struct sunrpc_net {int rsi_cache; int rsc_cache; } ;
struct rsi {int h; int minor_status; int major_status; int out_token; int out_handle; int in_token; int in_handle; } ;
struct rpc_gss_wire_cred {int dummy; } ;
struct kvec {int dummy; } ;
typedef int rsikey ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct svc_rqst*) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct rpc_gss_wire_cred*,struct kvec*,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,struct svc_rqst*,int *,int *) ;
 scalar_t__ FUNC_5 (struct kvec*,int ,int *,int *,int ,int ) ;
 int FUNC_6 (struct rsi*,int ,int) ;
 struct sunrpc_net* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct rsi*) ;
 struct rsi* FUNC_9 (int ,struct rsi*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct svc_rqst *VAR_4,
   struct rpc_gss_wire_cred *VAR_5, __be32 *VAR_6)
{
 struct kvec *VAR_7 = &VAR_4->rq_arg.head[0];
 struct kvec *VAR_8 = &VAR_4->rq_res.head[0];
 struct rsi *VAR_9, VAR_10;
 int VAR_11;
 struct sunrpc_net *VAR_12 = FUNC_7(FUNC_0(VAR_4), VAR_3);

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_11 = FUNC_3(VAR_5, VAR_7, VAR_6,
       &VAR_10.in_handle, &VAR_10.in_token);
 if (VAR_11)
  return VAR_11;


 VAR_9 = FUNC_9(VAR_12->rsi_cache, &VAR_10);
 FUNC_8(&VAR_10);
 if (!VAR_9)
  return VAR_1;
 if (FUNC_1(VAR_12->rsi_cache, &VAR_9->h, &VAR_4->rq_chandle) < 0)

  return VAR_1;

 VAR_11 = VAR_1;

 if (FUNC_4(VAR_12->rsc_cache, VAR_4,
    &VAR_9->out_handle, &VAR_9->major_status))
  goto out;
 if (FUNC_5(VAR_8, VAR_0,
      &VAR_9->out_handle, &VAR_9->out_token,
      VAR_9->major_status, VAR_9->minor_status))
  goto out;

 VAR_11 = VAR_2;
out:
 FUNC_2(&VAR_9->h, VAR_12->rsi_cache);
 return VAR_11;
}

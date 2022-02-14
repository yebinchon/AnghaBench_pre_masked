
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gss_upcall_msg {int service_name; struct gss_auth* auth; int uid; int count; int waitqueue; int rpc_waitqueue; int list; int pipe; } ;
struct gss_auth {int net; int kref; TYPE_1__** gss_pipe; } ;
typedef int kuid_t ;
struct TYPE_2__ {int pipe; } ;


 int VAR_0 ;
 struct gss_upcall_msg* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gss_upcall_msg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int ) ;
 struct gss_upcall_msg* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static struct gss_upcall_msg *
FUNC_11(struct gss_auth *VAR_2,
  kuid_t VAR_3, const char *VAR_4)
{
 struct gss_upcall_msg *VAR_5;
 int VAR_6;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_1);
 if (VAR_5 == ((void*)0))
  goto err;
 VAR_6 = FUNC_2(VAR_2->net);
 VAR_7 = VAR_6;
 if (VAR_7 < 0)
  goto err_free_msg;
 VAR_5->pipe = VAR_2->gss_pipe[VAR_6]->pipe;
 FUNC_1(&VAR_5->list);
 FUNC_10(&VAR_5->rpc_waitqueue, "RPCSEC_GSS upcall waitq");
 FUNC_3(&VAR_5->waitqueue);
 FUNC_9(&VAR_5->count, 1);
 VAR_5->uid = VAR_3;
 VAR_5->auth = VAR_2;
 FUNC_5(&VAR_2->kref);
 if (VAR_4) {
  VAR_5->service_name = FUNC_6(VAR_4, VAR_1);
  if (!VAR_5->service_name) {
   VAR_7 = -VAR_0;
   goto err_put_pipe_version;
  }
 }
 return VAR_5;
err_put_pipe_version:
 FUNC_8(VAR_2->net);
err_free_msg:
 FUNC_4(VAR_5);
err:
 return FUNC_0(VAR_7);
}

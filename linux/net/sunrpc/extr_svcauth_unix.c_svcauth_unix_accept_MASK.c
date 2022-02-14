
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct user_namespace {int dummy; } ;
struct svc_cred {int cr_flavor; TYPE_5__* cr_group_info; void* cr_gid; int cr_uid; } ;
struct TYPE_8__ {struct kvec* head; } ;
struct TYPE_7__ {struct kvec* head; } ;
struct svc_rqst {struct svc_cred rq_cred; TYPE_4__* rq_xprt; TYPE_2__ rq_res; TYPE_1__ rq_arg; } ;
struct kvec {int iov_len; void* iov_base; } ;
typedef void* kgid_t ;
typedef int __be32 ;
struct TYPE_11__ {void** gid; } ;
struct TYPE_10__ {TYPE_3__* xpt_cred; } ;
struct TYPE_9__ {struct user_namespace* user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_5__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ) ;
 struct user_namespace VAR_7 ;
 void* FUNC_4 (struct user_namespace*,int) ;
 int FUNC_5 (struct user_namespace*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct kvec*) ;
 scalar_t__ FUNC_7 (struct kvec*) ;
 int FUNC_8 (struct kvec*,int ) ;

__attribute__((used)) static int
FUNC_9(struct svc_rqst *VAR_10, __be32 *VAR_11)
{
 struct kvec *VAR_12 = &VAR_10->rq_arg.head[0];
 struct kvec *VAR_13 = &VAR_10->rq_res.head[0];
 struct svc_cred *VAR_14 = &VAR_10->rq_cred;
 struct user_namespace *VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18 = VAR_12->iov_len;

 if ((VAR_18 -= 3*4) < 0)
  return VAR_4;

 FUNC_7(VAR_12);
 FUNC_7(VAR_12);
 VAR_16 = FUNC_0(FUNC_6(VAR_12));
 if (VAR_16 > 64 || (VAR_18 -= (VAR_16 + 3)*4) < 0)
  goto badcred;
 VAR_12->iov_base = (void*)((__be32*)VAR_12->iov_base + VAR_16);
 VAR_12->iov_len -= VAR_16*4;







 VAR_15 = (VAR_10->rq_xprt && VAR_10->rq_xprt->xpt_cred) ?
  VAR_10->rq_xprt->xpt_cred->user_ns : &VAR_7;
 VAR_14->cr_uid = FUNC_5(VAR_15, FUNC_6(VAR_12));
 VAR_14->cr_gid = FUNC_4(VAR_15, FUNC_6(VAR_12));
 VAR_16 = FUNC_6(VAR_12);
 if (VAR_16 > VAR_6 || (VAR_18 -= (VAR_16 + 2)*4) < 0)
  goto badcred;
 VAR_14->cr_group_info = FUNC_1(VAR_16);
 if (VAR_14->cr_group_info == ((void*)0))
  return VAR_2;
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  kgid_t VAR_19 = FUNC_4(VAR_15, FUNC_6(VAR_12));
  VAR_14->cr_group_info->gid[VAR_17] = VAR_19;
 }
 FUNC_2(VAR_14->cr_group_info);
 if (FUNC_7(VAR_12) != FUNC_3(VAR_0) || FUNC_7(VAR_12) != 0) {
  *VAR_11 = VAR_9;
  return VAR_3;
 }


 FUNC_8(VAR_13, VAR_0);
 FUNC_8(VAR_13, 0);

 VAR_10->rq_cred.cr_flavor = VAR_1;
 return VAR_5;

badcred:
 *VAR_11 = VAR_8;
 return VAR_3;
}

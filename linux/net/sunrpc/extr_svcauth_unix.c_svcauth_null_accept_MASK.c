
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_cred {int cr_flavor; int * cr_group_info; int cr_gid; int cr_uid; } ;
struct TYPE_4__ {struct kvec* head; } ;
struct TYPE_3__ {struct kvec* head; } ;
struct svc_rqst {struct svc_cred rq_cred; TYPE_2__ rq_res; TYPE_1__ rq_arg; } ;
struct kvec {int iov_len; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct kvec*) ;
 int FUNC_4 (struct kvec*,int ) ;

__attribute__((used)) static int
FUNC_5(struct svc_rqst *VAR_9, __be32 *VAR_10)
{
 struct kvec *VAR_11 = &VAR_9->rq_arg.head[0];
 struct kvec *VAR_12 = &VAR_9->rq_res.head[0];
 struct svc_cred *VAR_13 = &VAR_9->rq_cred;

 if (VAR_11->iov_len < 3*4)
  return VAR_5;

 if (FUNC_3(VAR_11) != 0) {
  FUNC_0("svc: bad null cred\n");
  *VAR_10 = VAR_7;
  return VAR_4;
 }
 if (FUNC_3(VAR_11) != FUNC_2(VAR_2) || FUNC_3(VAR_11) != 0) {
  FUNC_0("svc: bad null verf\n");
  *VAR_10 = VAR_8;
  return VAR_4;
 }


 VAR_13->cr_uid = VAR_1;
 VAR_13->cr_gid = VAR_0;
 VAR_13->cr_group_info = FUNC_1(0);
 if (VAR_13->cr_group_info == ((void*)0))
  return VAR_3;


 FUNC_4(VAR_12, VAR_2);
 FUNC_4(VAR_12, 0);

 VAR_9->rq_cred.cr_flavor = VAR_2;
 return VAR_6;
}

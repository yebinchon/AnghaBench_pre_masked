
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct kvec* head; } ;
struct TYPE_3__ {struct kvec* head; } ;
struct svc_rqst {int rq_flags; struct svc_procedure* rq_procinfo; TYPE_2__ rq_res; TYPE_1__ rq_arg; } ;
struct svc_procedure {int (* pc_encode ) (struct svc_rqst*,scalar_t__) ;int (* pc_func ) (struct svc_rqst*) ;int (* pc_decode ) (struct svc_rqst*,scalar_t__) ;} ;
struct kvec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct svc_rqst*,scalar_t__) ;
 int FUNC_2 (struct svc_rqst*) ;
 int FUNC_3 (struct svc_rqst*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int
FUNC_5(struct svc_rqst *VAR_6, __be32 *VAR_7)
{
 struct kvec *VAR_8 = &VAR_6->rq_arg.head[0];
 struct kvec *VAR_9 = &VAR_6->rq_res.head[0];
 const struct svc_procedure *VAR_10 = VAR_6->rq_procinfo;





 if (VAR_10->pc_decode &&
     !VAR_10->pc_decode(VAR_6, VAR_8->iov_base)) {
  *VAR_7 = VAR_3;
  return 1;
 }

 *VAR_7 = VAR_10->pc_func(VAR_6);

 if (*VAR_7 == VAR_2 ||
     FUNC_4(VAR_1, &VAR_6->rq_flags))
  return 0;

 if (FUNC_4(VAR_0, &VAR_6->rq_flags))
  return 1;

 if (*VAR_7 != VAR_4)
  return 1;


 if (VAR_10->pc_encode &&
     !VAR_10->pc_encode(VAR_6, VAR_9->iov_base + VAR_9->iov_len)) {
  FUNC_0("svc: failed to encode reply\n");

  *VAR_7 = VAR_5;
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ target; scalar_t__ interval; scalar_t__ ce_threshold; int ecn; } ;
struct fq_codel_sched_data {TYPE_1__ cparams; int flows_cnt; int memory_limit; int drop_batch_size; int quantum; } ;
struct Qdisc {int limit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 struct fq_codel_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_11, struct sk_buff *VAR_12)
{
 struct fq_codel_sched_data *VAR_13 = FUNC_4(VAR_11);
 struct nlattr *VAR_14;

 VAR_14 = FUNC_2(VAR_12, VAR_10);
 if (VAR_14 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_3(VAR_12, VAR_9,
   FUNC_0(VAR_13->cparams.target)) ||
     FUNC_3(VAR_12, VAR_6,
   VAR_11->limit) ||
     FUNC_3(VAR_12, VAR_5,
   FUNC_0(VAR_13->cparams.interval)) ||
     FUNC_3(VAR_12, VAR_3,
   VAR_13->cparams.ecn) ||
     FUNC_3(VAR_12, VAR_8,
   VAR_13->quantum) ||
     FUNC_3(VAR_12, VAR_2,
   VAR_13->drop_batch_size) ||
     FUNC_3(VAR_12, VAR_7,
   VAR_13->memory_limit) ||
     FUNC_3(VAR_12, VAR_4,
   VAR_13->flows_cnt))
  goto nla_put_failure;

 if (VAR_13->cparams.ce_threshold != VAR_0 &&
     FUNC_3(VAR_12, VAR_1,
   FUNC_0(VAR_13->cparams.ce_threshold)))
  goto nla_put_failure;

 return FUNC_1(VAR_12, VAR_14);

nla_put_failure:
 return -1;
}

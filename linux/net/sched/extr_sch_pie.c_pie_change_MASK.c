
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {void* bytemode; void* ecn; void* beta; void* alpha; void* limit; int tupdate; int target; } ;
struct pie_sched_data {TYPE_1__ params; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {unsigned int qlen; } ;
struct Qdisc {unsigned int limit; TYPE_2__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 struct sk_buff* FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 struct pie_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_7 (struct Qdisc*,unsigned int,unsigned int) ;
 int FUNC_8 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (void*) ;

__attribute__((used)) static int FUNC_12(struct Qdisc *VAR_11, struct nlattr *VAR_12,
        struct netlink_ext_ack *VAR_13)
{
 struct pie_sched_data *VAR_14 = FUNC_5(VAR_11);
 struct nlattr *VAR_15[VAR_7 + 1];
 unsigned int VAR_16, VAR_17 = 0;
 int VAR_18;

 if (!VAR_12)
  return -VAR_0;

 VAR_18 = FUNC_3(VAR_15, VAR_7, VAR_12, VAR_10,
       ((void*)0));
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_9(VAR_11);


 if (VAR_15[VAR_8]) {

  u32 VAR_19 = FUNC_2(VAR_15[VAR_8]);


  VAR_14->params.target = FUNC_0((u64)VAR_19 * VAR_1);
 }


 if (VAR_15[VAR_9])
  VAR_14->params.tupdate =
   FUNC_11(FUNC_2(VAR_15[VAR_9]));

 if (VAR_15[VAR_6]) {
  u32 VAR_20 = FUNC_2(VAR_15[VAR_6]);

  VAR_14->params.limit = VAR_20;
  VAR_11->limit = VAR_20;
 }

 if (VAR_15[VAR_2])
  VAR_14->params.alpha = FUNC_2(VAR_15[VAR_2]);

 if (VAR_15[VAR_3])
  VAR_14->params.beta = FUNC_2(VAR_15[VAR_3]);

 if (VAR_15[VAR_5])
  VAR_14->params.ecn = FUNC_2(VAR_15[VAR_5]);

 if (VAR_15[VAR_4])
  VAR_14->params.bytemode = FUNC_2(VAR_15[VAR_4]);


 VAR_16 = VAR_11->q.qlen;
 while (VAR_11->q.qlen > VAR_11->limit) {
  struct sk_buff *VAR_21 = FUNC_1(&VAR_11->q);

  VAR_17 += FUNC_4(VAR_21);
  FUNC_6(VAR_11, VAR_21);
  FUNC_8(VAR_21, VAR_11);
 }
 FUNC_7(VAR_11, VAR_16 - VAR_11->q.qlen, VAR_17);

 FUNC_10(VAR_11);
 return 0;
}

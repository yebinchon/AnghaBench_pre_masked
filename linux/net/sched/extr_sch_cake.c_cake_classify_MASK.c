
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct tcf_result {int classid; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int dummy; } ;
struct cake_tin_data {int dummy; } ;
struct cake_sched_data {int filter_list; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct cake_tin_data*,struct sk_buff*,int,int,int) ;
 struct cake_tin_data* FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 struct cake_sched_data* FUNC_4 (struct Qdisc*) ;
 struct tcf_proto* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static u32 FUNC_7(struct Qdisc *VAR_4, struct cake_tin_data **VAR_5,
    struct sk_buff *VAR_6, int VAR_7, int *VAR_8)
{
 struct cake_sched_data *VAR_9 = FUNC_4(VAR_4);
 struct tcf_proto *VAR_10;
 struct tcf_result VAR_11;
 u16 VAR_12 = 0, VAR_13 = 0;
 int VAR_14;

 VAR_10 = FUNC_5(VAR_9->filter_list);
 if (!VAR_10)
  goto hash;

 *VAR_8 = VAR_1 | VAR_2;
 VAR_14 = FUNC_6(VAR_6, VAR_10, &VAR_11, 0);

 if (VAR_14 >= 0) {
  if (FUNC_1(VAR_11.classid) <= VAR_0)
   VAR_12 = FUNC_1(VAR_11.classid);
  if (FUNC_0(VAR_11.classid) <= (VAR_0 << 16))
   VAR_13 = FUNC_0(VAR_11.classid) >> 16;
 }
hash:
 *VAR_5 = FUNC_3(VAR_4, VAR_6);
 return FUNC_2(*VAR_5, VAR_6, VAR_7, VAR_12, VAR_13) + 1;
}

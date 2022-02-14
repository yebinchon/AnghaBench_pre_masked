
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int classid; scalar_t__ class; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int priority; } ;
struct drr_sched {int filter_list; } ;
struct drr_class {int dummy; } ;
struct Qdisc {int handle; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct drr_class* FUNC_1 (struct Qdisc*,int) ;
 struct drr_sched* FUNC_2 (struct Qdisc*) ;
 struct tcf_proto* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static struct drr_class *FUNC_5(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
          int *VAR_5)
{
 struct drr_sched *VAR_6 = FUNC_2(VAR_4);
 struct drr_class *VAR_7;
 struct tcf_result VAR_8;
 struct tcf_proto *VAR_9;
 int VAR_10;

 if (FUNC_0(VAR_3->priority ^ VAR_4->handle) == 0) {
  VAR_7 = FUNC_1(VAR_4, VAR_3->priority);
  if (VAR_7 != ((void*)0))
   return VAR_7;
 }

 *VAR_5 = VAR_0 | VAR_1;
 VAR_9 = FUNC_3(VAR_6->filter_list);
 VAR_10 = FUNC_4(VAR_3, VAR_9, &VAR_8, 0);
 if (VAR_10 >= 0) {
  VAR_7 = (struct drr_class *)VAR_8.class;
  if (VAR_7 == ((void*)0))
   VAR_7 = FUNC_1(VAR_4, VAR_8.classid);
  return VAR_7;
 }
 return ((void*)0);
}

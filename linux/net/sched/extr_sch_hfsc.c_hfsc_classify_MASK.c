
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {int classid; scalar_t__ class; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int priority; } ;
struct hfsc_class {scalar_t__ level; int filter_list; } ;
struct hfsc_sched {int defcls; struct hfsc_class root; } ;
struct Qdisc {int handle; } ;


 int VAR_0 ;




 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hfsc_class* FUNC_2 (int,struct Qdisc*) ;
 struct hfsc_sched* FUNC_3 (struct Qdisc*) ;
 struct tcf_proto* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static struct hfsc_class *
FUNC_6(struct sk_buff *VAR_3, struct Qdisc *VAR_4, int *VAR_5)
{
 struct hfsc_sched *VAR_6 = FUNC_3(VAR_4);
 struct hfsc_class *VAR_7, *VAR_8;
 struct tcf_result VAR_9;
 struct tcf_proto *VAR_10;
 int VAR_11;

 if (FUNC_0(VAR_3->priority ^ VAR_4->handle) == 0 &&
     (VAR_8 = FUNC_2(VAR_3->priority, VAR_4)) != ((void*)0))
  if (VAR_8->level == 0)
   return VAR_8;

 *VAR_5 = VAR_0 | VAR_1;
 VAR_7 = &VAR_6->root;
 VAR_10 = FUNC_4(VAR_6->root.filter_list);
 while (VAR_10 && (VAR_11 = FUNC_5(VAR_3, VAR_10, &VAR_9, 0)) >= 0) {
  VAR_8 = (struct hfsc_class *)VAR_9.class;
  if (!VAR_8) {
   VAR_8 = FUNC_2(VAR_9.classid, VAR_4);
   if (!VAR_8)
    break;
   if (VAR_8->level >= VAR_7->level)
    break;
  }

  if (VAR_8->level == 0)
   return VAR_8;


  VAR_10 = FUNC_4(VAR_8->filter_list);
  VAR_7 = VAR_8;
 }


 VAR_8 = FUNC_2(FUNC_1(FUNC_0(VAR_4->handle), VAR_6->defcls), VAR_4);
 if (VAR_8 == ((void*)0) || VAR_8->level > 0)
  return ((void*)0);

 return VAR_8;
}

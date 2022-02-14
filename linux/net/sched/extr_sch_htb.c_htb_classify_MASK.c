
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {scalar_t__ classid; scalar_t__ class; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {scalar_t__ priority; } ;
struct htb_sched {int defcls; int filter_list; } ;
struct htb_class {scalar_t__ level; int filter_list; } ;
struct Qdisc {scalar_t__ handle; } ;


 struct htb_class* VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct htb_class* FUNC_2 (scalar_t__,struct Qdisc*) ;
 struct htb_sched* FUNC_3 (struct Qdisc*) ;
 struct tcf_proto* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct tcf_proto*,struct tcf_result*,int) ;

__attribute__((used)) static struct htb_class *FUNC_6(struct sk_buff *VAR_4, struct Qdisc *VAR_5,
          int *VAR_6)
{
 struct htb_sched *VAR_7 = FUNC_3(VAR_5);
 struct htb_class *VAR_8;
 struct tcf_result VAR_9;
 struct tcf_proto *VAR_10;
 int VAR_11;





 if (VAR_4->priority == VAR_5->handle)
  return VAR_0;
 VAR_8 = FUNC_2(VAR_4->priority, VAR_5);
 if (VAR_8) {
  if (VAR_8->level == 0)
   return VAR_8;

  VAR_10 = FUNC_4(VAR_8->filter_list);
 } else {
  VAR_10 = FUNC_4(VAR_7->filter_list);
 }

 *VAR_6 = VAR_1 | VAR_2;
 while (VAR_10 && (VAR_11 = FUNC_5(VAR_4, VAR_10, &VAR_9, 0)) >= 0) {
  VAR_8 = (void *)VAR_9.class;
  if (!VAR_8) {
   if (VAR_9.classid == VAR_5->handle)
    return VAR_0;
   VAR_8 = FUNC_2(VAR_9.classid, VAR_5);
   if (!VAR_8)
    break;
  }
  if (!VAR_8->level)
   return VAR_8;


  VAR_10 = FUNC_4(VAR_8->filter_list);
 }

 VAR_8 = FUNC_2(FUNC_1(FUNC_0(VAR_5->handle), VAR_7->defcls), VAR_5);
 if (!VAR_8 || VAR_8->level)
  return VAR_0;
 return VAR_8;
}

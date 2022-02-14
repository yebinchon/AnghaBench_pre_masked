
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int dummy; } ;
struct hfsc_sched {int root; } ;
struct hfsc_class {int cl_flags; TYPE_3__* qdisc; int cl_cumul; int bstats; } ;
struct TYPE_7__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct TYPE_8__ {TYPE_1__ q; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 struct hfsc_class* FUNC_1 (struct hfsc_sched*,int ) ;
 int FUNC_2 (struct hfsc_class*) ;
 int FUNC_3 (struct Qdisc*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct Qdisc*,struct sk_buff*) ;
 struct sk_buff* FUNC_6 (TYPE_3__*) ;
 unsigned int FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 struct hfsc_sched* FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (char*,TYPE_3__*) ;
 int FUNC_13 (struct hfsc_class*,unsigned int) ;
 int FUNC_14 (struct hfsc_class*,unsigned int) ;
 int FUNC_15 (struct hfsc_class*,scalar_t__,int ) ;
 struct hfsc_class* FUNC_16 (int *,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_17(struct Qdisc *VAR_1)
{
 struct hfsc_sched *VAR_2 = FUNC_9(VAR_1);
 struct hfsc_class *VAR_3;
 struct sk_buff *VAR_4;
 u64 VAR_5;
 unsigned int VAR_6;
 int VAR_7 = 0;

 if (VAR_1->q.qlen == 0)
  return ((void*)0);

 VAR_5 = FUNC_4();






 VAR_3 = FUNC_1(VAR_2, VAR_5);
 if (VAR_3) {
  VAR_7 = 1;
 } else {




  VAR_3 = FUNC_16(&VAR_2->root, VAR_5);
  if (VAR_3 == ((void*)0)) {
   FUNC_11(VAR_1);
   FUNC_3(VAR_1);
   return ((void*)0);
  }
 }

 VAR_4 = FUNC_6(VAR_3->qdisc);
 if (VAR_4 == ((void*)0)) {
  FUNC_12("HFSC", VAR_3->qdisc);
  return ((void*)0);
 }

 FUNC_0(&VAR_3->bstats, VAR_4);
 FUNC_15(VAR_3, FUNC_8(VAR_4), VAR_5);
 if (VAR_7)
  VAR_3->cl_cumul += FUNC_8(VAR_4);

 if (VAR_3->cl_flags & VAR_0) {
  if (VAR_3->qdisc->q.qlen != 0) {

   VAR_6 = FUNC_7(VAR_3->qdisc);
   if (VAR_7)
    FUNC_14(VAR_3, VAR_6);
   else
    FUNC_13(VAR_3, VAR_6);
  } else {

   FUNC_2(VAR_3);
  }
 }

 FUNC_5(VAR_1, VAR_4);
 FUNC_10(VAR_1, VAR_4);
 VAR_1->q.qlen--;

 return VAR_4;
}

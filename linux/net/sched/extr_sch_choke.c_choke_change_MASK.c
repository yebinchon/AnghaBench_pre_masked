
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tc_red_qopt {scalar_t__ limit; int Scell_log; int Plog; int Wlog; int qth_max; int qth_min; int flags; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct choke_sched_data {unsigned int tab_mask; size_t head; size_t tail; scalar_t__ limit; int vars; int parms; int flags; struct sk_buff** tab; } ;
struct TYPE_2__ {unsigned int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff**) ;
 int VAR_9 ;
 struct sk_buff** FUNC_1 (unsigned int,int,int) ;
 struct tc_red_qopt* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct choke_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_8 (struct Qdisc*,unsigned int,unsigned int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ,int ,int ,int ,struct tc_red_qopt*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_15 (struct Qdisc*) ;
 int FUNC_16 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_17(struct Qdisc *VAR_10, struct nlattr *VAR_11,
   struct netlink_ext_ack *VAR_12)
{
 struct choke_sched_data *VAR_13 = FUNC_6(VAR_10);
 struct nlattr *VAR_14[VAR_4 + 1];
 const struct tc_red_qopt *VAR_15;
 int VAR_16;
 struct sk_buff **VAR_17 = ((void*)0);
 unsigned int VAR_18;
 u32 VAR_19;

 if (VAR_11 == ((void*)0))
  return -VAR_1;

 VAR_16 = FUNC_4(VAR_14, VAR_4, VAR_11,
       VAR_9, ((void*)0));
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_14[VAR_6] == ((void*)0) ||
     VAR_14[VAR_7] == ((void*)0))
  return -VAR_1;

 VAR_19 = VAR_14[VAR_5] ? FUNC_3(VAR_14[VAR_5]) : 0;

 VAR_15 = FUNC_2(VAR_14[VAR_6]);

 if (!FUNC_9(VAR_15->qth_min, VAR_15->qth_max, VAR_15->Wlog))
  return -VAR_1;

 if (VAR_15->limit > VAR_0)
  return -VAR_1;

 VAR_18 = FUNC_13(VAR_15->limit + 1) - 1;
 if (VAR_18 != VAR_13->tab_mask) {
  struct sk_buff **VAR_20;

  VAR_20 = FUNC_1((VAR_18 + 1), sizeof(struct sk_buff *), VAR_3 | VAR_8);
  if (!VAR_20)
   return -VAR_2;

  FUNC_15(VAR_10);
  VAR_17 = VAR_13->tab;
  if (VAR_17) {
   unsigned int VAR_21 = VAR_10->q.qlen, VAR_22 = 0;
   unsigned VAR_23 = 0;

   while (VAR_13->head != VAR_13->tail) {
    struct sk_buff *VAR_24 = VAR_13->tab[VAR_13->head];

    VAR_13->head = (VAR_13->head + 1) & VAR_13->tab_mask;
    if (!VAR_24)
     continue;
    if (VAR_22 < VAR_18) {
     VAR_20[VAR_22++] = VAR_24;
     continue;
    }
    VAR_23 += FUNC_5(VAR_24);
    FUNC_7(VAR_10, VAR_24);
    --VAR_10->q.qlen;
    FUNC_14(VAR_24, VAR_10);
   }
   FUNC_8(VAR_10, VAR_21 - VAR_10->q.qlen, VAR_23);
   VAR_13->head = 0;
   VAR_13->tail = VAR_22;
  }

  VAR_13->tab_mask = VAR_18;
  VAR_13->tab = VAR_20;
 } else
  FUNC_15(VAR_10);

 VAR_13->flags = VAR_15->flags;
 VAR_13->limit = VAR_15->limit;

 FUNC_11(&VAR_13->parms, VAR_15->qth_min, VAR_15->qth_max, VAR_15->Wlog,
        VAR_15->Plog, VAR_15->Scell_log,
        FUNC_2(VAR_14[VAR_7]),
        VAR_19);
 FUNC_12(&VAR_13->vars);

 if (VAR_13->head == VAR_13->tail)
  FUNC_10(&VAR_13->vars);

 FUNC_16(VAR_10);
 FUNC_0(VAR_17);
 return 0;
}

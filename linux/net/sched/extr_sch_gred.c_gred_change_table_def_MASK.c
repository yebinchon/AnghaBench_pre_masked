
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_gred_sopt {int DPs; scalar_t__ def_DP; int flags; scalar_t__ grio; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct gred_sched {scalar_t__ DPs; scalar_t__ def; int red_flags; TYPE_1__** tab; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int red_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct gred_sched*) ;
 int FUNC_3 (struct gred_sched*) ;
 int FUNC_4 (struct gred_sched*) ;
 int FUNC_5 (struct gred_sched*) ;
 int FUNC_6 (struct Qdisc*,int ) ;
 scalar_t__ FUNC_7 (struct gred_sched*) ;
 scalar_t__ FUNC_8 (struct Qdisc*) ;
 struct tc_gred_sopt* FUNC_9 (struct nlattr*) ;
 int FUNC_10 (char*,int) ;
 struct gred_sched* FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_14(struct Qdisc *VAR_4, struct nlattr *VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 struct gred_sched *VAR_7 = FUNC_11(VAR_4);
 struct tc_gred_sopt *VAR_8;
 bool VAR_9;
 int VAR_10;

 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_9(VAR_5);

 if (VAR_8->DPs > VAR_2) {
  FUNC_0(VAR_6, "number of virtual queues too high");
  return -VAR_0;
 }
 if (VAR_8->DPs == 0) {
  FUNC_0(VAR_6,
       "number of virtual queues can't be 0");
  return -VAR_0;
 }
 if (VAR_8->def_DP >= VAR_8->DPs) {
  FUNC_0(VAR_6, "default virtual queue above virtual queue count");
  return -VAR_0;
 }
 if (VAR_8->flags && FUNC_7(VAR_7)) {
  FUNC_0(VAR_6, "can't set per-Qdisc RED flags when per-virtual queue flags are used");
  return -VAR_0;
 }

 FUNC_12(VAR_4);
 VAR_7->DPs = VAR_8->DPs;
 VAR_7->def = VAR_8->def_DP;
 VAR_9 = VAR_7->red_flags != VAR_8->flags;
 VAR_7->red_flags = VAR_8->flags;






 FUNC_13(VAR_4);

 if (VAR_8->grio) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_7);
  if (FUNC_8(VAR_4))
   FUNC_5(VAR_7);
 } else {
  FUNC_2(VAR_7);
  FUNC_3(VAR_7);
 }

 if (VAR_9)
  for (VAR_10 = 0; VAR_10 < VAR_7->DPs; VAR_10++)
   if (VAR_7->tab[VAR_10])
    VAR_7->tab[VAR_10]->red_flags =
     VAR_7->red_flags & VAR_1;

 for (VAR_10 = VAR_7->DPs; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_7->tab[VAR_10]) {
   FUNC_10("GRED: Warning: Destroying shadowed VQ 0x%x\n",
    VAR_10);
   FUNC_1(VAR_7->tab[VAR_10]);
   VAR_7->tab[VAR_10] = ((void*)0);
  }
 }

 FUNC_6(VAR_4, VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rcu_data {unsigned long ticks_this_gp; int grpmask; int softirq_snap; int dynticks_nmi_nesting; int dynticks_nesting; scalar_t__ rcu_iw_pending; TYPE_1__* mynode; scalar_t__ rcu_iw_gp_seq; scalar_t__ gp_seq; } ;
struct TYPE_4__ {scalar_t__ n_force_qs_gpstart; int n_force_qs; scalar_t__ gp_seq; } ;
struct TYPE_3__ {int qsmaskinit; int qsmaskinitnext; scalar_t__ gp_seq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 struct rcu_data* FUNC_5 (int *,int) ;
 int FUNC_6 (char*,int,char,char,char,char,unsigned long,char*,int,int ,int ,int ,int ,scalar_t__,char*) ;
 int FUNC_7 (char*,int) ;
 int VAR_2 ;
 int FUNC_8 (struct rcu_data*) ;
 unsigned long FUNC_9 (scalar_t__) ;
 TYPE_2__ VAR_3 ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(int VAR_4)
{
 unsigned long VAR_5;
 char VAR_6[72];
 struct rcu_data *VAR_7 = FUNC_5(&VAR_2, VAR_4);
 char *VAR_8;
 unsigned long VAR_9;





 FUNC_10();

 VAR_9 = FUNC_9(VAR_3.gp_seq - VAR_7->gp_seq);
 if (VAR_9) {
  VAR_8 = "GPs behind";
 } else {
  VAR_8 = "ticks this GP";
  VAR_9 = VAR_7->ticks_this_gp;
 }
 FUNC_7(VAR_6, VAR_4);
 VAR_5 = FUNC_9(VAR_7->mynode->gp_seq - VAR_7->rcu_iw_gp_seq);
 FUNC_6("\t%d-%c%c%c%c: (%lu %s) idle=%03x/%ld/%#lx softirq=%u/%u fqs=%ld %s\n",
        VAR_4,
        "O."[!!FUNC_2(VAR_4)],
        "o."[!!(VAR_7->grpmask & VAR_7->mynode->qsmaskinit)],
        "N."[!!(VAR_7->grpmask & VAR_7->mynode->qsmaskinitnext)],
        !FUNC_0(VAR_0) ? '?' :
   VAR_7->rcu_iw_pending ? (int)FUNC_4(VAR_5, 9UL) + '0' :
    "!."[!VAR_5],
        VAR_9, VAR_8,
        FUNC_8(VAR_7) & 0xfff,
        VAR_7->dynticks_nesting, VAR_7->dynticks_nmi_nesting,
        VAR_7->softirq_snap, FUNC_3(VAR_1, VAR_4),
        FUNC_1(VAR_3.n_force_qs) - VAR_3.n_force_qs_gpstart,
        VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_ratespec {scalar_t__ rate; scalar_t__ cell_log; int linklayer; } ;
struct qdisc_rate_table {int refcnt; struct qdisc_rate_table* next; struct tc_ratespec data; struct tc_ratespec rate; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct tc_ratespec*,struct tc_ratespec) ;
 struct qdisc_rate_table* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tc_ratespec*,struct tc_ratespec*,int) ;
 int FUNC_4 (struct tc_ratespec,struct tc_ratespec*,int) ;
 struct tc_ratespec* FUNC_5 (struct nlattr*) ;
 scalar_t__ FUNC_6 (struct nlattr*) ;
 struct qdisc_rate_table* VAR_3 ;

struct qdisc_rate_table *FUNC_7(struct tc_ratespec *VAR_4,
     struct nlattr *VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 struct qdisc_rate_table *VAR_7;

 if (VAR_5 == ((void*)0) || VAR_4->rate == 0 || VAR_4->cell_log == 0 ||
     FUNC_6(VAR_5) != VAR_2) {
  FUNC_0(VAR_6, "Invalid rate table parameters for searching");
  return ((void*)0);
 }

 for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->next) {
  if (!FUNC_3(&VAR_7->rate, VAR_4, sizeof(struct tc_ratespec)) &&
      !FUNC_3(&VAR_7->data, FUNC_5(VAR_5), 1024)) {
   VAR_7->refcnt++;
   return VAR_7;
  }
 }

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (VAR_7) {
  VAR_7->rate = *VAR_4;
  VAR_7->refcnt = 1;
  FUNC_4(VAR_7->data, FUNC_5(VAR_5), 1024);
  if (VAR_4->linklayer == VAR_1)
   VAR_4->linklayer = FUNC_1(VAR_4, VAR_7->data);
  VAR_7->next = VAR_3;
  VAR_3 = VAR_7;
 } else {
  FUNC_0(VAR_6, "Failed to allocate new qdisc rate table");
 }
 return VAR_7;
}

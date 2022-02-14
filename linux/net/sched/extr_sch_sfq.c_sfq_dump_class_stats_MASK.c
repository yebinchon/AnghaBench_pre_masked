
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xstats ;
struct tc_sfq_xstats {int allot; int member_0; } ;
struct sfq_slot {int allot; int backlog; int qlen; } ;
struct sfq_sched_data {size_t* ht; struct sfq_slot* slots; } ;
struct gnet_stats_queue {int qlen; int backlog; int member_0; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef size_t sfq_index ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gnet_dump*,struct tc_sfq_xstats*,int) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *,struct gnet_stats_queue*,int ) ;
 struct sfq_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_2, unsigned long VAR_3,
    struct gnet_dump *VAR_4)
{
 struct sfq_sched_data *VAR_5 = FUNC_2(VAR_2);
 sfq_index VAR_6 = VAR_5->ht[VAR_3 - 1];
 struct gnet_stats_queue VAR_7 = { 0 };
 struct tc_sfq_xstats VAR_8 = { 0 };

 if (VAR_6 != VAR_1) {
  const struct sfq_slot *VAR_9 = &VAR_5->slots[VAR_6];

  VAR_8.allot = VAR_9->allot << VAR_0;
  VAR_7.qlen = VAR_9->qlen;
  VAR_7.backlog = VAR_9->backlog;
 }
 if (FUNC_1(VAR_4, ((void*)0), &VAR_7, VAR_7.qlen) < 0)
  return -1;
 return FUNC_0(VAR_4, &VAR_8, sizeof(VAR_8));
}

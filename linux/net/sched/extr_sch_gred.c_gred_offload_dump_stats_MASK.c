
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* qstats; TYPE_2__* bstats; int ** xstats; } ;
struct tc_gred_qopt_offload {TYPE_5__ stats; int parent; int handle; int command; } ;
struct gred_sched {TYPE_1__** tab; } ;
struct TYPE_8__ {int overlimits; int requeues; int drops; int backlog; int qlen; } ;
struct Qdisc {TYPE_3__ qstats; int bstats; int parent; int handle; } ;
struct TYPE_9__ {scalar_t__ overlimits; scalar_t__ requeues; scalar_t__ drops; scalar_t__ backlog; scalar_t__ qlen; } ;
struct TYPE_7__ {scalar_t__ packets; scalar_t__ bytes; } ;
struct TYPE_6__ {int backlog; int bytesin; int packetsin; int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tc_gred_qopt_offload*) ;
 struct tc_gred_qopt_offload* FUNC_2 (int,int ) ;
 int FUNC_3 (struct Qdisc*,int ,struct tc_gred_qopt_offload*) ;
 struct gred_sched* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_5)
{
 struct gred_sched *VAR_6 = FUNC_4(VAR_5);
 struct tc_gred_qopt_offload *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->command = VAR_3;
 VAR_7->handle = VAR_5->handle;
 VAR_7->parent = VAR_5->parent;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  if (VAR_6->tab[VAR_8])
   VAR_7->stats.xstats[VAR_8] = &VAR_6->tab[VAR_8]->stats;

 VAR_9 = FUNC_3(VAR_5, VAR_4, VAR_7);



 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (!VAR_6->tab[VAR_8])
   continue;
  VAR_6->tab[VAR_8]->packetsin += VAR_7->stats.bstats[VAR_8].packets;
  VAR_6->tab[VAR_8]->bytesin += VAR_7->stats.bstats[VAR_8].bytes;
  VAR_6->tab[VAR_8]->backlog += VAR_7->stats.qstats[VAR_8].backlog;

  FUNC_0(&VAR_5->bstats,
          VAR_7->stats.bstats[VAR_8].bytes,
          VAR_7->stats.bstats[VAR_8].packets);
  VAR_5->qstats.qlen += VAR_7->stats.qstats[VAR_8].qlen;
  VAR_5->qstats.backlog += VAR_7->stats.qstats[VAR_8].backlog;
  VAR_5->qstats.drops += VAR_7->stats.qstats[VAR_8].drops;
  VAR_5->qstats.requeues += VAR_7->stats.qstats[VAR_8].requeues;
  VAR_5->qstats.overlimits += VAR_7->stats.qstats[VAR_8].overlimits;
 }

 FUNC_1(VAR_7);
 return VAR_9;
}

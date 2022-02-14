
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netns_ipvs {int sync_state; int sync_buff_lock; struct ipvs_master_sync_state* ms; } ;
struct ipvs_master_sync_state {struct ip_vs_sync_buff* sync_buff; } ;
struct ip_vs_sync_mesg_v0 {void* size; int nr_conns; } ;
struct ip_vs_sync_conn_v0 {void* state; void* flags; int daddr; int vaddr; int caddr; int dport; int vport; int cport; int protocol; scalar_t__ reserved; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_sync_buff {scalar_t__ head; scalar_t__ end; scalar_t__ mesg; } ;
struct TYPE_6__ {int ip; } ;
struct TYPE_5__ {int ip; } ;
struct TYPE_4__ {int ip; } ;
struct ip_vs_conn {scalar_t__ af; int flags; unsigned int state; int in_pkts; struct ip_vs_conn* control; int in_seq; TYPE_3__ daddr; TYPE_2__ vaddr; TYPE_1__ caddr; int dport; int vport; int cport; int protocol; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int,int *) ;
 void* FUNC_1 (unsigned int) ;
 struct ip_vs_sync_buff* FUNC_2 (struct netns_ipvs*,unsigned int) ;
 int FUNC_3 (struct netns_ipvs*,struct ip_vs_conn*,int) ;
 int FUNC_4 (struct netns_ipvs*,struct ip_vs_conn*,int) ;
 int FUNC_5 (struct ip_vs_sync_conn_options*,int *,int) ;
 unsigned int FUNC_6 (void*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct netns_ipvs*,struct ipvs_master_sync_state*) ;
 int FUNC_9 (struct netns_ipvs*,struct ip_vs_conn*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct netns_ipvs*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct netns_ipvs *VAR_8, struct ip_vs_conn *VAR_9,
          int VAR_10)
{
 struct ip_vs_sync_mesg_v0 *VAR_11;
 struct ip_vs_sync_conn_v0 *VAR_12;
 struct ip_vs_sync_buff *VAR_13;
 struct ipvs_master_sync_state *VAR_14;
 int VAR_15;
 unsigned int VAR_16;

 if (FUNC_13(VAR_9->af != VAR_0))
  return;

 if (VAR_9->flags & VAR_3)
  return;

 if (!FUNC_4(VAR_8, VAR_9, VAR_10))
  return;

 FUNC_10(&VAR_8->sync_buff_lock);
 if (!(VAR_8->sync_state & VAR_6)) {
  FUNC_11(&VAR_8->sync_buff_lock);
  return;
 }

 VAR_15 = FUNC_9(VAR_8, VAR_9);
 VAR_14 = &VAR_8->ms[VAR_15];
 VAR_13 = VAR_14->sync_buff;
 VAR_16 = (VAR_9->flags & VAR_4) ? VAR_1 :
  VAR_7;
 if (VAR_13) {
  VAR_11 = (struct ip_vs_sync_mesg_v0 *) VAR_13->mesg;

  if (VAR_13->head + VAR_16 > VAR_13->end || !VAR_11->nr_conns) {
   FUNC_8(VAR_8, VAR_14);
   VAR_14->sync_buff = ((void*)0);
   VAR_13 = ((void*)0);
  }
 }
 if (!VAR_13) {
  VAR_13 = FUNC_2(VAR_8, VAR_16);
  if (!VAR_13) {
   FUNC_11(&VAR_8->sync_buff_lock);
   FUNC_7("ip_vs_sync_buff_create failed.\n");
   return;
  }
  VAR_14->sync_buff = VAR_13;
 }

 VAR_11 = (struct ip_vs_sync_mesg_v0 *) VAR_13->mesg;
 VAR_12 = (struct ip_vs_sync_conn_v0 *) VAR_13->head;


 VAR_12->reserved = 0;
 VAR_12->protocol = VAR_9->protocol;
 VAR_12->cport = VAR_9->cport;
 VAR_12->vport = VAR_9->vport;
 VAR_12->dport = VAR_9->dport;
 VAR_12->caddr = VAR_9->caddr.ip;
 VAR_12->vaddr = VAR_9->vaddr.ip;
 VAR_12->daddr = VAR_9->daddr.ip;
 VAR_12->flags = FUNC_1(VAR_9->flags & ~VAR_2);
 VAR_12->state = FUNC_1(VAR_9->state);
 if (VAR_9->flags & VAR_4) {
  struct ip_vs_sync_conn_options *VAR_17 =
   (struct ip_vs_sync_conn_options *)&VAR_12[1];
  FUNC_5(VAR_17, &VAR_9->in_seq, sizeof(*VAR_17));
 }

 VAR_11->nr_conns++;
 VAR_11->size = FUNC_1(FUNC_6(VAR_11->size) + VAR_16);
 VAR_13->head += VAR_16;
 FUNC_11(&VAR_8->sync_buff_lock);


 VAR_9 = VAR_9->control;
 if (VAR_9) {
  if (VAR_9->flags & VAR_5)
   VAR_10 = FUNC_0(1, &VAR_9->in_pkts);
  else
   VAR_10 = FUNC_12(VAR_8);
  FUNC_3(VAR_8, VAR_9, VAR_10);
 }
}

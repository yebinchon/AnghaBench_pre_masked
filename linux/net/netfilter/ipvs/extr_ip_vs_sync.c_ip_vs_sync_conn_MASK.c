
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int daddr; int vaddr; int caddr; void* timeout; void* fwmark; int dport; int vport; int cport; int protocol; void* state; void* flags; void* ver_size; int type; } ;
struct TYPE_7__ {int daddr; int vaddr; int caddr; } ;
union ip_vs_sync_conn {TYPE_6__ v4; TYPE_1__ v6; } ;
struct netns_ipvs {int sync_state; int sync_buff_lock; struct ipvs_master_sync_state* ms; } ;
struct ipvs_master_sync_state {struct ip_vs_sync_buff* sync_buff; } ;
struct ip_vs_sync_v6 {int dummy; } ;
struct ip_vs_sync_v4 {int dummy; } ;
struct ip_vs_sync_mesg {int nr_conns; void* size; scalar_t__ reserved; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_sync_buff {scalar_t__ head; scalar_t__ end; struct ip_vs_sync_mesg* mesg; } ;
struct ip_vs_seq {int dummy; } ;
struct TYPE_10__ {int ip; int in6; } ;
struct TYPE_9__ {int ip; int in6; } ;
struct TYPE_8__ {int ip; int in6; } ;
struct ip_vs_conn {int flags; int pe_data_len; scalar_t__ af; unsigned int state; int fwmark; int timeout; int in_pkts; struct ip_vs_conn* control; TYPE_5__* pe; int pe_data; int out_seq; int in_seq; TYPE_4__ daddr; TYPE_3__ vaddr; TYPE_2__ caddr; int dport; int vport; int cport; int protocol; int dest; } ;
typedef int __u8 ;
struct TYPE_11__ {int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct ip_vs_seq*,int *) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (unsigned int) ;
 struct ip_vs_sync_buff* FUNC_5 (struct netns_ipvs*,unsigned int) ;
 int FUNC_6 (struct netns_ipvs*,struct ip_vs_conn*,int) ;
 int FUNC_7 (struct netns_ipvs*,struct ip_vs_conn*,int) ;
 int FUNC_8 (int *,int ,unsigned int) ;
 unsigned int FUNC_9 (void*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct netns_ipvs*,struct ipvs_master_sync_state*) ;
 int FUNC_12 (struct netns_ipvs*,struct ip_vs_conn*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 unsigned int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct netns_ipvs*) ;
 scalar_t__ FUNC_17 (struct netns_ipvs*) ;

void FUNC_18(struct netns_ipvs *VAR_13, struct ip_vs_conn *VAR_14, int VAR_15)
{
 struct ip_vs_sync_mesg *VAR_16;
 union ip_vs_sync_conn *VAR_17;
 struct ip_vs_sync_buff *VAR_18;
 struct ipvs_master_sync_state *VAR_19;
 int VAR_20;
 __u8 *VAR_21;
 unsigned int VAR_22, VAR_23, VAR_24;


 if (FUNC_17(VAR_13) == 0) {
  FUNC_7(VAR_13, VAR_14, VAR_15);
  return;
 }

 if (VAR_14->flags & VAR_6)
  goto control;
sloop:
 if (!FUNC_6(VAR_13, VAR_14, VAR_15))
  goto control;


 VAR_23 = 0;
 if (VAR_14->pe_data_len) {
  if (!VAR_14->pe_data || !VAR_14->dest) {
   FUNC_0("SYNC, connection pe_data invalid\n");
   return;
  }
  VAR_23 = FUNC_15(VAR_14->pe->name, VAR_9);
 }

 FUNC_13(&VAR_13->sync_buff_lock);
 if (!(VAR_13->sync_state & VAR_10)) {
  FUNC_14(&VAR_13->sync_buff_lock);
  return;
 }

 VAR_20 = FUNC_12(VAR_13, VAR_14);
 VAR_19 = &VAR_13->ms[VAR_20];






  VAR_22 = sizeof(struct ip_vs_sync_v4);

 if (VAR_14->flags & VAR_7)
  VAR_22 += sizeof(struct ip_vs_sync_conn_options) + 2;

 if (VAR_14->pe_data_len)
  VAR_22 += VAR_14->pe_data_len + 2;
 if (VAR_23)
  VAR_22 += VAR_23 + 2;


 VAR_24 = 0;
 VAR_18 = VAR_19->sync_buff;
 if (VAR_18) {
  VAR_16 = VAR_18->mesg;
  VAR_24 = (4 - (size_t) VAR_18->head) & 3;

  if (VAR_18->head + VAR_22 + VAR_24 > VAR_18->end || VAR_16->reserved) {
   FUNC_11(VAR_13, VAR_19);
   VAR_19->sync_buff = ((void*)0);
   VAR_18 = ((void*)0);
   VAR_24 = 0;
  }
 }

 if (!VAR_18) {
  VAR_18 = FUNC_5(VAR_13, VAR_22);
  if (!VAR_18) {
   FUNC_14(&VAR_13->sync_buff_lock);
   FUNC_10("ip_vs_sync_buff_create failed.\n");
   return;
  }
  VAR_19->sync_buff = VAR_18;
  VAR_16 = VAR_18->mesg;
 }

 VAR_21 = VAR_18->head;
 VAR_18->head += VAR_24 + VAR_22;
 VAR_16->size = FUNC_4(FUNC_9(VAR_16->size) + VAR_24 + VAR_22);

 while (VAR_24--)
  *(VAR_21++) = 0;

 VAR_17 = (union ip_vs_sync_conn *)VAR_21;


 VAR_17->v4.type = (VAR_14->af == VAR_0 ? VAR_11 : 0);
 VAR_17->v4.ver_size = FUNC_4(VAR_22 & VAR_12);
 VAR_17->v4.flags = FUNC_3(VAR_14->flags & ~VAR_5);
 VAR_17->v4.state = FUNC_4(VAR_14->state);
 VAR_17->v4.protocol = VAR_14->protocol;
 VAR_17->v4.cport = VAR_14->cport;
 VAR_17->v4.vport = VAR_14->vport;
 VAR_17->v4.dport = VAR_14->dport;
 VAR_17->v4.fwmark = FUNC_3(VAR_14->fwmark);
 VAR_17->v4.timeout = FUNC_3(VAR_14->timeout / VAR_1);
 VAR_16->nr_conns++;
 {
  VAR_21 += sizeof(struct ip_vs_sync_v4);
  VAR_17->v4.caddr = VAR_14->caddr.ip;
  VAR_17->v4.vaddr = VAR_14->vaddr.ip;
  VAR_17->v4.daddr = VAR_14->daddr.ip;
 }
 if (VAR_14->flags & VAR_7) {
  *(VAR_21++) = VAR_4;
  *(VAR_21++) = sizeof(struct ip_vs_sync_conn_options);
  FUNC_2((struct ip_vs_seq *)VAR_21, &VAR_14->in_seq);
  VAR_21 += sizeof(struct ip_vs_seq);
  FUNC_2((struct ip_vs_seq *)VAR_21, &VAR_14->out_seq);
  VAR_21 += sizeof(struct ip_vs_seq);
 }

 if (VAR_14->pe_data_len && VAR_14->pe_data) {
  *(VAR_21++) = VAR_2;
  *(VAR_21++) = VAR_14->pe_data_len;
  FUNC_8(VAR_21, VAR_14->pe_data, VAR_14->pe_data_len);
  VAR_21 += VAR_14->pe_data_len;
  if (VAR_23) {

   *(VAR_21++) = VAR_3;
   *(VAR_21++) = VAR_23;
   FUNC_8(VAR_21, VAR_14->pe->name, VAR_23);
   VAR_21 += VAR_23;
  }
 }

 FUNC_14(&VAR_13->sync_buff_lock);

control:

 VAR_14 = VAR_14->control;
 if (!VAR_14)
  return;
 if (VAR_14->flags & VAR_8)
  VAR_15 = FUNC_1(1, &VAR_14->in_pkts);
 else
  VAR_15 = FUNC_16(VAR_13);
 goto sloop;
}

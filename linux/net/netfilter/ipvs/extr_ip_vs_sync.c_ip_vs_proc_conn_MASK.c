
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_sync_conn_options {int out_seq; int in_seq; } ;
struct ip_vs_proto_data {unsigned long* timeout_table; } ;
struct ip_vs_dest {int inactconns; int activeconns; } ;
struct ip_vs_conn_param {int pe_data; int vport; int vaddr; } ;
struct ip_vs_conn {scalar_t__ dport; unsigned int flags; unsigned int state; unsigned int old_state; unsigned long timeout; int in_pkts; int out_seq; int in_seq; int lock; struct ip_vs_dest* dest; int daddr; int daf; } ;
typedef int __u32 ;
typedef scalar_t__ __be16 ;


 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int,char*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct ip_vs_conn*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *,union nf_inet_addr const*) ;
 int FUNC_6 (struct ip_vs_conn*) ;
 struct ip_vs_conn* FUNC_7 (struct ip_vs_conn_param*) ;
 struct ip_vs_conn* FUNC_8 (struct ip_vs_conn_param*,unsigned int,union nf_inet_addr const*,scalar_t__,unsigned int,struct ip_vs_dest*,int ) ;
 int FUNC_9 (struct ip_vs_conn*) ;
 struct ip_vs_conn* FUNC_10 (struct ip_vs_conn_param*) ;
 struct ip_vs_dest* FUNC_11 (struct netns_ipvs*,unsigned int,unsigned int,union nf_inet_addr const*,scalar_t__,int ,int ,unsigned int,int ,unsigned int) ;
 struct ip_vs_proto_data* FUNC_12 (struct netns_ipvs*,unsigned int) ;
 int FUNC_13 (struct ip_vs_conn*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct netns_ipvs*) ;

__attribute__((used)) static void FUNC_20(struct netns_ipvs *VAR_5, struct ip_vs_conn_param *VAR_6,
       unsigned int VAR_7, unsigned int VAR_8,
       unsigned int VAR_9, unsigned int VAR_10,
       const union nf_inet_addr *VAR_11, __be16 VAR_12,
       unsigned long VAR_13, __u32 VAR_14,
       struct ip_vs_sync_conn_options *VAR_15)
{
 struct ip_vs_dest *VAR_16;
 struct ip_vs_conn *VAR_17;

 if (!(VAR_7 & VAR_3)) {
  VAR_17 = FUNC_7(VAR_6);
  if (VAR_17 && ((VAR_17->dport != VAR_12) ||
      !FUNC_5(VAR_17->daf, &VAR_17->daddr, VAR_11))) {
   if (!(VAR_7 & VAR_2)) {
    FUNC_6(VAR_17);
    FUNC_1(VAR_17);
    VAR_17 = ((void*)0);
   } else {




    FUNC_1(VAR_17);
    FUNC_14(VAR_6->pe_data);
    return;
   }
  }
 } else {
  VAR_17 = FUNC_10(VAR_6);
 }

 if (VAR_17) {

  FUNC_14(VAR_6->pe_data);

  VAR_16 = VAR_17->dest;
  FUNC_17(&VAR_17->lock);
  if ((VAR_17->flags ^ VAR_7) & VAR_2 &&
      !(VAR_7 & VAR_3) && VAR_16) {
   if (VAR_7 & VAR_2) {
    FUNC_2(&VAR_16->activeconns);
    FUNC_3(&VAR_16->inactconns);
   } else {
    FUNC_3(&VAR_16->activeconns);
    FUNC_2(&VAR_16->inactconns);
   }
  }
  VAR_7 &= VAR_1;
  VAR_7 |= VAR_17->flags & ~VAR_1;
  VAR_17->flags = VAR_7;
  FUNC_18(&VAR_17->lock);
  if (!VAR_16)
   FUNC_13(VAR_17);
 } else {





  FUNC_15();





  VAR_16 = FUNC_11(VAR_5, VAR_10, VAR_10, VAR_11, VAR_12,
           VAR_6->vaddr, VAR_6->vport, VAR_9,
           VAR_14, VAR_7);

  VAR_17 = FUNC_8(VAR_6, VAR_10, VAR_11, VAR_12, VAR_7, VAR_16,
        VAR_14);
  FUNC_16();
  if (!VAR_17) {
   FUNC_14(VAR_6->pe_data);
   FUNC_0(2, "BACKUP, add new conn. failed\n");
   return;
  }
  if (!(VAR_7 & VAR_3))
   FUNC_14(VAR_6->pe_data);
 }

 if (VAR_15) {
  VAR_17->in_seq = VAR_15->in_seq;
  VAR_17->out_seq = VAR_15->out_seq;
 }
 FUNC_4(&VAR_17->in_pkts, FUNC_19(VAR_5));
 VAR_17->state = VAR_8;
 VAR_17->old_state = VAR_17->state;
 if (VAR_13) {
  if (VAR_13 > VAR_4 / VAR_0)
   VAR_13 = VAR_4 / VAR_0;
  VAR_17->timeout = VAR_13*VAR_0;
 } else {
  struct ip_vs_proto_data *VAR_18;

  VAR_18 = FUNC_12(VAR_5, VAR_9);
  if (!(VAR_7 & VAR_3) && VAR_18 && VAR_18->timeout_table)
   VAR_17->timeout = VAR_18->timeout_table[VAR_8];
  else
   VAR_17->timeout = (3*60*VAR_0);
 }
 FUNC_9(VAR_17);
}

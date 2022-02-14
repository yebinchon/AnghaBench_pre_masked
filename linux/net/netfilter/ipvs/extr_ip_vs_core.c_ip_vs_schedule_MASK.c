
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mark; TYPE_1__* dev; } ;
struct ip_vs_service {int flags; scalar_t__ port; int af; int ipvs; int scheduler; int fwmark; } ;
struct ip_vs_scheduler {struct ip_vs_dest* (* schedule ) (struct ip_vs_service*,struct sk_buff*,struct ip_vs_iphdr*) ;} ;
struct ip_vs_protocol {int conn_in_get; } ;
struct ip_vs_proto_data {struct ip_vs_protocol* pp; } ;
struct ip_vs_iphdr {scalar_t__ protocol; int off; int hdr_flags; int saddr; int daddr; int len; } ;
struct ip_vs_dest {scalar_t__ port; int addr; int af; } ;
struct ip_vs_conn_param {int dummy; } ;
struct ip_vs_conn {int refcnt; int flags; int dport; int daddr; int daf; int vport; int vaddr; int af; int cport; int caddr; } ;
typedef int _ports ;
typedef scalar_t__ __be16 ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ip_vs_conn* FUNC_0 (int ,int ,int ,int ,struct sk_buff*,struct ip_vs_iphdr*) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int,int ,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct ip_vs_conn*) ;
 scalar_t__* FUNC_6 (struct sk_buff*,int ,int,scalar_t__*) ;
 int FUNC_7 (int ,int ,scalar_t__,void const*,scalar_t__,void const*,scalar_t__,struct ip_vs_conn_param*) ;
 int VAR_7 ;
 struct ip_vs_conn* FUNC_8 (struct ip_vs_conn_param*,int ,int *,scalar_t__,unsigned int,struct ip_vs_dest*,int ) ;
 int FUNC_9 (struct ip_vs_conn*,struct ip_vs_service*) ;
 int FUNC_10 (struct ip_vs_conn*) ;
 int FUNC_11 (struct ip_vs_iphdr*) ;
 struct ip_vs_conn* FUNC_12 (struct ip_vs_service*,struct sk_buff*,scalar_t__,scalar_t__,int*,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 struct ip_vs_scheduler* FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;
 struct ip_vs_dest* FUNC_19 (struct ip_vs_service*,struct sk_buff*,struct ip_vs_iphdr*) ;

struct ip_vs_conn *
FUNC_20(struct ip_vs_service *VAR_8, struct sk_buff *VAR_9,
        struct ip_vs_proto_data *VAR_10, int *VAR_11,
        struct ip_vs_iphdr *VAR_12)
{
 struct ip_vs_protocol *VAR_13 = VAR_10->pp;
 struct ip_vs_conn *VAR_14 = ((void*)0);
 struct ip_vs_scheduler *VAR_15;
 struct ip_vs_dest *VAR_16;
 __be16 VAR_17[2], *VAR_18, VAR_19, VAR_20;
 const void *VAR_21, *VAR_22;
 unsigned int VAR_23;

 *VAR_11 = 1;



 VAR_18 = FUNC_6(VAR_9, VAR_12->len, sizeof(VAR_17), VAR_17);
 if (VAR_18 == ((void*)0))
  return ((void*)0);

 if (FUNC_13(!FUNC_11(VAR_12))) {
  VAR_19 = VAR_18[0];
  VAR_21 = &VAR_12->saddr;
  VAR_20 = VAR_18[1];
  VAR_22 = &VAR_12->daddr;
 } else {
  VAR_19 = VAR_18[1];
  VAR_21 = &VAR_12->daddr;
  VAR_20 = VAR_18[0];
  VAR_22 = &VAR_12->saddr;
 }







 if (VAR_19 == VAR_0) {
  FUNC_4(12, VAR_8->af, VAR_13, VAR_9, VAR_12->off,
         "Not scheduling FTPDATA");
  return ((void*)0);
 }




 if ((!VAR_9->dev || VAR_9->dev->flags & VAR_1)) {
  VAR_12->hdr_flags ^= VAR_4;
  VAR_14 = FUNC_0(VAR_13->conn_in_get,
         VAR_7, VAR_8->ipvs,
         VAR_8->af, VAR_9, VAR_12);
  VAR_12->hdr_flags ^= VAR_4;

  if (VAR_14) {
   FUNC_4(12, VAR_8->af, VAR_13, VAR_9, VAR_12->off,
          "Not scheduling reply for existing"
          " connection");
   FUNC_5(VAR_14);
   return ((void*)0);
  }
 }




 if (VAR_8->flags & VAR_6)
  return FUNC_12(VAR_8, VAR_9, VAR_19, VAR_20, VAR_11,
        VAR_12);

 *VAR_11 = 0;




 if (!VAR_8->fwmark && VAR_20 != VAR_8->port) {
  if (!VAR_8->port)
   FUNC_15("Schedule: port zero only supported "
          "in persistent services, "
          "check your ipvs configuration\n");
  return ((void*)0);
 }

 VAR_15 = FUNC_16(VAR_8->scheduler);
 if (VAR_15) {

  FUNC_18();
  VAR_16 = VAR_15->schedule(VAR_8, VAR_9, VAR_12);
 } else {
  VAR_16 = ((void*)0);
 }
 if (VAR_16 == ((void*)0)) {
  FUNC_1(1, "Schedule: no dest found.\n");
  return ((void*)0);
 }

 VAR_23 = (VAR_8->flags & VAR_5
   && VAR_12->protocol == VAR_2) ?
  VAR_3 : 0;




 {
  struct ip_vs_conn_param VAR_24;

  FUNC_7(VAR_8->ipvs, VAR_8->af, VAR_12->protocol,
          VAR_21, VAR_19, VAR_22, VAR_20, &VAR_24);
  VAR_14 = FUNC_8(&VAR_24, VAR_16->af, &VAR_16->addr,
        VAR_16->port ? VAR_16->port : VAR_20,
        VAR_23, VAR_16, VAR_9->mark);
  if (!VAR_14) {
   *VAR_11 = -1;
   return ((void*)0);
  }
 }

 FUNC_3(6, "Schedule fwd:%c c:%s:%u v:%s:%u "
        "d:%s:%u conn->flags:%X conn->refcnt:%d\n",
        FUNC_10(VAR_14),
        FUNC_2(VAR_14->af, &VAR_14->caddr), FUNC_14(VAR_14->cport),
        FUNC_2(VAR_14->af, &VAR_14->vaddr), FUNC_14(VAR_14->vport),
        FUNC_2(VAR_14->daf, &VAR_14->daddr), FUNC_14(VAR_14->dport),
        VAR_14->flags, FUNC_17(&VAR_14->refcnt));

 FUNC_9(VAR_14, VAR_8);
 return VAR_14;
}

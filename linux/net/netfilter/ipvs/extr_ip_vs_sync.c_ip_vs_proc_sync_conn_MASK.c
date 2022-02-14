
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct TYPE_4__ {int type; int protocol; int fwmark; int timeout; int dport; int daddr; } ;
struct TYPE_3__ {int protocol; int fwmark; int timeout; int dport; int daddr; int state; int flags; int type; } ;
union ip_vs_sync_conn {TYPE_2__ v6; TYPE_1__ v4; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_sync_v6 {int dummy; } ;
struct ip_vs_sync_v4 {int dummy; } ;
struct ip_vs_sync_conn_options {int dummy; } ;
struct ip_vs_protocol {unsigned int num_states; int name; } ;
struct ip_vs_conn_param {int pe; } ;
typedef int __u8 ;
typedef int __u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct netns_ipvs*,unsigned int,union ip_vs_sync_conn*,struct ip_vs_conn_param*,int *,unsigned int,int *,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct netns_ipvs*,struct ip_vs_conn_param*,int,unsigned int,int,unsigned int,union nf_inet_addr*,int ,int,int,struct ip_vs_sync_conn_options*) ;
 int FUNC_4 (int *,int,int*,struct ip_vs_sync_conn_options*) ;
 int FUNC_5 (int *,int,unsigned int*,int **,int ,int*,int ) ;
 struct ip_vs_protocol* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static inline int FUNC_9(struct netns_ipvs *VAR_13, __u8 *VAR_14, __u8 *VAR_15)
{
 struct ip_vs_sync_conn_options VAR_16;
 union ip_vs_sync_conn *VAR_17;
 struct ip_vs_protocol *VAR_18;
 struct ip_vs_conn_param VAR_19;
 __u32 VAR_20;
 unsigned int VAR_21, VAR_22, VAR_23=0, VAR_24=0;
 __u8 *VAR_25=((void*)0), *VAR_26=((void*)0);
 __u32 VAR_27=0;
 int VAR_28=0;

 VAR_17 = (union ip_vs_sync_conn *) VAR_14;

 if (VAR_17->v6.type & VAR_12) {




  FUNC_0(3,"BACKUP, IPv6 msg received, and IPVS is not compiled for IPv6\n");
  VAR_28 = 10;
  goto out;

 } else if (!VAR_17->v4.type) {
  VAR_21 = VAR_0;
  VAR_14 += sizeof(struct ip_vs_sync_v4);
 } else {
  return -10;
 }
 if (VAR_14 > VAR_15)
  return -20;


 while (VAR_14 < VAR_15) {
  int VAR_29;
  int VAR_30;

  if (VAR_14+2 > VAR_15)
   return -30;
  VAR_29 = *(VAR_14++);
  VAR_30 = *(VAR_14++);

  if (!VAR_30 || ((VAR_14 + VAR_30) > VAR_15))
   return -40;

  switch (VAR_29 & ~VAR_2) {
  case 128:
   if (FUNC_4(VAR_14, VAR_30, &VAR_27, &VAR_16))
    return -50;
   break;

  case 130:
   if (FUNC_5(VAR_14, VAR_30, &VAR_23, &VAR_25,
        VAR_10, &VAR_27,
        VAR_3))
    return -60;
   break;

  case 129:
   if (FUNC_5(VAR_14, VAR_30,&VAR_24, &VAR_26,
        VAR_11, &VAR_27,
        VAR_4))
    return -70;
   break;

  default:

   if (!(VAR_29 & VAR_2)) {
    FUNC_0(3, "BACKUP, Unknown mandatory param %d found\n",
       VAR_29 & ~VAR_2);
    VAR_28 = 20;
    goto out;
   }
  }
  VAR_14 += VAR_30;
 }


 VAR_20 = FUNC_7(VAR_17->v4.flags) & VAR_6;
 VAR_20 |= VAR_7;
 VAR_22 = FUNC_8(VAR_17->v4.state);

 if (!(VAR_20 & VAR_8)) {
  VAR_18 = FUNC_6(VAR_17->v4.protocol);
  if (!VAR_18) {
   FUNC_0(3,"BACKUP, Unsupported protocol %u\n",
    VAR_17->v4.protocol);
   VAR_28 = 30;
   goto out;
  }
  if (VAR_22 >= VAR_18->num_states) {
   FUNC_0(3, "BACKUP, Invalid %s state %u\n",
    VAR_18->name, VAR_22);
   VAR_28 = 40;
   goto out;
  }
 } else {
  if (VAR_22 >= VAR_9)
   FUNC_0(7, "BACKUP, Invalid tpl state %u\n",
      VAR_22);
 }
 if (FUNC_1(VAR_13, VAR_21, VAR_17, &VAR_19, VAR_25,
           VAR_23, VAR_26, VAR_24)) {
  VAR_28 = 50;
  goto out;
 }

 if (VAR_21 == VAR_0)
  FUNC_3(VAR_13, &VAR_19, VAR_20, VAR_22, VAR_17->v4.protocol, VAR_21,
    (union nf_inet_addr *)&VAR_17->v4.daddr, VAR_17->v4.dport,
    FUNC_7(VAR_17->v4.timeout), FUNC_7(VAR_17->v4.fwmark),
    (VAR_27 & VAR_5 ? &VAR_16 : ((void*)0))
    );
 FUNC_2(VAR_19.pe);
 return 0;

out:
 FUNC_0(2, "BACKUP, Single msg dropped err:%d\n", VAR_28);
 return VAR_28;

}

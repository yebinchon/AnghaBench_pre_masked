
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int ipvs_property; } ;
struct ip_vs_protocol {scalar_t__ snat_handler; } ;
struct ip_vs_proto_data {struct ip_vs_protocol* pp; } ;
struct ip_vs_iphdr {int off; int len; } ;
struct TYPE_5__ {int ip; int in6; } ;
struct ip_vs_conn {int flags; int ipvs; TYPE_1__ vaddr; } ;
struct TYPE_7__ {int saddr; } ;
struct TYPE_6__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*,struct ip_vs_conn*,struct ip_vs_iphdr*) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct ip_vs_conn*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct ip_vs_conn*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ,int,struct sk_buff*,unsigned int) ;
 int FUNC_9 (struct ip_vs_conn*,int ,struct sk_buff*,struct ip_vs_proto_data*) ;
 int FUNC_10 (struct sk_buff*,struct ip_vs_conn*,int ) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (struct sk_buff*,int ) ;

__attribute__((used)) static unsigned int
FUNC_14(int VAR_5, struct sk_buff *VAR_6, struct ip_vs_proto_data *VAR_7,
  struct ip_vs_conn *VAR_8, struct ip_vs_iphdr *VAR_9,
  unsigned int VAR_10)
{
 struct ip_vs_protocol *VAR_11 = VAR_7->pp;

 FUNC_0(11, VAR_5, VAR_11, VAR_6, VAR_9->off, "Outgoing packet");

 if (FUNC_13(VAR_6, VAR_9->len))
  goto drop;


 if (VAR_11->snat_handler &&
     !FUNC_2(VAR_11->snat_handler, VAR_6, VAR_11, VAR_8, VAR_9))
  goto drop;






 {
  FUNC_3(VAR_6)->saddr = VAR_8->vaddr.ip;
  FUNC_4(FUNC_3(VAR_6));
 }
 if (FUNC_8(VAR_8->ipvs, VAR_5, VAR_6, VAR_10))
  goto drop;

 FUNC_0(10, VAR_5, VAR_11, VAR_6, VAR_9->off, "After SNAT");

 FUNC_7(VAR_8, VAR_6);
 FUNC_9(VAR_8, VAR_2, VAR_6, VAR_7);
 VAR_6->ipvs_property = 1;
 if (!(VAR_8->flags & VAR_1))
  FUNC_6(VAR_6);
 else
  FUNC_10(VAR_6, VAR_8, 0);
 FUNC_5(VAR_8);

 FUNC_1(11);
 return VAR_3;

drop:
 FUNC_5(VAR_8);
 FUNC_12(VAR_6);
 FUNC_1(11);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ignore_df; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {int dummy; } ;
struct TYPE_2__ {int ip; } ;
struct ip_vs_conn {TYPE_1__ daddr; int dest; int af; int ipvs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,struct sk_buff*,int ,int ,int,int *,struct ip_vs_iphdr*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct sk_buff*,struct ip_vs_conn*,int) ;
 int FUNC_6 (struct sk_buff*) ;

int
FUNC_7(struct sk_buff *VAR_5, struct ip_vs_conn *VAR_6,
       struct ip_vs_protocol *VAR_7, struct ip_vs_iphdr *VAR_8)
{
 int VAR_9;

 FUNC_0(10);

 VAR_9 = FUNC_2(VAR_6->ipvs, VAR_6->af, VAR_5, VAR_6->dest, VAR_6->daddr.ip,
       VAR_1 |
       VAR_2 |
       VAR_0, ((void*)0), VAR_8);
 if (VAR_9 < 0)
  goto tx_error;
 if (VAR_9)
  return FUNC_5(VAR_3, VAR_5, VAR_6, 1);

 FUNC_4(FUNC_3(VAR_5));


 VAR_5->ignore_df = 1;

 FUNC_5(VAR_3, VAR_5, VAR_6, 0);

 FUNC_1(10);
 return VAR_4;

  tx_error:
 FUNC_6(VAR_5);
 FUNC_1(10);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ignore_df; } ;
struct iphdr {int daddr; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {int dummy; } ;
struct ip_vs_conn {int af; int ipvs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,struct sk_buff*,int *,int ,int ,int *,struct ip_vs_iphdr*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct iphdr*) ;
 int FUNC_5 (int ,struct sk_buff*,struct ip_vs_conn*,int ) ;
 int FUNC_6 (struct sk_buff*) ;

int
FUNC_7(struct sk_buff *VAR_3, struct ip_vs_conn *VAR_4,
    struct ip_vs_protocol *VAR_5, struct ip_vs_iphdr *VAR_6)
{
 struct iphdr *VAR_7 = FUNC_3(VAR_3);

 FUNC_0(10);

 if (FUNC_2(VAR_4->ipvs, VAR_4->af, VAR_3, ((void*)0), VAR_7->daddr,
          VAR_0, ((void*)0), VAR_6) < 0)
  goto tx_error;

 FUNC_4(VAR_7);


 VAR_3->ignore_df = 1;

 FUNC_5(VAR_1, VAR_3, VAR_4, 0);

 FUNC_1(10);
 return VAR_2;

 tx_error:
 FUNC_6(VAR_3);
 FUNC_1(10);
 return VAR_2;
}

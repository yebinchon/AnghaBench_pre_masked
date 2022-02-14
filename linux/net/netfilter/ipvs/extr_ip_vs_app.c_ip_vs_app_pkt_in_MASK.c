
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ip_vs_iphdr {int dummy; } ;
struct ip_vs_conn {scalar_t__ protocol; struct ip_vs_app* app; } ;
struct ip_vs_app {int (* pkt_in ) (struct ip_vs_app*,struct ip_vs_conn*,struct sk_buff*,int *,struct ip_vs_iphdr*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ip_vs_conn*,struct sk_buff*,struct ip_vs_app*,struct ip_vs_iphdr*) ;
 int FUNC_1 (struct ip_vs_app*,struct ip_vs_conn*,struct sk_buff*,int *,struct ip_vs_iphdr*) ;

int FUNC_2(struct ip_vs_conn *VAR_1, struct sk_buff *VAR_2,
       struct ip_vs_iphdr *VAR_3)
{
 struct ip_vs_app *VAR_4;





 if ((VAR_4 = VAR_1->app) == ((void*)0))
  return 1;


 if (VAR_1->protocol == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_4, VAR_3);




 if (VAR_4->pkt_in == ((void*)0))
  return 1;

 return VAR_4->pkt_in(VAR_4, VAR_1, VAR_2, ((void*)0), VAR_3);
}

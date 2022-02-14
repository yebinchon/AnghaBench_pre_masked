
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct ip_vs_proto_data {int dummy; } ;
struct ip_vs_conn {scalar_t__ af; int lock; } ;
typedef int _tcph ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct ip_vs_proto_data*,struct ip_vs_conn*,int,struct tcphdr*) ;
 struct tcphdr* FUNC_2 (struct sk_buff const*,int,int,struct tcphdr*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ip_vs_conn *VAR_1, int VAR_2,
       const struct sk_buff *VAR_3,
       struct ip_vs_proto_data *VAR_4)
{
 struct tcphdr VAR_5, *VAR_6;




 int VAR_7 = FUNC_0(VAR_3);


 VAR_6 = FUNC_2(VAR_3, VAR_7, sizeof(VAR_5), &VAR_5);
 if (VAR_6 == ((void*)0))
  return;

 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_4, VAR_1, VAR_2, VAR_6);
 FUNC_4(&VAR_1->lock);
}

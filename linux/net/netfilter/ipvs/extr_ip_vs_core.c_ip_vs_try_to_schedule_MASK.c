
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netns_ipvs {int dummy; } ;
struct ip_vs_protocol {int (* conn_schedule ) (struct netns_ipvs*,int,struct sk_buff*,struct ip_vs_proto_data*,int*,struct ip_vs_conn**,struct ip_vs_iphdr*) ;} ;
struct ip_vs_proto_data {struct ip_vs_protocol* pp; } ;
struct ip_vs_iphdr {int off; scalar_t__ fragoffs; } ;
struct ip_vs_conn {int dummy; } ;


 int FUNC_0 (int,int,struct ip_vs_protocol*,struct sk_buff*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct netns_ipvs*,int,struct sk_buff*,struct ip_vs_proto_data*,int*,struct ip_vs_conn**,struct ip_vs_iphdr*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned int
FUNC_3(struct netns_ipvs *VAR_1, int VAR_2, struct sk_buff *VAR_3,
        struct ip_vs_proto_data *VAR_4,
        int *VAR_5, struct ip_vs_conn **VAR_6,
        struct ip_vs_iphdr *VAR_7)
{
 struct ip_vs_protocol *VAR_8 = VAR_4->pp;

 if (!VAR_7->fragoffs) {





  if (!VAR_8->conn_schedule(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7))
   return 0;
 }

 if (FUNC_2(!*VAR_6)) {

  FUNC_0(12, VAR_2, VAR_8, VAR_3, VAR_7->off,
         "ip_vs_in: packet continues traversal as normal");


  if (VAR_7->fragoffs)
   FUNC_0(7, VAR_2, VAR_8, VAR_3, VAR_7->off,
          "unhandled fragment");

  *VAR_5 = VAR_0;
  return 0;
 }

 return 1;
}

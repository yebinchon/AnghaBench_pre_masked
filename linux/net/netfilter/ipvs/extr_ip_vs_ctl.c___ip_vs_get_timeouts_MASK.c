
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dummy; } ;
struct ip_vs_timeout_user {void* udp_timeout; void* tcp_fin_timeout; void* tcp_timeout; } ;
struct ip_vs_proto_data {void** timeout_table; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct ip_vs_proto_data* FUNC_0 (struct netns_ipvs*,int ) ;
 int FUNC_1 (struct ip_vs_timeout_user*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct netns_ipvs *VAR_6, struct ip_vs_timeout_user *VAR_7)
{




 FUNC_1(VAR_7, 0, sizeof (*VAR_7));
}

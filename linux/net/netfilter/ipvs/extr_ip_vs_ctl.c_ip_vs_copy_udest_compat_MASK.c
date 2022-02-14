
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; } ;
struct ip_vs_dest_user_kern {int tun_type; int af; int l_threshold; int u_threshold; int weight; int conn_flags; int port; TYPE_1__ addr; } ;
struct ip_vs_dest_user {int l_threshold; int u_threshold; int weight; int conn_flags; int port; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip_vs_dest_user_kern*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ip_vs_dest_user_kern *VAR_2,
       struct ip_vs_dest_user *VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->addr.ip = VAR_3->addr;
 VAR_2->port = VAR_3->port;
 VAR_2->conn_flags = VAR_3->conn_flags;
 VAR_2->weight = VAR_3->weight;
 VAR_2->u_threshold = VAR_3->u_threshold;
 VAR_2->l_threshold = VAR_3->l_threshold;
 VAR_2->af = VAR_0;
 VAR_2->tun_type = VAR_1;
}

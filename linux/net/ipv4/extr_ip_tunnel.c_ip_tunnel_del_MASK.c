
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_net {int collect_md_tun; } ;
struct ip_tunnel {int hash_node; scalar_t__ collect_md; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ip_tunnel_net *VAR_0, struct ip_tunnel *VAR_1)
{
 if (VAR_1->collect_md)
  FUNC_1(VAR_0->collect_md_tun, ((void*)0));
 FUNC_0(&VAR_1->hash_node);
}

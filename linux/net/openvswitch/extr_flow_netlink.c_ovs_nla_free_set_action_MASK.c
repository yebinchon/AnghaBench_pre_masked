
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ovs_tunnel_info {scalar_t__ tun_dst; } ;
struct nlattr {int dummy; } ;
struct dst_entry {int dummy; } ;



 int FUNC_0 (struct dst_entry*) ;
 void* FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct nlattr const*) ;

__attribute__((used)) static void FUNC_3(const struct nlattr *VAR_0)
{
 const struct nlattr *VAR_1 = FUNC_1(VAR_0);
 struct ovs_tunnel_info *VAR_2;

 switch (FUNC_2(VAR_1)) {
 case 128:
  VAR_2 = FUNC_1(VAR_1);
  FUNC_0((struct dst_entry *)VAR_2->tun_dst);
  break;
 }
}

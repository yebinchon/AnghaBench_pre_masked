
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_state {int dummy; } ;
struct ip_tunnel_info {int dummy; } ;


 int FUNC_0 (struct lwtunnel_state*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lwtunnel_state *VAR_0, struct lwtunnel_state *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0), FUNC_0(VAR_1),
        sizeof(struct ip_tunnel_info));
}

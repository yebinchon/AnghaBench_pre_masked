
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_congestion_ops {int name; } ;
struct TYPE_2__ {int tcp_congestion_control; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 struct tcp_congestion_ops* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ) ;

void FUNC_4(struct net *VAR_1, char *VAR_2)
{
 const struct tcp_congestion_ops *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1->ipv4.tcp_congestion_control);
 FUNC_3(VAR_2, VAR_3->name, VAR_0);
 FUNC_2();
}

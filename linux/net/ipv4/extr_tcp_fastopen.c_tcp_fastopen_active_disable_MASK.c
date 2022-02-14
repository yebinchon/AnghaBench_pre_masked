
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int tfo_active_disable_stamp; int tfo_active_disable_times; } ;
struct net {TYPE_1__ ipv4; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct net* FUNC_2 (struct sock*) ;

void FUNC_3(struct sock *VAR_2)
{
 struct net *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(&VAR_3->ipv4.tfo_active_disable_times);
 VAR_3->ipv4.tfo_active_disable_stamp = VAR_1;
 FUNC_0(VAR_3, VAR_0);
}

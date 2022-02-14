
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_net; int s_node; } ;
struct sockaddr_at {TYPE_1__ sat_addr; } ;
struct sock {int dummy; } ;
struct atalk_sock {scalar_t__ src_net; int src_node; } ;
struct atalk_addr {scalar_t__ s_net; int s_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct atalk_sock* FUNC_0 (struct sock*) ;
 struct atalk_addr* FUNC_1 () ;
 int FUNC_2 (struct sock*,struct sockaddr_at*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_3)
{
 struct atalk_sock *VAR_4 = FUNC_0(VAR_3);
 struct sockaddr_at VAR_5;
 struct atalk_addr *VAR_6 = FUNC_1();
 int VAR_7 = -VAR_1;

 if (!VAR_6 || VAR_6->s_net == FUNC_3(VAR_0))
  goto out;

 VAR_4->src_net = VAR_5.sat_addr.s_net = VAR_6->s_net;
 VAR_4->src_node = VAR_5.sat_addr.s_node = VAR_6->s_node;

 VAR_7 = FUNC_2(VAR_3, &VAR_5);
 if (!VAR_7)
  FUNC_4(VAR_3, VAR_2);
out:
 return VAR_7;
}

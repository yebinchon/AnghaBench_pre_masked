
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_sock {int cached_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static struct net_device *FUNC_5(struct packet_sock *VAR_0)
{
 struct net_device *VAR_1;

 FUNC_3();
 VAR_1 = FUNC_2(VAR_0->cached_dev);
 if (FUNC_1(VAR_1))
  FUNC_0(VAR_1);
 FUNC_4();

 return VAR_1;
}

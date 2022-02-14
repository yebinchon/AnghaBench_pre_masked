
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net_device {int dummy; } ;
struct dst_entry {struct net_device* dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dst_entry*) ;
 scalar_t__ FUNC_2 (struct dst_entry*) ;
 struct dst_entry* FUNC_3 (struct sock*) ;

__attribute__((used)) static struct net_device *FUNC_4(struct sock *VAR_0)
{
 struct dst_entry *VAR_1 = FUNC_3(VAR_0);
 struct net_device *VAR_2 = ((void*)0);

 if (FUNC_2(VAR_1)) {
  VAR_2 = VAR_1->dev;
  FUNC_0(VAR_2);
 }

 FUNC_1(VAR_1);

 return VAR_2;
}

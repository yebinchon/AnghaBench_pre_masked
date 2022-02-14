
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ip_ptr; } ;
struct net {int dummy; } ;
struct in_device {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 struct in_device* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct in_device *FUNC_4(struct net *VAR_0, int VAR_1)
{
 struct net_device *VAR_2;
 struct in_device *VAR_3 = ((void*)0);

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_2->ip_ptr);
 FUNC_3();
 return VAR_3;
}

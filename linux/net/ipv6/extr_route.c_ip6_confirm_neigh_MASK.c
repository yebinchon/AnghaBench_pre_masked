
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {int dummy; } ;
struct net_device {int flags; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,void const*) ;
 void* FUNC_1 (int ,int *,void const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct in6_addr const*) ;
 int FUNC_3 (struct rt6_info*,int *) ;

__attribute__((used)) static void FUNC_4(const struct dst_entry *VAR_3, const void *VAR_4)
{
 struct net_device *VAR_5 = VAR_3->dev;
 struct rt6_info *VAR_6 = (struct rt6_info *)VAR_3;

 VAR_4 = FUNC_1(FUNC_3(VAR_6, &VAR_2), ((void*)0), VAR_4);
 if (!VAR_4)
  return;
 if (VAR_5->flags & (VAR_1 | VAR_0))
  return;
 if (FUNC_2((const struct in6_addr *)VAR_4))
  return;
 FUNC_0(VAR_5, VAR_4);
}

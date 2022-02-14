
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; } ;
struct ifla_vf_guid {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct ifla_vf_guid*,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2, struct ifla_vf_guid *VAR_3, int VAR_4)
{
 if (VAR_2->type != VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ipv6_pinfo {int autoflowlabel; int autoflowlabel_set; } ;


 int FUNC_0 (struct net*) ;

bool FUNC_1(struct net *VAR_0, const struct ipv6_pinfo *VAR_1)
{
 if (!VAR_1->autoflowlabel_set)
  return FUNC_0(VAR_0);
 else
  return VAR_1->autoflowlabel;
}

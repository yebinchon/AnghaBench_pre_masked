
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct devlink {int _net; } ;


 struct net* FUNC_0 (int *) ;

__attribute__((used)) static struct net *FUNC_1(const struct devlink *VAR_0)
{
 return FUNC_0(&VAR_0->_net);
}

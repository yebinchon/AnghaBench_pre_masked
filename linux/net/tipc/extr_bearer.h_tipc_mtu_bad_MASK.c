
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static inline bool FUNC_1(struct net_device *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->mtu >= VAR_0 + VAR_2)
  return 0;
 FUNC_0(VAR_1, "MTU too low for tipc bearer\n");
 return 1;
}

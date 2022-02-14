
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ag71xx {int napi; } ;


 int FUNC_0 (int *) ;
 struct ag71xx* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct net_device *VAR_1 = (struct net_device *) VAR_0;
 struct ag71xx *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->napi);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct chnl_net {int list_field; } ;


 int FUNC_0 () ;
 struct chnl_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct chnl_net *VAR_1;
 FUNC_0();
 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(&VAR_1->list_field);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct chnl_net {int name; } ;


 int FUNC_0 () ;
 struct chnl_net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0)
{
 struct chnl_net *VAR_1;
 FUNC_0();
 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(VAR_1->name, VAR_0->name, sizeof(VAR_1->name));
 return 0;
}

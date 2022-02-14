
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bearer {int pt; int media_ptr; } ;
struct net_device {int tipc_ptr; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;

void FUNC_5(struct tipc_bearer *VAR_0)
{
 struct net_device *VAR_1;

 VAR_1 = (struct net_device *)FUNC_3(VAR_0->media_ptr);
 FUNC_2(&VAR_0->pt);
 FUNC_0(VAR_1->tipc_ptr, ((void*)0));
 FUNC_4();
 FUNC_1(VAR_1);
}

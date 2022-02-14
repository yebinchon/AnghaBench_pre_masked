
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atalk_addr {int s_node; } ;
struct aarp_entry {int dummy; } ;


 int VAR_0 ;
 struct aarp_entry* FUNC_0 (int ,struct net_device*,struct atalk_addr*) ;
 int * VAR_1 ;

__attribute__((used)) static struct atalk_addr *FUNC_1(struct net_device *VAR_2,
         struct atalk_addr *VAR_3)
{
 int VAR_4 = VAR_3->s_node % (VAR_0 - 1);
 struct aarp_entry *VAR_5 = FUNC_0(VAR_1[VAR_4], VAR_2, VAR_3);

 return VAR_5 ? VAR_3 : ((void*)0);
}

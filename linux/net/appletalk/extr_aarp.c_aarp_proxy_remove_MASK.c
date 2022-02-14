
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct atalk_addr {int s_node; } ;
struct aarp_entry {scalar_t__ expires_at; } ;


 int VAR_0 ;
 struct aarp_entry* FUNC_0 (int ,struct net_device*,struct atalk_addr*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_device *VAR_4, struct atalk_addr *VAR_5)
{
 int VAR_6 = VAR_5->s_node % (VAR_0 - 1);
 struct aarp_entry *VAR_7;

 FUNC_1(&VAR_1);

 VAR_7 = FUNC_0(VAR_3[VAR_6], VAR_4, VAR_5);
 if (VAR_7)
  VAR_7->expires_at = VAR_2 - 1;

 FUNC_2(&VAR_1);
}

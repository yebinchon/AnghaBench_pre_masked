
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mpoa_client {struct mpoa_client* next; struct net_device* dev; } ;


 struct mpoa_client* VAR_0 ;

__attribute__((used)) static struct mpoa_client *FUNC_0(struct net_device *VAR_1)
{
 struct mpoa_client *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0)) {
  if (VAR_2->dev == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }

 return ((void*)0);
}

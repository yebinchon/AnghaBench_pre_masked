
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_mclist {scalar_t__ ifindex; struct packet_mclist* next; } ;
struct net_device {scalar_t__ ifindex; } ;


 int FUNC_0 (struct packet_mclist*) ;
 int FUNC_1 (struct net_device*,struct packet_mclist*,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
         struct packet_mclist **VAR_1)
{
 struct packet_mclist *VAR_2;

 while ((VAR_2 = *VAR_1) != ((void*)0)) {
  if (VAR_2->ifindex == VAR_0->ifindex) {
   FUNC_1(VAR_0, VAR_2, -1);
   *VAR_1 = VAR_2->next;
   FUNC_0(VAR_2);
  } else
   VAR_1 = &VAR_2->next;
 }
}

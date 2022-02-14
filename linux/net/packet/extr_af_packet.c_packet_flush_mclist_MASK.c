
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct packet_sock {struct packet_mclist* mclist; } ;
struct packet_mclist {int ifindex; struct packet_mclist* next; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct packet_mclist*) ;
 int FUNC_2 (struct net_device*,struct packet_mclist*,int) ;
 struct packet_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0)
{
 struct packet_sock *VAR_1 = FUNC_3(VAR_0);
 struct packet_mclist *VAR_2;

 if (!VAR_1->mclist)
  return;

 FUNC_4();
 while ((VAR_2 = VAR_1->mclist) != ((void*)0)) {
  struct net_device *VAR_3;

  VAR_1->mclist = VAR_2->next;
  VAR_3 = FUNC_0(FUNC_6(VAR_0), VAR_2->ifindex);
  if (VAR_3 != ((void*)0))
   FUNC_2(VAR_3, VAR_2, -1);
  FUNC_1(VAR_2);
 }
 FUNC_5();
}

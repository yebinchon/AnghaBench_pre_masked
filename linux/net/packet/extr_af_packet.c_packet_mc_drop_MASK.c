
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct packet_mreq_max {scalar_t__ mr_ifindex; scalar_t__ mr_type; scalar_t__ mr_alen; int mr_address; } ;
struct packet_mclist {scalar_t__ ifindex; scalar_t__ type; scalar_t__ alen; scalar_t__ count; struct packet_mclist* next; int addr; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct packet_mclist* mclist; } ;


 struct net_device* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct packet_mclist*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct net_device*,struct packet_mclist*,int) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sock*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_0, struct packet_mreq_max *VAR_1)
{
 struct packet_mclist *VAR_2, **VAR_3;

 FUNC_5();

 for (VAR_3 = &FUNC_4(VAR_0)->mclist; (VAR_2 = *VAR_3) != ((void*)0); VAR_3 = &VAR_2->next) {
  if (VAR_2->ifindex == VAR_1->mr_ifindex &&
      VAR_2->type == VAR_1->mr_type &&
      VAR_2->alen == VAR_1->mr_alen &&
      FUNC_2(VAR_2->addr, VAR_1->mr_address, VAR_2->alen) == 0) {
   if (--VAR_2->count == 0) {
    struct net_device *VAR_4;
    *VAR_3 = VAR_2->next;
    VAR_4 = FUNC_0(FUNC_7(VAR_0), VAR_2->ifindex);
    if (VAR_4)
     FUNC_3(VAR_4, VAR_2, -1);
    FUNC_1(VAR_2);
   }
   break;
  }
 }
 FUNC_6();
 return 0;
}

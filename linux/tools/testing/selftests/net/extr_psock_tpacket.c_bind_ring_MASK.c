
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ sll_halen; scalar_t__ sll_pkttype; scalar_t__ sll_hatype; int sll_ifindex; int sll_protocol; int sll_family; } ;
struct ring {TYPE_1__ ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(int VAR_2, struct ring *VAR_3)
{
 int VAR_4;

 FUNC_4(VAR_2);

 VAR_3->ll.sll_family = VAR_1;
 VAR_3->ll.sll_protocol = FUNC_2(VAR_0);
 VAR_3->ll.sll_ifindex = FUNC_3("lo");
 VAR_3->ll.sll_hatype = 0;
 VAR_3->ll.sll_pkttype = 0;
 VAR_3->ll.sll_halen = 0;

 VAR_4 = FUNC_0(VAR_2, (struct sockaddr *) &VAR_3->ll, sizeof(VAR_3->ll));
 if (VAR_4 == -1) {
  FUNC_5("bind");
  FUNC_1(1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netns_ipvs {int dummy; } ;
struct ip_vs_dest {int flags; } ;
struct ip_vs_conn {scalar_t__ cport; scalar_t__ vport; scalar_t__ dport; int daddr; int daf; int vaddr; int af; int caddr; int protocol; struct netns_ipvs* ipvs; struct ip_vs_dest* dest; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ip_vs_conn*) ;
 scalar_t__ FUNC_3 (struct netns_ipvs*,struct ip_vs_dest*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ip_vs_conn*) ;
 scalar_t__ FUNC_6 (struct ip_vs_conn*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct ip_vs_conn *VAR_1, struct ip_vs_dest *VAR_2)
{
 struct ip_vs_dest *VAR_3 = VAR_1->dest;
 struct netns_ipvs *VAR_4 = VAR_1->ipvs;




 if ((VAR_3 == ((void*)0)) ||
     !(VAR_3->flags & VAR_0) ||
     FUNC_3(VAR_4, VAR_3) ||
     (VAR_2 && (VAR_3 != VAR_2))) {
  FUNC_1(9, "check_template: dest not available for "
         "protocol %s s:%s:%d v:%s:%d "
         "-> d:%s:%d\n",
         FUNC_7(VAR_1->protocol),
         FUNC_0(VAR_1->af, &VAR_1->caddr),
         FUNC_8(VAR_1->cport),
         FUNC_0(VAR_1->af, &VAR_1->vaddr),
         FUNC_8(VAR_1->vport),
         FUNC_0(VAR_1->daf, &VAR_1->daddr),
         FUNC_8(VAR_1->dport));




  if (VAR_1->vport != FUNC_4(0xffff)) {
   if (FUNC_6(VAR_1)) {
    VAR_1->dport = FUNC_4(0xffff);
    VAR_1->vport = FUNC_4(0xffff);
    VAR_1->cport = 0;
    FUNC_5(VAR_1);
   }
  }





  FUNC_2(VAR_1);
  return 0;
 }
 return 1;
}

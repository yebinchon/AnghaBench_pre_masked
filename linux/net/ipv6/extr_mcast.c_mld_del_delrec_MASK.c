
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {int sf_crcount; struct ip6_sf_list* sf_next; } ;
struct inet6_dev {int mc_qrv; int mc_lock; struct ifmcaddr6* mc_tomb; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {scalar_t__ mca_sfmode; int mca_lock; int idev; int mca_crcount; struct ip6_sf_list* mca_sources; struct ip6_sf_list* mca_tomb; struct ifmcaddr6* next; struct in6_addr mca_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_2 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_3 (struct ifmcaddr6*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ip6_sf_list*,struct ip6_sf_list*) ;

__attribute__((used)) static void FUNC_7(struct inet6_dev *VAR_1, struct ifmcaddr6 *VAR_2)
{
 struct ifmcaddr6 *VAR_3, *VAR_4;
 struct ip6_sf_list *VAR_5;
 struct in6_addr *VAR_6 = &VAR_2->mca_addr;

 FUNC_4(&VAR_1->mc_lock);
 VAR_4 = ((void*)0);
 for (VAR_3 = VAR_1->mc_tomb; VAR_3; VAR_3 = VAR_3->next) {
  if (FUNC_2(&VAR_3->mca_addr, VAR_6))
   break;
  VAR_4 = VAR_3;
 }
 if (VAR_3) {
  if (VAR_4)
   VAR_4->next = VAR_3->next;
  else
   VAR_1->mc_tomb = VAR_3->next;
 }
 FUNC_5(&VAR_1->mc_lock);

 FUNC_4(&VAR_2->mca_lock);
 if (VAR_3) {
  VAR_2->idev = VAR_3->idev;
  if (VAR_2->mca_sfmode == VAR_0) {
   FUNC_6(VAR_2->mca_tomb, VAR_3->mca_tomb);
   FUNC_6(VAR_2->mca_sources, VAR_3->mca_sources);
   for (VAR_5 = VAR_2->mca_sources; VAR_5; VAR_5 = VAR_5->sf_next)
    VAR_5->sf_crcount = VAR_1->mc_qrv;
  } else {
   VAR_2->mca_crcount = VAR_1->mc_qrv;
  }
  FUNC_0(VAR_3->idev);
  FUNC_1(VAR_3);
  FUNC_3(VAR_3);
 }
 FUNC_5(&VAR_2->mca_lock);
}

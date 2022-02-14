
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {int sf_crcount; struct ip6_sf_list* sf_next; } ;
struct inet6_dev {int mc_lock; struct ifmcaddr6* mc_tomb; int mc_qrv; } ;
struct ifmcaddr6 {scalar_t__ mca_sfmode; struct ifmcaddr6* next; int mca_lock; int mca_crcount; struct ip6_sf_list* mca_sources; int mca_tomb; int mca_addr; int idev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inet6_dev*) ;
 struct ifmcaddr6* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct inet6_dev *VAR_2, struct ifmcaddr6 *VAR_3)
{
 struct ifmcaddr6 *VAR_4;







 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return;

 FUNC_2(&VAR_3->mca_lock);
 FUNC_3(&VAR_4->mca_lock);
 VAR_4->idev = VAR_3->idev;
 FUNC_0(VAR_2);
 VAR_4->mca_addr = VAR_3->mca_addr;
 VAR_4->mca_crcount = VAR_2->mc_qrv;
 VAR_4->mca_sfmode = VAR_3->mca_sfmode;
 if (VAR_4->mca_sfmode == VAR_1) {
  struct ip6_sf_list *VAR_5;

  VAR_4->mca_tomb = VAR_3->mca_tomb;
  VAR_4->mca_sources = VAR_3->mca_sources;
  VAR_3->mca_tomb = VAR_3->mca_sources = ((void*)0);
  for (VAR_5 = VAR_4->mca_sources; VAR_5; VAR_5 = VAR_5->sf_next)
   VAR_5->sf_crcount = VAR_4->mca_crcount;
 }
 FUNC_4(&VAR_3->mca_lock);

 FUNC_2(&VAR_2->mc_lock);
 VAR_4->next = VAR_2->mc_tomb;
 VAR_2->mc_tomb = VAR_4;
 FUNC_4(&VAR_2->mc_lock);
}

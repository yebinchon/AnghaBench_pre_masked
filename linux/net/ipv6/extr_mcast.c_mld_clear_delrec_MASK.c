
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_sf_list {struct ip6_sf_list* sf_next; int mca_lock; struct ip6_sf_list* mca_tomb; struct ip6_sf_list* next; int idev; } ;
struct inet6_dev {int lock; struct ip6_sf_list* mc_list; int mc_lock; struct ip6_sf_list* mc_tomb; } ;
struct ifmcaddr6 {struct ifmcaddr6* sf_next; int mca_lock; struct ifmcaddr6* mca_tomb; struct ifmcaddr6* next; int idev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ip6_sf_list*) ;
 int FUNC_2 (struct ip6_sf_list*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct inet6_dev *VAR_0)
{
 struct ifmcaddr6 *VAR_1, *VAR_2;

 FUNC_5(&VAR_0->mc_lock);
 VAR_1 = VAR_0->mc_tomb;
 VAR_0->mc_tomb = ((void*)0);
 FUNC_6(&VAR_0->mc_lock);

 for (; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1);
  FUNC_0(VAR_1->idev);
  FUNC_2(VAR_1);
 }


 FUNC_3(&VAR_0->lock);
 for (VAR_1 = VAR_0->mc_list; VAR_1; VAR_1 = VAR_1->next) {
  struct ip6_sf_list *VAR_3, *VAR_4;

  FUNC_5(&VAR_1->mca_lock);
  VAR_3 = VAR_1->mca_tomb;
  VAR_1->mca_tomb = ((void*)0);
  FUNC_6(&VAR_1->mca_lock);
  for (; VAR_3; VAR_3 = VAR_4) {
   VAR_4 = VAR_3->sf_next;
   FUNC_2(VAR_3);
  }
 }
 FUNC_4(&VAR_0->lock);
}

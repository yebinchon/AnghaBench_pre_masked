
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int lock; struct ifmcaddr6* mc_list; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {scalar_t__ mca_users; struct ifmcaddr6* next; int mca_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ifmcaddr6*) ;
 int FUNC_2 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_3 (int *,struct in6_addr const*) ;
 int FUNC_4 (struct ifmcaddr6*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct inet6_dev *VAR_1, const struct in6_addr *VAR_2)
{
 struct ifmcaddr6 *VAR_3, **VAR_4;

 FUNC_0();

 FUNC_5(&VAR_1->lock);
 for (VAR_4 = &VAR_1->mc_list; (VAR_3 = *VAR_4) != ((void*)0); VAR_4 = &VAR_3->next) {
  if (FUNC_3(&VAR_3->mca_addr, VAR_2)) {
   if (--VAR_3->mca_users == 0) {
    *VAR_4 = VAR_3->next;
    FUNC_6(&VAR_1->lock);

    FUNC_1(VAR_3);
    FUNC_2(VAR_3);

    FUNC_4(VAR_3);
    return 0;
   }
   FUNC_6(&VAR_1->lock);
   return 0;
  }
 }
 FUNC_6(&VAR_1->lock);

 return -VAR_0;
}

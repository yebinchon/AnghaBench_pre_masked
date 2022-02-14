
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct inet6_dev {int lock; struct ifmcaddr6* mc_list; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;
struct ifmcaddr6 {struct ifmcaddr6* next; int mca_addr; int mca_users; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ifmcaddr6*) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct inet6_dev*) ;
 int FUNC_4 (struct inet6_dev*,int *,unsigned int,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int *,struct in6_addr const*) ;
 int FUNC_6 (struct ifmcaddr6*) ;
 struct ifmcaddr6* FUNC_7 (struct inet6_dev*,struct in6_addr const*,unsigned int) ;
 int FUNC_8 (struct ifmcaddr6*) ;
 int FUNC_9 (struct inet6_dev*,struct ifmcaddr6*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_3,
        const struct in6_addr *VAR_4, unsigned int VAR_5)
{
 struct ifmcaddr6 *VAR_6;
 struct inet6_dev *VAR_7;

 FUNC_0();


 VAR_7 = FUNC_2(VAR_3);

 if (!VAR_7)
  return -VAR_0;

 FUNC_10(&VAR_7->lock);
 if (VAR_7->dead) {
  FUNC_11(&VAR_7->lock);
  FUNC_3(VAR_7);
  return -VAR_1;
 }

 for (VAR_6 = VAR_7->mc_list; VAR_6; VAR_6 = VAR_6->next) {
  if (FUNC_5(&VAR_6->mca_addr, VAR_4)) {
   VAR_6->mca_users++;
   FUNC_11(&VAR_7->lock);
   FUNC_4(VAR_7, &VAR_6->mca_addr, VAR_5, 0, ((void*)0), 0);
   FUNC_3(VAR_7);
   return 0;
  }
 }

 VAR_6 = FUNC_7(VAR_7, VAR_4, VAR_5);
 if (!VAR_6) {
  FUNC_11(&VAR_7->lock);
  FUNC_3(VAR_7);
  return -VAR_2;
 }

 VAR_6->next = VAR_7->mc_list;
 VAR_7->mc_list = VAR_6;




 FUNC_8(VAR_6);
 FUNC_11(&VAR_7->lock);

 FUNC_9(VAR_7, VAR_6);
 FUNC_1(VAR_6);
 FUNC_6(VAR_6);
 return 0;
}

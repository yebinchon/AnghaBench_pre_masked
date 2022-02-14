
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {int lock; int flags; } ;
struct inet6_dev {int dev; } ;
struct in6_addr {int dummy; } ;
struct ifa6_config {int plen; int scope; int preferred_lft; int valid_lft; int ifa_flags; struct in6_addr const* pfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 struct inet6_ifaddr* FUNC_3 (struct inet6_dev*,struct ifa6_config*,int,int *) ;
 int FUNC_4 (int ,struct inet6_ifaddr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct inet6_dev *VAR_4, const struct in6_addr *VAR_5,
       int VAR_6, int VAR_7)
{
 struct inet6_ifaddr *VAR_8;
 struct ifa6_config VAR_9 = {
  .pfx = VAR_5,
  .plen = VAR_6,
  .ifa_flags = VAR_0,
  .valid_lft = VAR_2,
  .preferred_lft = VAR_2,
  .scope = VAR_7
 };

 VAR_8 = FUNC_3(VAR_4, &VAR_9, 1, ((void*)0));
 if (!FUNC_0(VAR_8)) {
  FUNC_6(&VAR_8->lock);
  VAR_8->flags &= ~VAR_1;
  FUNC_7(&VAR_8->lock);
  FUNC_5(FUNC_1(VAR_4->dev));
  FUNC_4(VAR_3, VAR_8);
  FUNC_2(VAR_8);
 }
}

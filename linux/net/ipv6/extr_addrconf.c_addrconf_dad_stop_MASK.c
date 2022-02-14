
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {int flags; int lock; struct inet6_ifaddr* ifpub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inet6_ifaddr*) ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 int FUNC_3 (struct inet6_ifaddr*,struct inet6_ifaddr*,int) ;
 int FUNC_4 (struct inet6_ifaddr*) ;
 int FUNC_5 (int ,struct inet6_ifaddr*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct inet6_ifaddr *VAR_5, int VAR_6)
{
 if (VAR_6)
  VAR_5->flags |= VAR_0;

 if (VAR_5->flags&VAR_3) {
  struct inet6_ifaddr *VAR_7;
  FUNC_6(&VAR_5->lock);
  VAR_7 = VAR_5->ifpub;
  if (VAR_7) {
   FUNC_1(VAR_7);
   FUNC_7(&VAR_5->lock);
   FUNC_3(VAR_7, VAR_5, 1);
   FUNC_2(VAR_7);
  } else {
   FUNC_7(&VAR_5->lock);
  }
  FUNC_4(VAR_5);
 } else if (VAR_5->flags&VAR_2 || !VAR_6) {
  FUNC_6(&VAR_5->lock);
  FUNC_0(VAR_5);
  VAR_5->flags |= VAR_4;
  if (VAR_6)
   VAR_5->flags &= ~VAR_1;
  FUNC_7(&VAR_5->lock);
  if (VAR_6)
   FUNC_5(0, VAR_5);
  FUNC_2(VAR_5);
 } else {
  FUNC_4(VAR_5);
 }
}

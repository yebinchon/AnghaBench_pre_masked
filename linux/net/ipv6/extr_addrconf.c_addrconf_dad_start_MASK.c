
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {scalar_t__ state; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct inet6_ifaddr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct inet6_ifaddr *VAR_2)
{
 bool VAR_3 = 0;

 FUNC_1(&VAR_2->lock);
 if (VAR_2->state != VAR_0) {
  VAR_2->state = VAR_1;
  VAR_3 = 1;
 }
 FUNC_2(&VAR_2->lock);

 if (VAR_3)
  FUNC_0(VAR_2, 0);
}

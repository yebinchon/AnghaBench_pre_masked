
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_ifaddr {scalar_t__ state; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct inet6_ifaddr *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_0(&VAR_3->lock);
 if (VAR_3->state == VAR_1) {
  VAR_3->state = VAR_2;
  VAR_4 = 0;
 }
 FUNC_1(&VAR_3->lock);

 return VAR_4;
}

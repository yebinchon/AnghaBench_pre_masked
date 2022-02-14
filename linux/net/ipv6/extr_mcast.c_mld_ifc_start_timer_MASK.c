
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int mc_ifc_timer; } ;


 int FUNC_0 (struct inet6_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 unsigned long FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct inet6_dev *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_2() % VAR_2;

 if (!FUNC_1(&VAR_1->mc_ifc_timer, VAR_0+VAR_3+2))
  FUNC_0(VAR_1);
}

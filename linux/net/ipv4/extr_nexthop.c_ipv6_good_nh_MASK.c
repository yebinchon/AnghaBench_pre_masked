
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int nud_state; } ;
struct fib6_nh {int fib_nh_gw6; int fib_nh_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct neighbour* FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(const struct fib6_nh *VAR_2)
{
 int VAR_3 = VAR_0;
 struct neighbour *VAR_4;

 FUNC_1();

 VAR_4 = FUNC_0(VAR_2->fib_nh_dev, &VAR_2->fib_nh_gw6);
 if (VAR_4)
  VAR_3 = VAR_4->nud_state;

 FUNC_2();

 return !!(VAR_3 & VAR_1);
}

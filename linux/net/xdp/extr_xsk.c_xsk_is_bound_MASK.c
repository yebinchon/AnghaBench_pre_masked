
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_sock {int state; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static bool FUNC_2(struct xdp_sock *VAR_1)
{
 if (FUNC_0(VAR_1->state) == VAR_0) {

  FUNC_1();
  return 1;
 }
 return 0;
}

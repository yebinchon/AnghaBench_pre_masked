
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_state {struct xfrm_state* tunnel; int tunnel_users; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xfrm_state*) ;
 int FUNC_3 (struct xfrm_state*) ;

void FUNC_4(struct xfrm_state *VAR_0)
{
 if (VAR_0->tunnel) {
  struct xfrm_state *VAR_1 = VAR_0->tunnel;

  if (FUNC_1(&VAR_1->tunnel_users) == 2)
   FUNC_2(VAR_1);
  FUNC_0(&VAR_1->tunnel_users);
  FUNC_3(VAR_1);
  VAR_0->tunnel = ((void*)0);
 }
}

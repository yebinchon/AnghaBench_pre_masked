
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_2__ {int saddr; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,int *) ;
 struct net* FUNC_1 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_2(struct xfrm_state *VAR_0)
{
 struct net *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, (xfrm_address_t *)&VAR_0->props.saddr);
}

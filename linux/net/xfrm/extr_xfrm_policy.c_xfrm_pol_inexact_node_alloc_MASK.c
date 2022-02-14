
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef int u8 ;
struct xfrm_pol_inexact_node {int dummy; } ;


 int VAR_0 ;
 struct xfrm_pol_inexact_node* FUNC_0 (int,int ) ;
 int FUNC_1 (struct xfrm_pol_inexact_node*,int const*,int ) ;

__attribute__((used)) static struct xfrm_pol_inexact_node *
FUNC_2(const xfrm_address_t *VAR_1, u8 VAR_2)
{
 struct xfrm_pol_inexact_node *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_1, VAR_2);

 return VAR_3;
}

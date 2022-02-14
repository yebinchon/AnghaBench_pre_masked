
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u8 ;
struct TYPE_2__ {int prefixlen_d; int daddr; int prefixlen_s; int saddr; } ;
struct xfrm_policy {int family; TYPE_1__ selector; } ;


 int FUNC_0 (int const*,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(const struct xfrm_policy *VAR_0)
{
 const xfrm_address_t *VAR_1;
 bool VAR_2, VAR_3;
 u8 VAR_4;

 VAR_1 = &VAR_0->selector.saddr;
 VAR_4 = VAR_0->selector.prefixlen_s;

 VAR_2 = FUNC_0(VAR_1,
             VAR_0->family,
             VAR_4);
 VAR_1 = &VAR_0->selector.daddr;
 VAR_4 = VAR_0->selector.prefixlen_d;
 VAR_3 = FUNC_0(VAR_1,
             VAR_0->family,
             VAR_4);
 return VAR_2 && VAR_3;
}

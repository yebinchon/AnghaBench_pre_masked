
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ family; int saddr; } ;
struct xfrm_state {TYPE_1__ props; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (struct xfrm_state const*,int *,int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(const struct xfrm_state *VAR_2, __be32 VAR_3, __be32 VAR_4)
{
 xfrm_address_t *VAR_5 = (xfrm_address_t *)&VAR_3;
 xfrm_address_t *VAR_6 = (xfrm_address_t *)&VAR_4;




 if (!VAR_2 || VAR_2->props.mode != VAR_1 ||
     VAR_2->props.family != VAR_0)
  return 0;

 if (!VAR_3)
  return FUNC_0(VAR_6, &VAR_2->props.saddr, VAR_0);

 if (!FUNC_1(VAR_2, VAR_5, VAR_6, VAR_0))
  return 0;

 return 1;
}

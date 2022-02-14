
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int daddr; } ;
struct TYPE_4__ {scalar_t__ family; int saddr; } ;
struct xfrm_state {TYPE_1__ id; TYPE_2__ props; } ;
struct xfrm_address_filter {scalar_t__ family; int dplen; int daddr; int splen; int saddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ) ;

__attribute__((used)) static bool FUNC_1(struct xfrm_state *VAR_2,
          struct xfrm_address_filter *VAR_3)
{
 if (VAR_3) {
  if ((VAR_3->family == VAR_0 ||
       VAR_3->family == VAR_1) &&
      VAR_2->props.family != VAR_3->family)
   return 0;

  return FUNC_0(&VAR_2->props.saddr, &VAR_3->saddr,
      VAR_3->splen) &&
         FUNC_0(&VAR_2->id.daddr, &VAR_3->daddr,
      VAR_3->dplen);
 }
 return 1;
}

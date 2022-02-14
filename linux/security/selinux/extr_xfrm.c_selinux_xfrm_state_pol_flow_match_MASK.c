
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xfrm_state {TYPE_1__* security; } ;
struct xfrm_policy {int security; } ;
struct flowi {scalar_t__ flowi_secid; } ;
struct TYPE_2__ {scalar_t__ ctx_sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,int *) ;
 int FUNC_1 (struct xfrm_state*) ;
 int VAR_2 ;

int FUNC_2(struct xfrm_state *VAR_3,
          struct xfrm_policy *VAR_4,
          const struct flowi *VAR_5)
{
 u32 VAR_6;

 if (!VAR_4->security)
  if (VAR_3->security)

   return 0;
  else

   return 1;
 else
  if (!VAR_3->security)

   return 0;
  else
   if (!FUNC_1(VAR_3))

    return 0;

 VAR_6 = VAR_3->security->ctx_sid;

 if (VAR_5->flowi_secid != VAR_6)
  return 0;




 return (FUNC_0(&VAR_2,
        VAR_5->flowi_secid, VAR_6,
       VAR_1, VAR_0,
       ((void*)0)) ? 0 : 1);
}

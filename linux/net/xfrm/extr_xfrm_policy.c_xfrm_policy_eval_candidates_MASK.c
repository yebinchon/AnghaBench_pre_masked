
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct xfrm_policy {int dummy; } ;
struct xfrm_pol_inexact_candidates {int * res; } ;
struct flowi {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_2 (int ,struct xfrm_policy*,struct flowi const*,int ,int ,int,int ) ;

__attribute__((used)) static struct xfrm_policy *
FUNC_3(struct xfrm_pol_inexact_candidates *VAR_0,
       struct xfrm_policy *VAR_1,
       const struct flowi *VAR_2,
       u8 VAR_3, u16 VAR_4, int VAR_5, u32 VAR_6)
{
 struct xfrm_policy *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_0->res); VAR_8++) {
  VAR_7 = FUNC_2(VAR_0->res[VAR_8],
          VAR_1,
          VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6);
  if (!VAR_7)
   continue;

  if (FUNC_1(VAR_7))
   return VAR_7;
  VAR_1 = VAR_7;
 }

 return VAR_1;
}

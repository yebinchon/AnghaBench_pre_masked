
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_tmpl {int dummy; } ;
struct xfrm_algo_desc {scalar_t__ available; int pfkey_supported; } ;
struct sadb_prop {int dummy; } ;
struct sadb_comb {int dummy; } ;


 scalar_t__ FUNC_0 (struct xfrm_tmpl const*,struct xfrm_algo_desc const*) ;
 scalar_t__ FUNC_1 (struct xfrm_tmpl const*,struct xfrm_algo_desc const*) ;
 struct xfrm_algo_desc* FUNC_2 (int) ;
 struct xfrm_algo_desc* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct xfrm_tmpl *VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0;

 for (VAR_1 = 0; ; VAR_1++) {
  const struct xfrm_algo_desc *VAR_4 = FUNC_3(VAR_1);
  if (!VAR_4)
   break;

  if (!VAR_4->pfkey_supported)
   continue;

  if (!(FUNC_1(VAR_0, VAR_4) && VAR_4->available))
   continue;

  for (VAR_2 = 1; ; VAR_2++) {
   const struct xfrm_algo_desc *VAR_5 = FUNC_2(VAR_2);
   if (!VAR_5)
    break;

   if (!VAR_5->pfkey_supported)
    continue;

   if (FUNC_0(VAR_0, VAR_5) && VAR_5->available)
    VAR_3 += sizeof(struct sadb_comb);
  }
 }
 return VAR_3 + sizeof(struct sadb_prop);
}

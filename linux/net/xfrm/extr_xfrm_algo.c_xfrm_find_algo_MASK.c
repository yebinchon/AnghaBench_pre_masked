
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_algo_list {int entries; int mask; int type; struct xfrm_algo_desc* algs; } ;
struct xfrm_algo_desc {int available; int name; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static struct xfrm_algo_desc *FUNC_1(
 const struct xfrm_algo_list *VAR_0,
 int VAR_1(const struct xfrm_algo_desc *VAR_2, const void *VAR_3),
 const void *VAR_4, int VAR_5)
{
 struct xfrm_algo_desc *VAR_6 = VAR_0->algs;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0->entries; VAR_7++) {
  if (!VAR_1(VAR_6 + VAR_7, VAR_4))
   continue;

  if (VAR_6[VAR_7].available)
   return &VAR_6[VAR_7];

  if (!VAR_5)
   break;

  VAR_8 = FUNC_0(VAR_6[VAR_7].name, VAR_0->type,
     VAR_0->mask);
  if (!VAR_8)
   break;

  VAR_6[VAR_7].available = VAR_8;
  return &VAR_6[VAR_7];
 }
 return ((void*)0);
}

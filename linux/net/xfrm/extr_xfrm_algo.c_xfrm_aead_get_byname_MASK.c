
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_algo_desc {int dummy; } ;
struct xfrm_aead_name {char const* name; int icvbits; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xfrm_algo_desc* FUNC_0 (int *,int ,struct xfrm_aead_name*,int) ;

struct xfrm_algo_desc *FUNC_1(const char *VAR_2, int VAR_3, int VAR_4)
{
 struct xfrm_aead_name VAR_5 = {
  .name = VAR_2,
  .icvbits = VAR_3,
 };

 return FUNC_0(&VAR_0, VAR_1, &VAR_5,
         VAR_4);
}

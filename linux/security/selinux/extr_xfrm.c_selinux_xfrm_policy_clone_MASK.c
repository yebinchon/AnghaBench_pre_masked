
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_sec_ctx {scalar_t__ ctx_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct xfrm_sec_ctx* FUNC_1 (struct xfrm_sec_ctx*,scalar_t__,int ) ;
 int VAR_2 ;

int FUNC_2(struct xfrm_sec_ctx *VAR_3,
         struct xfrm_sec_ctx **VAR_4)
{
 struct xfrm_sec_ctx *VAR_5;

 if (!VAR_3)
  return 0;

 VAR_5 = FUNC_1(VAR_3, sizeof(*VAR_3) + VAR_3->ctx_len,
     VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_0(&VAR_2);
 *VAR_4 = VAR_5;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm_sec_ctx {scalar_t__ ctx_doi; scalar_t__ ctx_alg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct xfrm_sec_ctx *VAR_2)
{
 return (VAR_2 &&
  (VAR_2->ctx_doi == VAR_1) &&
  (VAR_2->ctx_alg == VAR_0));
}

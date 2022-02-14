
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v64; } ;
struct ila_params {TYPE_1__ locator_match; int locator; int csum_diff; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct ila_params *VAR_0)
{
 if (!VAR_0->locator_match.v64)
  return;

 VAR_0->csum_diff = FUNC_0(
    (__be32 *)&VAR_0->locator,
    (__be32 *)&VAR_0->locator_match);
}

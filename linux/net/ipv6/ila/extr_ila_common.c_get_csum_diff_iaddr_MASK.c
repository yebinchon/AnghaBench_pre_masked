
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ v64; } ;
struct ila_params {int locator; int csum_diff; TYPE_1__ locator_match; } ;
struct ila_addr {int loc; } ;
typedef int __wsum ;
typedef int __be32 ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static __wsum FUNC_1(struct ila_addr *VAR_0, struct ila_params *VAR_1)
{
 if (VAR_1->locator_match.v64)
  return VAR_1->csum_diff;
 else
  return FUNC_0((__be32 *)&VAR_1->locator,
       (__be32 *)&VAR_0->loc);
}

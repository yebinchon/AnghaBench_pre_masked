
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwtunnel_state {int dummy; } ;
struct TYPE_2__ {scalar_t__ v64; } ;
struct ila_params {TYPE_1__ locator; } ;


 struct ila_params* FUNC_0 (struct lwtunnel_state*) ;

__attribute__((used)) static int FUNC_1(struct lwtunnel_state *VAR_0, struct lwtunnel_state *VAR_1)
{
 struct ila_params *VAR_2 = FUNC_0(VAR_0);
 struct ila_params *VAR_3 = FUNC_0(VAR_1);

 return (VAR_2->locator.v64 != VAR_3->locator.v64);
}

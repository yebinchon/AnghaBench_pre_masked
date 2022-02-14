
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seg6_iptunnel_encap {int dummy; } ;
struct lwtunnel_state {int dummy; } ;
struct TYPE_2__ {struct seg6_iptunnel_encap* tuninfo; } ;


 TYPE_1__* FUNC_0 (struct lwtunnel_state*) ;

__attribute__((used)) static inline struct seg6_iptunnel_encap *
FUNC_1(struct lwtunnel_state *VAR_0)
{
 return FUNC_0(VAR_0)->tuninfo;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {scalar_t__ prio; scalar_t__ protocol; TYPE_1__* chain; } ;
struct TYPE_2__ {scalar_t__ index; } ;



__attribute__((used)) static bool FUNC_0(const struct tcf_proto *VAR_0,
     const struct tcf_proto *VAR_1)
{
 return VAR_0->chain->index == VAR_1->chain->index &&
        VAR_0->prio == VAR_1->prio &&
        VAR_0->protocol == VAR_1->protocol;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* put ) (struct tcf_proto*,void*) ;} ;


 int FUNC_0 (struct tcf_proto*,void*) ;

__attribute__((used)) static void FUNC_1(struct tcf_proto *VAR_0, void *VAR_1)
{
 if (VAR_0->ops->put && VAR_1)
  VAR_0->ops->put(VAR_0, VAR_1);
}

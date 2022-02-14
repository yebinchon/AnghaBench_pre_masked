
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_walker {int nonempty; int fn; } ;
struct tcf_proto {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* walk ) (struct tcf_proto*,struct tcf_walker*,int) ;} ;


 int FUNC_0 (struct tcf_proto*,struct tcf_walker*,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct tcf_proto *VAR_1, bool VAR_2)
{
 struct tcf_walker VAR_3 = { .fn = VAR_0, };

 if (VAR_1->ops->walk) {
  VAR_1->ops->walk(VAR_1, &VAR_3, VAR_2);
  return !VAR_3.nonempty;
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {scalar_t__ count; scalar_t__ skip; scalar_t__ (* fn ) (struct tcf_proto*,struct cls_cgroup_head*,struct tcf_walker*) ;int stop; } ;
struct tcf_proto {int root; } ;
struct cls_cgroup_head {int dummy; } ;


 struct cls_cgroup_head* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct tcf_proto*,struct cls_cgroup_head*,struct tcf_walker*) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_0, struct tcf_walker *VAR_1,
       bool VAR_2)
{
 struct cls_cgroup_head *VAR_3 = FUNC_0(VAR_0->root);

 if (VAR_1->count < VAR_1->skip)
  goto skip;

 if (!VAR_3)
  return;
 if (VAR_1->fn(VAR_0, VAR_3, VAR_1) < 0) {
  VAR_1->stop = 1;
  return;
 }
skip:
 VAR_1->count++;
}

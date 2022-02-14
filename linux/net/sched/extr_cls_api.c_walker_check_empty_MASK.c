
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_walker {int nonempty; } ;
struct tcf_proto {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct tcf_proto *VAR_0, void *VAR_1,
         struct tcf_walker *VAR_2)
{
 if (VAR_1) {
  VAR_2->nonempty = 1;
  return -1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {int unfolded; int has_children; } ;



__attribute__((used)) static bool FUNC_0(struct hist_entry *VAR_0)
{
 if (!VAR_0)
  return 0;

 if (!VAR_0->has_children)
  return 0;

 VAR_0->unfolded = !VAR_0->unfolded;
 return 1;
}

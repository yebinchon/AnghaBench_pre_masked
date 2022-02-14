
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_leaves_on_tree; } ;
struct key {char* description; TYPE_1__ keys; } ;


 scalar_t__ FUNC_0 (struct key const*) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(const struct key *VAR_0, struct seq_file *VAR_1)
{
 if (VAR_0->description)
  FUNC_2(VAR_1, VAR_0->description);
 else
  FUNC_2(VAR_1, "[anon]");

 if (FUNC_0(VAR_0)) {
  if (VAR_0->keys.nr_leaves_on_tree != 0)
   FUNC_1(VAR_1, ": %lu", VAR_0->keys.nr_leaves_on_tree);
  else
   FUNC_2(VAR_1, ": empty");
 }
}

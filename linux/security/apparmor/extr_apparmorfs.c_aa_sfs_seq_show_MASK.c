
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct aa_sfs_entry* private; } ;
struct TYPE_2__ {char* string; char* u64; int boolean; } ;
struct aa_sfs_entry {int v_type; TYPE_1__ v; } ;





 int FUNC_0 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct aa_sfs_entry *VAR_2 = VAR_0->private;

 if (!VAR_2)
  return 0;

 switch (VAR_2->v_type) {
 case 130:
  FUNC_0(VAR_0, "%s\n", VAR_2->v.boolean ? "yes" : "no");
  break;
 case 129:
  FUNC_0(VAR_0, "%s\n", VAR_2->v.string);
  break;
 case 128:
  FUNC_0(VAR_0, "%#08lx\n", VAR_2->v.u64);
  break;
 default:

  break;
 }

 return 0;
}

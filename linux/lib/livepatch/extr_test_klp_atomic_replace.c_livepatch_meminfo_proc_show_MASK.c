
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 FUNC_0(VAR_1, "%s: %s\n", VAR_0->name,
     "this has been live patched");
 return 0;
}

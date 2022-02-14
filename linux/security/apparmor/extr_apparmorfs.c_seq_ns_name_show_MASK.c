
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 struct aa_label* FUNC_0 () ;
 int FUNC_1 (struct aa_label*) ;
 TYPE_2__* FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct aa_label *VAR_2 = FUNC_0();
 FUNC_3(VAR_0, "%s\n", FUNC_2(VAR_2)->base.name);
 FUNC_1(VAR_2);

 return 0;
}

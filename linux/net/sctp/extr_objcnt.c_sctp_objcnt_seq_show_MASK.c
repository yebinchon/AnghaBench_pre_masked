
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int counter; int label; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ) ;
 int FUNC_3 (struct seq_file*,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 int VAR_3;

 VAR_3 = (int)*(loff_t *)VAR_2;
 FUNC_3(VAR_1, 127);
 FUNC_2(VAR_1, "%s: %d", VAR_0[VAR_3].label,
    FUNC_0(VAR_0[VAR_3].counter));
 FUNC_1(VAR_1, '\n');
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_ino; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, struct dentry *VAR_2)
{
 FUNC_1(VAR_1, "%s:[%lu]", VAR_0, FUNC_0(VAR_2)->i_ino);
 return 0;
}

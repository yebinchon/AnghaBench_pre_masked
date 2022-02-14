
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int * map_cmdline_to_pid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 void* FUNC_2 (struct seq_file*,void*,scalar_t__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_3(struct seq_file *VAR_2, loff_t *VAR_3)
{
 void *VAR_4;
 loff_t VAR_5 = 0;

 FUNC_1();
 FUNC_0(&VAR_1);

 VAR_4 = &VAR_0->map_cmdline_to_pid[0];
 while (VAR_5 <= *VAR_3) {
  VAR_4 = FUNC_2(VAR_2, VAR_4, &VAR_5);
  if (!VAR_4)
   return ((void*)0);
 }

 return VAR_4;
}

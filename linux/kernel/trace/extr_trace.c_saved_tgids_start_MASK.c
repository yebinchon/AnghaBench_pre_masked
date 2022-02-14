
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 void* FUNC_0 (struct seq_file*,void*,scalar_t__*) ;
 int * VAR_0 ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 void *VAR_3;
 loff_t VAR_4 = 0;

 if (!VAR_0)
  return ((void*)0);

 VAR_3 = &VAR_0[0];
 while (VAR_4 <= *VAR_2) {
  VAR_3 = FUNC_0(VAR_1, VAR_3, &VAR_4);
  if (!VAR_3)
   return ((void*)0);
 }

 return VAR_3;
}

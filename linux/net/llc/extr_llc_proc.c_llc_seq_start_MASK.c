
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 void* VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_1, loff_t *VAR_2)
{
 loff_t VAR_3 = *VAR_2;

 FUNC_1();
 return VAR_3 ? FUNC_0(--VAR_3) : VAR_0;
}

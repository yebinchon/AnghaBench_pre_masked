
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef unsigned long loff_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 unsigned long VAR_1 ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_2, loff_t *VAR_3)
{
 unsigned long VAR_4 = *VAR_3;

 if (VAR_4 == 0)
  return (void *) 1;

 VAR_4--;

 if (VAR_4 > 0)
  VAR_4 = FUNC_1(VAR_4 - 1, VAR_0);
 else
  VAR_4 = FUNC_0(VAR_0);

 *VAR_3 = VAR_4 + 1;

 if (VAR_4 < VAR_1)
  return (void *)(unsigned long)(VAR_4 + 2);

 return ((void*)0);
}

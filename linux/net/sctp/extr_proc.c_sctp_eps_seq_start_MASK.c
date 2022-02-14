
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_1, loff_t *VAR_2)
{
 if (*VAR_2 >= VAR_0)
  return ((void*)0);

 if (*VAR_2 < 0)
  *VAR_2 = 0;

 if (*VAR_2 == 0)
  FUNC_0(VAR_1, " ENDPT     SOCK   STY SST HBKT LPORT   UID INODE LADDRS\n");

 return (void *)VAR_2;
}

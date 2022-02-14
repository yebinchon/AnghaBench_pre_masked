
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,int,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char*) ;
 scalar_t__* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 unsigned int VAR_3;
 FUNC_1(VAR_1, "      time (secs)        count\n");
 FUNC_1(VAR_1, "------------------------------\n");
 for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
  if (VAR_0[VAR_3] == 0)
   continue;
  FUNC_0(VAR_1, "%10u - %-10u %4u\n",
   VAR_3 ? 1 << (VAR_3 - 1) : 0, 1 << VAR_3,
    VAR_0[VAR_3]);
 }
 return 0;
}

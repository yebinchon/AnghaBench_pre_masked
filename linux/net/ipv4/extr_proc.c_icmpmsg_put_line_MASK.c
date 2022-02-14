
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, unsigned long *VAR_1,
        unsigned short *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3) {
  FUNC_1(VAR_0, "\nIcmpMsg:");
  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
   FUNC_0(VAR_0, " %sType%u",
    VAR_2[VAR_4] & 0x100 ? "Out" : "In",
    VAR_2[VAR_4] & 0xff);
  FUNC_1(VAR_0, "\nIcmpMsg:");
  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
   FUNC_0(VAR_0, " %lu", VAR_1[VAR_4]);
 }
}

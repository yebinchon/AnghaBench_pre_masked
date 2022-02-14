
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;
typedef int CMD_PREFIX ;


 int FUNC_0 (struct seq_file*,char) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, u8 VAR_1)
{
 u8 VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(CMD_PREFIX) - 1; VAR_2++)
  FUNC_0(VAR_0, ' ');
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0, ' ');
 FUNC_1(VAR_0, "^\n");
}

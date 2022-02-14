
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_array {int trace_flags; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct seq_file*,int) ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct trace_array *VAR_6,
     struct seq_file *VAR_7, u32 VAR_8)
{
 int VAR_9 = VAR_6->trace_flags & VAR_5;

 if (VAR_9)
  FUNC_0(VAR_7, VAR_8);


 FUNC_1(VAR_7, '#');
 if (VAR_8 & VAR_0)
  FUNC_2(VAR_7, "     TIME       ");
 if (VAR_8 & VAR_4)
  FUNC_2(VAR_7, "   REL TIME     ");
 if (VAR_8 & VAR_1)
  FUNC_2(VAR_7, " CPU");
 if (VAR_8 & VAR_3)
  FUNC_2(VAR_7, "  TASK/PID       ");
 if (VAR_9)
  FUNC_2(VAR_7, "||||   ");
 if (VAR_8 & VAR_2)
  FUNC_2(VAR_7, "  DURATION   ");
 FUNC_2(VAR_7, "               FUNCTION CALLS\n");


 FUNC_1(VAR_7, '#');
 if (VAR_8 & VAR_0)
  FUNC_2(VAR_7, "      |         ");
 if (VAR_8 & VAR_4)
  FUNC_2(VAR_7, "      |         ");
 if (VAR_8 & VAR_1)
  FUNC_2(VAR_7, " |  ");
 if (VAR_8 & VAR_3)
  FUNC_2(VAR_7, "   |    |        ");
 if (VAR_9)
  FUNC_2(VAR_7, "||||   ");
 if (VAR_8 & VAR_2)
  FUNC_2(VAR_7, "   |   |      ");
 FUNC_2(VAR_7, "               |   |   |   |\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0)
{
 if (!FUNC_0())
  return;
 FUNC_1(VAR_0, "# WARNING: FUNCTION TRACING IS CORRUPTED\n"
      "#          MAY BE MISSING FUNCTION EVENTS\n");
}

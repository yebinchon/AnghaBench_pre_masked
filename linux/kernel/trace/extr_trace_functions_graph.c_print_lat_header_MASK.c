
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct seq_file*,char*,int,char const*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_4, u32 VAR_5)
{
 static const char VAR_6[] = "                "
  "    "
  "                 ";
 int VAR_7 = 0;

 if (VAR_5 & VAR_0)
  VAR_7 += 16;
 if (VAR_5 & VAR_3)
  VAR_7 += 16;
 if (VAR_5 & VAR_1)
  VAR_7 += 4;
 if (VAR_5 & VAR_2)
  VAR_7 += 17;

 FUNC_0(VAR_4, "#%.*s  _-----=> irqs-off        \n", VAR_7, VAR_6);
 FUNC_0(VAR_4, "#%.*s / _----=> need-resched    \n", VAR_7, VAR_6);
 FUNC_0(VAR_4, "#%.*s| / _---=> hardirq/softirq \n", VAR_7, VAR_6);
 FUNC_0(VAR_4, "#%.*s|| / _--=> preempt-depth   \n", VAR_7, VAR_6);
 FUNC_0(VAR_4, "#%.*s||| /                      \n", VAR_7, VAR_6);
}

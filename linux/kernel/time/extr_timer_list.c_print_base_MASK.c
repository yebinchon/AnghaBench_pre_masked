
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
struct hrtimer_clock_base {int offset; int get_time; int index; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,struct hrtimer_clock_base*,scalar_t__) ;
 int FUNC_3 (struct seq_file*,int ) ;

__attribute__((used)) static void
FUNC_4(struct seq_file *VAR_1, struct hrtimer_clock_base *VAR_2, u64 VAR_3)
{
 FUNC_0(VAR_1, "  .base:       %pK\n", VAR_2);
 FUNC_0(VAR_1, "  .index:      %d\n", VAR_2->index);

 FUNC_0(VAR_1, "  .resolution: %u nsecs\n", VAR_0);

 FUNC_0(VAR_1, "  .get_time:   ");
 FUNC_3(VAR_1, VAR_2->get_time);
 FUNC_0(VAR_1, "\n");




 FUNC_0(VAR_1, "active timers:\n");
 FUNC_2(VAR_1, VAR_2, VAR_3 + FUNC_1(VAR_2->offset));
}

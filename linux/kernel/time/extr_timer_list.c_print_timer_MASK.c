
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
struct hrtimer {int state; struct hrtimer* function; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;
 int FUNC_1 (struct hrtimer*) ;
 int FUNC_2 (struct hrtimer*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct seq_file*,struct hrtimer*) ;

__attribute__((used)) static void
FUNC_5(struct seq_file *VAR_0, struct hrtimer *VAR_1, struct hrtimer *VAR_2,
     int VAR_3, u64 VAR_4)
{
 FUNC_0(VAR_0, " #%d: ", VAR_3);
 FUNC_4(VAR_0, VAR_1);
 FUNC_0(VAR_0, ", ");
 FUNC_4(VAR_0, VAR_2->function);
 FUNC_0(VAR_0, ", S:%02x", VAR_2->state);
 FUNC_0(VAR_0, "\n");
 FUNC_0(VAR_0, " # expires at %Lu-%Lu nsecs [in %Ld to %Ld nsecs]\n",
  (unsigned long long)FUNC_3(FUNC_2(VAR_2)),
  (unsigned long long)FUNC_3(FUNC_1(VAR_2)),
  (long long)(FUNC_3(FUNC_2(VAR_2)) - VAR_4),
  (long long)(FUNC_3(FUNC_1(VAR_2)) - VAR_4));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static inline void FUNC_1(struct seq_file *VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_1, "Timer List Version: v0.8\n");
 FUNC_0(VAR_1, "HRTIMER_MAX_CLOCK_BASES: %d\n", VAR_0);
 FUNC_0(VAR_1, "now at %Ld nsecs\n", (unsigned long long)VAR_2);
 FUNC_0(VAR_1, "\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int dummy; } ;


 int FUNC_0 (struct trace_seq*,char*,struct tep_event*,char*,struct tep_record*,int ) ;
 int FUNC_1 (struct trace_seq*,char*,struct tep_event*,char*,struct tep_record*,int) ;
 int FUNC_2 (struct trace_seq*,char*) ;

__attribute__((used)) static int FUNC_3(struct trace_seq *VAR_0,
    struct tep_record *VAR_1,
    struct tep_event *VAR_2, void *VAR_3)
{
 FUNC_2(VAR_0, "hrtimer=");

 if (FUNC_1(VAR_0, "0x%llx", VAR_2, "timer",
    VAR_1, 0) == -1)
  FUNC_1(VAR_0, "0x%llx", VAR_2, "hrtimer",
        VAR_1, 1);

 FUNC_2(VAR_0, " now=");

 FUNC_1(VAR_0, "%llu", VAR_2, "now", VAR_1, 1);

 FUNC_0(VAR_0, " function=%s", VAR_2, "function",
    VAR_1, 0);
 return 0;
}

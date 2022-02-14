
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct trace_seq*,struct tep_record*,struct tep_event*,char*) ;
 scalar_t__ FUNC_1 (struct trace_seq*,struct tep_event*,char*,struct tep_record*,unsigned long long*,int ) ;
 int FUNC_2 (struct trace_seq*,char*,struct tep_event*,char*,struct tep_record*,int) ;
 int FUNC_3 (struct trace_seq*,char*,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_4(struct trace_seq *VAR_0, struct tep_record *VAR_1,
       struct tep_event *VAR_2, void *VAR_3)
{
 unsigned long long VAR_4 = 0, VAR_5 = 0;

 if (FUNC_0(VAR_0, VAR_1, VAR_2, "exit_reason") < 0)
  return -1;

 FUNC_2(VAR_0, " rip 0x%lx", VAR_2, "guest_rip", VAR_1, 1);

 if (FUNC_1(VAR_0, VAR_2, "info1", VAR_1, &VAR_4, 0) >= 0
     && FUNC_1(VAR_0, VAR_2, "info2", VAR_1, &VAR_5, 0) >= 0)
  FUNC_3(VAR_0, " info %llx %llx", VAR_4, VAR_5);

 return 0;
}

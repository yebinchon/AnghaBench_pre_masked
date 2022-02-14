
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int dummy; } ;


 scalar_t__ FUNC_0 (struct trace_seq*,struct tep_record*,struct tep_event*,char*) ;
 int FUNC_1 (struct trace_seq*,char*,struct tep_event*,char*,struct tep_record*,int) ;

__attribute__((used)) static int FUNC_2(struct trace_seq *VAR_0, struct tep_record *VAR_1,
         struct tep_event *VAR_2, void *VAR_3)
{
 if (FUNC_0(VAR_0, VAR_1, VAR_2, "exit_code") < 0)
  return -1;

 FUNC_1(VAR_0, " info1 %llx", VAR_2, "exit_info1", VAR_1, 1);
 FUNC_1(VAR_0, " info2 %llx", VAR_2, "exit_info2", VAR_1, 1);
 FUNC_1(VAR_0, " int_info %llx", VAR_2, "exit_int_info", VAR_1, 1);
 FUNC_1(VAR_0, " int_info_err %llx", VAR_2, "exit_int_info_err", VAR_1, 1);

 return 0;
}

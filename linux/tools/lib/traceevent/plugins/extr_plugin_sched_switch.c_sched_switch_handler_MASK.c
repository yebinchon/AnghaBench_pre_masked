
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_format_field {int dummy; } ;
struct tep_event {int dummy; } ;


 struct tep_format_field* FUNC_0 (struct tep_event*,char*) ;
 scalar_t__ FUNC_1 (struct trace_seq*,struct tep_event*,char*,struct tep_record*,unsigned long long*,int) ;
 int FUNC_2 (struct trace_seq*,char*,int) ;
 int FUNC_3 (struct trace_seq*,char) ;
 int FUNC_4 (struct trace_seq*,char*) ;
 int FUNC_5 (struct tep_format_field*,struct tep_record*,struct trace_seq*,unsigned long long) ;
 int FUNC_6 (struct trace_seq*,unsigned long long) ;

__attribute__((used)) static int FUNC_7(struct trace_seq *VAR_0,
    struct tep_record *VAR_1,
    struct tep_event *VAR_2, void *VAR_3)
{
 struct tep_format_field *VAR_4;
 unsigned long long VAR_5;

 if (FUNC_1(VAR_0, VAR_2, "prev_pid", VAR_1, &VAR_5, 1))
  return FUNC_3(VAR_0, '!');

 VAR_4 = FUNC_0(VAR_2, "prev_comm");
 if (VAR_4) {
  FUNC_5(VAR_4, VAR_1, VAR_0, VAR_5);
  FUNC_3(VAR_0, ':');
 }
 FUNC_2(VAR_0, "%lld ", VAR_5);

 if (FUNC_1(VAR_0, VAR_2, "prev_prio", VAR_1, &VAR_5, 0) == 0)
  FUNC_2(VAR_0, "[%d] ", (int) VAR_5);

 if (FUNC_1(VAR_0, VAR_2, "prev_state", VAR_1, &VAR_5, 0) == 0)
  FUNC_6(VAR_0, VAR_5);

 FUNC_4(VAR_0, " ==> ");

 if (FUNC_1(VAR_0, VAR_2, "next_pid", VAR_1, &VAR_5, 1))
  return FUNC_3(VAR_0, '!');

 VAR_4 = FUNC_0(VAR_2, "next_comm");
 if (VAR_4) {
  FUNC_5(VAR_4, VAR_1, VAR_0, VAR_5);
  FUNC_3(VAR_0, ':');
 }
 FUNC_2(VAR_0, "%lld", VAR_5);

 if (FUNC_1(VAR_0, VAR_2, "next_prio", VAR_1, &VAR_5, 0) == 0)
  FUNC_2(VAR_0, " [%d]", (int) VAR_5);

 return 0;
}

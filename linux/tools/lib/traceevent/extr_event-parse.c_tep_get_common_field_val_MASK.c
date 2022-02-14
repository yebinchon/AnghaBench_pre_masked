
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_format_field {int dummy; } ;
struct tep_event {int dummy; } ;


 int FUNC_0 (struct trace_seq*,struct tep_format_field*,char const*,struct tep_record*,unsigned long long*,int) ;
 struct tep_format_field* FUNC_1 (struct tep_event*,char const*) ;

int FUNC_2(struct trace_seq *VAR_0, struct tep_event *VAR_1,
        const char *VAR_2, struct tep_record *VAR_3,
        unsigned long long *VAR_4, int VAR_5)
{
 struct tep_format_field *VAR_6;

 if (!VAR_1)
  return -1;

 VAR_6 = FUNC_1(VAR_1, VAR_2);

 return FUNC_0(VAR_0, VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
}

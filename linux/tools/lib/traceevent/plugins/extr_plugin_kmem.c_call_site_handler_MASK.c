
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {void* data; } ;
struct tep_format_field {int dummy; } ;
struct tep_event {int tep; } ;


 struct tep_format_field* FUNC_0 (struct tep_event*,char*) ;
 char* FUNC_1 (int ,unsigned long long) ;
 unsigned long long FUNC_2 (int ,unsigned long long) ;
 scalar_t__ FUNC_3 (struct tep_format_field*,void*,unsigned long long*) ;
 int FUNC_4 (struct trace_seq*,char*,char const*,int) ;

__attribute__((used)) static int FUNC_5(struct trace_seq *VAR_0, struct tep_record *VAR_1,
        struct tep_event *VAR_2, void *VAR_3)
{
 struct tep_format_field *VAR_4;
 unsigned long long VAR_5, VAR_6;
 void *VAR_7 = VAR_1->data;
 const char *VAR_8;

 VAR_4 = FUNC_0(VAR_2, "call_site");
 if (!VAR_4)
  return 1;

 if (FUNC_3(VAR_4, VAR_7, &VAR_5))
  return 1;

 VAR_8 = FUNC_1(VAR_2->tep, VAR_5);
 if (!VAR_8)
  return 1;

 VAR_6 = FUNC_2(VAR_2->tep, VAR_5);

 FUNC_4(VAR_0, "(%s+0x%x) ", VAR_8, (int)(VAR_5 - VAR_6));
 return 1;
}

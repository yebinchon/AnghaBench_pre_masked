
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int data; } ;
struct tep_format_field {int dummy; } ;


 scalar_t__ FUNC_0 (struct tep_format_field*,int ,unsigned long long*) ;
 int FUNC_1 (struct trace_seq*,char*,char const*) ;

int FUNC_2(struct trace_seq *VAR_0, struct tep_format_field *VAR_1,
    const char *VAR_2, struct tep_record *VAR_3,
    unsigned long long *VAR_4, int VAR_5)
{
 if (!VAR_1) {
  if (VAR_5)
   FUNC_1(VAR_0, "<CANT FIND FIELD %s>", VAR_2);
  return -1;
 }

 if (FUNC_0(VAR_1, VAR_3->data, VAR_4)) {
  if (VAR_5)
   FUNC_1(VAR_0, " %s=INVALID", VAR_2);
  return -1;
 }

 return 0;
}

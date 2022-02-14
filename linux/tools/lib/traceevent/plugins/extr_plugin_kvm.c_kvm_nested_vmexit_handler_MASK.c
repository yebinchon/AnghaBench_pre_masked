
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int dummy; } ;


 int FUNC_0 (struct trace_seq*,struct tep_record*,struct tep_event*,void*) ;
 int FUNC_1 (struct trace_seq*,char*,struct tep_event*,char*,struct tep_record*,int) ;

__attribute__((used)) static int FUNC_2(struct trace_seq *VAR_0, struct tep_record *VAR_1,
         struct tep_event *VAR_2, void *VAR_3)
{
 FUNC_1(VAR_0, "rip %llx ", VAR_2, "rip", VAR_1, 1);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}

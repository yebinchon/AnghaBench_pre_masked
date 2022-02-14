
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int dummy; } ;


 int FUNC_0 (struct trace_seq*,struct tep_record*,struct tep_event*,void*) ;
 scalar_t__ FUNC_1 (struct trace_seq*,struct tep_event*,char*,struct tep_record*,unsigned long long*,int) ;
 int FUNC_2 (struct trace_seq*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct trace_seq *VAR_0,
        struct tep_record *VAR_1,
        struct tep_event *VAR_2, void *VAR_3)
{
 unsigned long long VAR_4;

 if (FUNC_1(VAR_0, VAR_2, "created", VAR_1, &VAR_4, 1) < 0)
  return -1;

 FUNC_2(VAR_0, "%s ", VAR_4 ? "new" : "existing");

 if (FUNC_1(VAR_0, VAR_2, "gfn", VAR_1, &VAR_4, 1) < 0)
  return -1;

 FUNC_2(VAR_0, "sp gfn %llx ", VAR_4);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int dummy; } ;


 char* FUNC_0 (unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (struct trace_seq*,struct tep_event*,char const*,struct tep_record*,unsigned long long*,int) ;
 int FUNC_2 (struct trace_seq*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct trace_seq *VAR_0, struct tep_record *VAR_1,
        struct tep_event *VAR_2, const char *VAR_3)
{
 unsigned long long VAR_4;
 unsigned long long VAR_5;
 const char *VAR_6;

 if (FUNC_1(VAR_0, VAR_2, VAR_3, VAR_1, &VAR_5, 1) < 0)
  return -1;

 if (FUNC_1(VAR_0, VAR_2, "isa", VAR_1, &VAR_4, 0) < 0)
  VAR_4 = 1;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6)
  FUNC_2(VAR_0, "reason %s", VAR_6);
 else
  FUNC_2(VAR_0, "reason UNKNOWN (%llu)", VAR_5);
 return 0;
}

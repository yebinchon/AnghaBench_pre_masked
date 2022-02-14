
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct trace_seq {int dummy; } ;
struct tep_record {int dummy; } ;
struct tep_event {int dummy; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 char* FUNC_0 (int *,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 int * FUNC_1 (struct trace_seq*,struct tep_event*,char*,struct tep_record*,int*,int) ;
 scalar_t__ FUNC_2 (struct trace_seq*,struct tep_event*,char*,struct tep_record*,unsigned long long*,int) ;
 int FUNC_3 (struct trace_seq*,char*,unsigned long long,unsigned long long,char const*,char*) ;

__attribute__((used)) static int FUNC_4(struct trace_seq *VAR_4,
        struct tep_record *VAR_5,
        struct tep_event *VAR_6, void *VAR_7)
{
 unsigned long long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 uint8_t *VAR_14;
 const char *VAR_15;

 if (FUNC_2(VAR_4, VAR_6, "rip", VAR_5, &VAR_8, 1) < 0)
  return -1;

 if (FUNC_2(VAR_4, VAR_6, "csbase", VAR_5, &VAR_9, 1) < 0)
  return -1;

 if (FUNC_2(VAR_4, VAR_6, "len", VAR_5, &VAR_10, 1) < 0)
  return -1;

 if (FUNC_2(VAR_4, VAR_6, "flags", VAR_5, &VAR_11, 1) < 0)
  return -1;

 if (FUNC_2(VAR_4, VAR_6, "failed", VAR_5, &VAR_12, 1) < 0)
  return -1;

 VAR_14 = FUNC_1(VAR_4, VAR_6, "insn", VAR_5, &VAR_13, 1);
 if (!VAR_14)
  return -1;

 VAR_15 = FUNC_0(VAR_14, VAR_10, VAR_8,
        VAR_11 & VAR_0,
        VAR_11 & VAR_3,
        VAR_11 & VAR_1,
        VAR_11 & VAR_2);

 FUNC_3(VAR_4, "%llx:%llx: %s%s", VAR_9, VAR_8, VAR_15,
    VAR_12 ? " FAIL" : "");
 return 0;
}

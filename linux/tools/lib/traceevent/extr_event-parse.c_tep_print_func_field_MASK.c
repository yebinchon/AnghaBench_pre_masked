
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct tep_record {int data; } ;
struct tep_handle {int dummy; } ;
struct tep_format_field {int dummy; } ;
struct tep_event {struct tep_handle* tep; } ;
struct func_map {char* func; scalar_t__ addr; } ;


 struct func_map* FUNC_0 (struct tep_handle*,unsigned long long) ;
 int FUNC_1 (char*,int,char*,char*,scalar_t__) ;
 int FUNC_2 (char*,char*,unsigned long long) ;
 struct tep_format_field* FUNC_3 (struct tep_event*,char const*) ;
 scalar_t__ FUNC_4 (struct tep_format_field*,int ,unsigned long long*) ;
 int FUNC_5 (struct trace_seq*,char const*,char const*) ;

int FUNC_6(struct trace_seq *VAR_0, const char *VAR_1,
    struct tep_event *VAR_2, const char *VAR_3,
    struct tep_record *VAR_4, int VAR_5)
{
 struct tep_format_field *VAR_6 = FUNC_3(VAR_2, VAR_3);
 struct tep_handle *VAR_7 = VAR_2->tep;
 unsigned long long VAR_8;
 struct func_map *VAR_9;
 char VAR_10[128];

 if (!VAR_6)
  goto failed;

 if (FUNC_4(VAR_6, VAR_4->data, &VAR_8))
  goto failed;

 VAR_9 = FUNC_0(VAR_7, VAR_8);

 if (VAR_9)
  FUNC_1(VAR_10, 128, "%s/0x%llx", VAR_9->func, VAR_9->addr - VAR_8);
 else
  FUNC_2(VAR_10, "0x%08llx", VAR_8);

 return FUNC_5(VAR_0, VAR_1, VAR_10);

 failed:
 if (VAR_5)
  FUNC_5(VAR_0, "CAN'T FIND FIELD \"%s\"", VAR_3);
 return -1;
}

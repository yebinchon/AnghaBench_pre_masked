
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int dummy; } ;
struct prog_entry {int dummy; } ;
struct filter_parse_error {int dummy; } ;
struct event_filter {int prog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct prog_entry*) ;

 int FUNC_1 (struct prog_entry*) ;

 int FUNC_2 (char const*,int*,int*,int*) ;
 int FUNC_3 (struct filter_parse_error*,int ,int) ;
 int VAR_4 ;
 struct prog_entry* FUNC_4 (char const*,int,int,int ,struct trace_event_call*,struct filter_parse_error*) ;
 int FUNC_5 (int ,struct prog_entry*) ;

__attribute__((used)) static int FUNC_6(struct trace_event_call *VAR_5,
    const char *VAR_6,
    struct event_filter *VAR_7,
    struct filter_parse_error *VAR_8)
{
 struct prog_entry *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_6, &VAR_10, &VAR_11, &VAR_12);
 if (VAR_13 < 0) {
  switch (VAR_13) {
  case 129:
   FUNC_3(VAR_8, VAR_1, VAR_12);
   break;
  case 128:
   FUNC_3(VAR_8, VAR_3, VAR_12);
   break;
  default:
   FUNC_3(VAR_8, VAR_2, VAR_12);
  }
  return VAR_13;
 }

 if (!VAR_11)
  return -VAR_0;

 VAR_9 = FUNC_4(VAR_6, VAR_10, VAR_11,
          VAR_4, VAR_5, VAR_8);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_5(VAR_7->prog, VAR_9);
 return 0;
}

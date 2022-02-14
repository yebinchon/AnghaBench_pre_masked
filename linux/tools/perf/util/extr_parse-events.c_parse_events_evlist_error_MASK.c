
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_state {struct parse_events_error* error; } ;
struct parse_events_error {int idx; int str; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char const*) ;

void FUNC_2(struct parse_events_state *VAR_0,
          int VAR_1, const char *VAR_2)
{
 struct parse_events_error *VAR_3 = VAR_0->error;

 if (!VAR_3)
  return;
 VAR_3->idx = VAR_1;
 VAR_3->str = FUNC_1(VAR_2);
 FUNC_0(!VAR_3->str, "WARNING: failed to allocate error string");
}

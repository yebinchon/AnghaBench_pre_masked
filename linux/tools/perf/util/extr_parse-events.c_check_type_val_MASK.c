
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_term {int type_val; int err_val; } ;
struct parse_events_error {void* str; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct parse_events_term *VAR_2,
     struct parse_events_error *VAR_3,
     int VAR_4)
{
 if (VAR_4 == VAR_2->type_val)
  return 0;

 if (VAR_3) {
  VAR_3->idx = VAR_2->err_val;
  if (VAR_4 == VAR_1)
   VAR_3->str = FUNC_0("expected numeric value");
  else
   VAR_3->str = FUNC_0("expected string value");
 }
 return -VAR_0;
}

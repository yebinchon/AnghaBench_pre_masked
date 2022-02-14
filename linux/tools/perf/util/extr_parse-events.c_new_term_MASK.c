
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {char* str; int num; } ;
struct parse_events_term {int weak; int type_val; TYPE_1__ val; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;


 int FUNC_1 (struct parse_events_term*) ;
 struct parse_events_term* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct parse_events_term **VAR_2,
      struct parse_events_term *VAR_3,
      char *VAR_4, u64 VAR_5)
{
 struct parse_events_term *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 if (!VAR_6)
  return -VAR_1;

 *VAR_6 = *VAR_3;
 FUNC_0(&VAR_6->list);
 VAR_6->weak = 0;

 switch (VAR_6->type_val) {
 case 129:
  VAR_6->val.num = VAR_5;
  break;
 case 128:
  VAR_6->val.str = VAR_4;
  break;
 default:
  FUNC_1(VAR_6);
  return -VAR_0;
 }

 *VAR_2 = VAR_6;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse_events_term {char* config; int type_term; int type_val; } ;
struct event_symbol {scalar_t__ symbol; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct event_symbol* VAR_3 ;
 int FUNC_1 (struct parse_events_term**,struct parse_events_term*,char*,int ) ;

int FUNC_2(struct parse_events_term **VAR_4,
         char *VAR_5, unsigned VAR_6)
{
 struct event_symbol *VAR_7;
 struct parse_events_term VAR_8 = {
  .type_val = VAR_0,
  .type_term = VAR_1,
  .config = VAR_5 ?: (char *) "event",
 };

 FUNC_0(VAR_6 >= VAR_2);
 VAR_7 = &VAR_3[VAR_6];

 return FUNC_1(VAR_4, &VAR_8, (char *) VAR_7->symbol, 0);
}

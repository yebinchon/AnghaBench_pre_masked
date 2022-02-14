
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_events_term {int type_term; char* config; int err_val; int err_term; int type_val; } ;
struct TYPE_2__ {int first_column; } ;
typedef TYPE_1__ YYLTYPE ;


 int VAR_0 ;
 int FUNC_0 (struct parse_events_term**,struct parse_events_term*,char*,int ) ;

int FUNC_1(struct parse_events_term **VAR_1,
      int VAR_2, char *VAR_3, char *VAR_4,
      void *VAR_5, void *VAR_6)
{
 YYLTYPE *VAR_7 = VAR_5;
 YYLTYPE *VAR_8 = VAR_6;

 struct parse_events_term VAR_9 = {
  .type_val = VAR_0,
  .type_term = VAR_2,
  .config = VAR_3,
  .err_term = VAR_7 ? VAR_7->first_column : 0,
  .err_val = VAR_8 ? VAR_8->first_column : 0,
 };

 return FUNC_0(VAR_1, &VAR_9, VAR_4, 0);
}

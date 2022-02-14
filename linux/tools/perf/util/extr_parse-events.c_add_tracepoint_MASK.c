
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse_events_error {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {int node; } ;
struct evsel {TYPE_1__ core; int config_terms; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct evsel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evsel*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct list_head*,int *) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *,int *) ;
 struct evsel* FUNC_6 (char const*,char const*,int ) ;
 int FUNC_7 (struct parse_events_error*,int,char const*,char const*) ;

__attribute__((used)) static int FUNC_8(struct list_head *VAR_2, int *VAR_3,
     const char *VAR_4, const char *VAR_5,
     struct parse_events_error *VAR_6,
     struct list_head *VAR_7)
{
 struct evsel *VAR_8;

 VAR_8 = FUNC_6(VAR_4, VAR_5, (*VAR_3)++);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_6, FUNC_2(VAR_8), VAR_4, VAR_5);
  return FUNC_2(VAR_8);
 }

 if (VAR_7) {
  FUNC_1(VAR_1);

  if (FUNC_3(VAR_7, &VAR_1))
   return -VAR_0;
  FUNC_5(&VAR_1, &VAR_8->config_terms);
 }

 FUNC_4(&VAR_8->core.node, VAR_2);
 return 0;
}

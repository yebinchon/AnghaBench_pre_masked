
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_parse_error {int dummy; } ;
struct event_filter {int filter_string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct event_filter*) ;
 int FUNC_2 (struct filter_parse_error*) ;
 int FUNC_3 (char*,int ) ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(char *VAR_3, bool VAR_4,
          struct filter_parse_error **VAR_5,
          struct event_filter **VAR_6)
{
 struct event_filter *VAR_7;
 struct filter_parse_error *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (FUNC_0(*VAR_5 || *VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_2);
 if (VAR_7 && VAR_4) {
  VAR_7->filter_string = FUNC_3(VAR_3, VAR_2);
  if (!VAR_7->filter_string)
   VAR_9 = -VAR_1;
 }

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_2);

 if (!VAR_7 || !VAR_8 || VAR_9) {
  FUNC_2(VAR_8);
  FUNC_1(VAR_7);
  return -VAR_1;
 }


 *VAR_6 = VAR_7;
 *VAR_5 = VAR_8;

 return 0;
}

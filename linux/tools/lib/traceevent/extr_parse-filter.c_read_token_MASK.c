
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,char,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 char FUNC_4 () ;
 int FUNC_5 (char**) ;

__attribute__((used)) static enum tep_event_type FUNC_6(char **VAR_3)
{
 enum tep_event_type VAR_4;
 char *VAR_5 = ((void*)0);

 do {
  FUNC_0(VAR_5);
  VAR_4 = FUNC_5(&VAR_5);
 } while (VAR_4 == VAR_1 || VAR_4 == VAR_2);


 if (VAR_5 &&
     (FUNC_3(VAR_5, "=") == 0 || FUNC_3(VAR_5, "!") == 0) &&
     FUNC_4() == '~') {

  *VAR_3 = FUNC_1(3);
  if (*VAR_3 == ((void*)0)) {
   FUNC_0(VAR_5);
   return VAR_0;
  }
  FUNC_2(*VAR_3, "%c%c", *VAR_5, '~');
  FUNC_0(VAR_5);

  FUNC_5(&VAR_5);
  FUNC_0(VAR_5);
 } else
  *VAR_3 = VAR_5;

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum tep_event_type { ____Placeholder_tep_event_type } tep_event_type ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(enum tep_event_type VAR_0, enum tep_event_type VAR_1)
{
 if (VAR_0 != VAR_1) {
  FUNC_0("Error: expected type %d but read %d",
      VAR_1, VAR_0);
  return -1;
 }
 return 0;
}

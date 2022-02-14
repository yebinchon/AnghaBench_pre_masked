
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int event_trigger_command_tag_check_result ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static event_trigger_command_tag_check_result
FUNC_1(const char *VAR_2)
{
 if (FUNC_0(VAR_2, "ALTER TABLE") == 0 ||
  FUNC_0(VAR_2, "ALTER TYPE") == 0)
  return VAR_1;

 return VAR_0;
}

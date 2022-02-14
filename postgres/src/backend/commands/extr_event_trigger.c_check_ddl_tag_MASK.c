
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* obtypename; int supported; } ;
typedef TYPE_1__ event_trigger_support_data ;
typedef int event_trigger_command_tag_check_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static event_trigger_command_tag_check_result
FUNC_2(const char *VAR_4)
{
 const char *VAR_5;
 const event_trigger_support_data *VAR_6;




 if (FUNC_0(VAR_4, "CREATE TABLE AS") == 0 ||
  FUNC_0(VAR_4, "SELECT INTO") == 0 ||
  FUNC_0(VAR_4, "REFRESH MATERIALIZED VIEW") == 0 ||
  FUNC_0(VAR_4, "ALTER DEFAULT PRIVILEGES") == 0 ||
  FUNC_0(VAR_4, "ALTER LARGE OBJECT") == 0 ||
  FUNC_0(VAR_4, "COMMENT") == 0 ||
  FUNC_0(VAR_4, "GRANT") == 0 ||
  FUNC_0(VAR_4, "REVOKE") == 0 ||
  FUNC_0(VAR_4, "DROP OWNED") == 0 ||
  FUNC_0(VAR_4, "IMPORT FOREIGN SCHEMA") == 0 ||
  FUNC_0(VAR_4, "SECURITY LABEL") == 0)
  return VAR_2;




 if (FUNC_1(VAR_4, "CREATE ", 7) == 0)
  VAR_5 = VAR_4 + 7;
 else if (FUNC_1(VAR_4, "ALTER ", 6) == 0)
  VAR_5 = VAR_4 + 6;
 else if (FUNC_1(VAR_4, "DROP ", 5) == 0)
  VAR_5 = VAR_4 + 5;
 else
  return VAR_0;




 for (VAR_6 = VAR_3; VAR_6->obtypename != ((void*)0); VAR_6++)
  if (FUNC_0(VAR_6->obtypename, VAR_5) == 0)
   break;
 if (VAR_6->obtypename == ((void*)0))
  return VAR_0;
 if (!VAR_6->supported)
  return VAR_1;
 return VAR_2;
}

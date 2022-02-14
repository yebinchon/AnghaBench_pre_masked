
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db; } ;


 char* FUNC_0 (int ,char*) ;
 char const* FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;

const char *
FUNC_2(void)
{
 const char *VAR_1;

 if (!VAR_0.db)
  return ((void*)0);

 VAR_1 = FUNC_0(VAR_0.db, "session_authorization");
 if (VAR_1)
  return VAR_1;
 else
  return FUNC_1(VAR_0.db);
}

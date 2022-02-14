
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 char* VAR_3 ;
 int FUNC_6 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_6)
{

  FUNC_0("enduser_setup_start");

  VAR_3[0] = '\0';

  if (!VAR_2)
  {
    VAR_2 = FUNC_7(VAR_1);
  }

  if(FUNC_4(VAR_6))
  {
    goto failed;
  }

  if (!VAR_4)
  {
    FUNC_0("Performing AP Scan to identify likely AP's channel. Enabling Station if it wasn't already.");
    FUNC_9(VAR_0 | FUNC_8());
    FUNC_10(((void*)0), VAR_5);
  }
  else
  {
   FUNC_1();
  }

  if(FUNC_2())
  {
    goto failed;
  }

  if(FUNC_3())
  {
    goto failed;
  }

  goto out;

failed:
  FUNC_5(FUNC_6());
out:
  return 0;
}

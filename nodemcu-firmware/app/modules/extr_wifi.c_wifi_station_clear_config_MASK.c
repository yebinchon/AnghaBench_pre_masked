
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
struct station_config {int dummy; } ;
typedef int sta_conf ;
typedef int lua_State ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct station_config*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct station_config*) ;
 int FUNC_5 (struct station_config*) ;

__attribute__((used)) static int FUNC_6 ( lua_State* VAR_0 )
{
  struct station_config VAR_1;
  bool VAR_2=1;
  bool VAR_3=1;

  FUNC_1(&VAR_1, 0, sizeof(VAR_1));

  FUNC_2();

  bool VAR_4;
  if(VAR_3)
  {
    VAR_4 = FUNC_4(&VAR_1);
  }
  else
  {
    VAR_4 = FUNC_5(&VAR_1);
  }

  FUNC_3((uint8)0);

  FUNC_0(VAR_0, VAR_4);
  return 1;
}

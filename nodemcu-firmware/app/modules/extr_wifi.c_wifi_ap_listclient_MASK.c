
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct station_info {int ip; int bssid; } ;
typedef int lua_State ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 char* VAR_1 ;
 struct station_info* FUNC_2 (struct station_info*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 struct station_info* FUNC_9 () ;

__attribute__((used)) static int FUNC_10( lua_State* VAR_4 )
{
  if (FUNC_7() == VAR_2)
  {
    return FUNC_3( VAR_4, "Can't list clients in STATION mode" );
  }

  char VAR_5[64];

  FUNC_4(VAR_4);

  struct station_info * VAR_6 = FUNC_9();
  struct station_info * VAR_7;
  while (VAR_6 != ((void*)0))
  {
    FUNC_5(VAR_5, VAR_1, FUNC_1(VAR_6->bssid));
    FUNC_6(VAR_4, VAR_5, VAR_0, FUNC_0(&VAR_6->ip));
    VAR_6 = FUNC_2(VAR_6, VAR_3);
  }
  FUNC_8();

  return 1;
}

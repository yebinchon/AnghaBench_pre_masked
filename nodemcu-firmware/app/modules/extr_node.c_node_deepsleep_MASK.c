
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef scalar_t__ uint64 ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7( lua_State* VAR_0 )
{
  uint64 VAR_1;
  uint8 VAR_2;


  if ( FUNC_2(VAR_0, 2) )
  {
    VAR_2 = FUNC_3(VAR_0, 2);
    if ( VAR_2 < 0 || VAR_2 > 4)
      return FUNC_1( VAR_0, "wrong arg range" );
    else
      FUNC_6( VAR_2 );
  }
  bool VAR_3 = 0;
  if (FUNC_2(VAR_0, 3))
    VAR_3 = FUNC_3(VAR_0, 3);

  if ( FUNC_2(VAR_0, 1) )
  {
    VAR_1 = FUNC_0(VAR_0, 1);

    if ( VAR_1 < 0 )
      return FUNC_1( VAR_0, "wrong arg range" );
    else
    {
      if (VAR_3)
        FUNC_5(VAR_1);
      else
        FUNC_4( VAR_1 );
    }
  }
  return 0;
}

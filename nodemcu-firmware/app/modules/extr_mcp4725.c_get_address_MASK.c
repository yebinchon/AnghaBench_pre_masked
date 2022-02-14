
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint16 ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static uint8 FUNC_6(lua_State* VAR_3, uint8 VAR_4){
  uint8 VAR_5 = VAR_4;
  uint16 VAR_6 = 0;
  FUNC_1(VAR_3, 1, "A2");
  if (!FUNC_2(VAR_3, -1))
  {
    if( FUNC_3(VAR_3, -1) )
    {
      VAR_6 = FUNC_5(VAR_3, -1);
      if(VAR_6 < 2){
        VAR_6 = VAR_2 & (VAR_6 << 2);
        VAR_5|=VAR_6;
      }
      else
        return FUNC_0( VAR_3, 1, "A2: Must be 0 or 1" );
    }
    else
    {
      return FUNC_0( VAR_3, 1, "A2: Must be number" );
    }
  }
  FUNC_4(VAR_3, 1);

  FUNC_1(VAR_3, 1, "A1");
  if (!FUNC_2(VAR_3, -1))
  {
    if( FUNC_3(VAR_3, -1) )
    {
      VAR_6 = FUNC_5(VAR_3, -1);
      if(VAR_6 < 2){
        VAR_6 = VAR_1 & (VAR_6 << 1);
        VAR_5|=VAR_6;
      }
      else
        return FUNC_0( VAR_3, 1, "A1: Must be 0 or 1" );
    }
    else
    {
      return FUNC_0( VAR_3, 1, "A1: Must be number" );
    }
  }
  FUNC_4(VAR_3, 1);

  FUNC_1(VAR_3, 1, "A0");
  if (!FUNC_2(VAR_3, -1))
  {
    if( FUNC_3(VAR_3, -1) )
    {
      VAR_6 = FUNC_5(VAR_3, -1);
      if(VAR_6<2){
        VAR_6 = VAR_0 & (VAR_6);
        VAR_5|=VAR_6;
      }
      else
        return FUNC_0( VAR_3, 1, "A0: Must be 0 or 1" );
    }
    else
    {
      return FUNC_0( VAR_3, 1, "A0: Must be number" );
    }
  }
  FUNC_4(VAR_3, 1);

  return VAR_5;
}

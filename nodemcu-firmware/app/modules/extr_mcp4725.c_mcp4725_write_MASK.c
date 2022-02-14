
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
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int,char*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int VAR_4 ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(lua_State* VAR_5){

  uint8 VAR_6 = VAR_2;
  uint16 VAR_7 = 0;
  uint8 VAR_8 = 0;

  if(FUNC_6(VAR_5, 1))
  {
    VAR_6 = FUNC_0(VAR_5, VAR_6);
    uint16 VAR_9=0;
    FUNC_2(VAR_5, 1, "value");
    if (!FUNC_4(VAR_5, -1))
    {
      if( FUNC_5(VAR_5, -1) )
      {
        VAR_9 = FUNC_9(VAR_5, -1);
        if(VAR_9 >= 0 && VAR_9<=4095){
          VAR_7 = VAR_9<<4;
        }
        else
          return FUNC_1( VAR_5, 1, "value: Valid range 0-4095" );
      }
      else
      {
        return FUNC_1( VAR_5, 1, "value: Must be number" );
      }
    }
    else
    {
      return FUNC_1( VAR_5, 1, "value: value is required" );
    }
    FUNC_7(VAR_5, 1);

    FUNC_2(VAR_5, 1, "save");
    if (!FUNC_4(VAR_5, -1))
    {
      if( FUNC_3(VAR_5, -1) )
      {
        if(FUNC_8(VAR_5, -1)){
          VAR_8 |= VAR_1;
        }
        else{
          VAR_8 |= VAR_0;
        }
      }
      else
      {
        return FUNC_1( VAR_5, 1, "save: must be boolean" );
      }
    }
    else
    {
      VAR_8 |= VAR_0;
    }
    FUNC_7(VAR_5, 1);

    FUNC_2(VAR_5, 1, "pwrdn");
    if (!FUNC_4(VAR_5, -1))
    {
      if( FUNC_5(VAR_5, -1) )
      {
        VAR_9 = FUNC_9(VAR_5, -1);
        if(VAR_9 >= 0 && VAR_9 <= 3){
          VAR_8 |= VAR_9 << 1;
        }
        else{
          return FUNC_1( VAR_5, 1, "pwrdn: Valid range 0-3" );
        }
      }
      else
      {
        return FUNC_1( VAR_5, 1, "pwrdn: Must be number" );
      }
    }
    FUNC_7(VAR_5, 1);

 }
  uint8 *VAR_10 = (uint8*) & VAR_7;

  FUNC_12(VAR_4);
  FUNC_10(VAR_4, VAR_6, VAR_3);
  FUNC_11(VAR_4, VAR_8);
  FUNC_11(VAR_4, VAR_10[1]);
  FUNC_11(VAR_4, VAR_10[0]);
  FUNC_13(VAR_4);

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int lua_State ;
typedef scalar_t__ int32_t ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (char const*,char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_14( lua_State* VAR_9 )
{
  size_t VAR_10, VAR_11;
  int32_t VAR_12 = 1;
  uint8_t VAR_13 = 1;
  const char *VAR_14 = FUNC_1( VAR_9, VAR_13, &VAR_10 );
  VAR_13++;
  if (VAR_14 == ((void*)0))
    return FUNC_2( VAR_9, "wrong arg type" );

  if( FUNC_12( VAR_9, VAR_13 ) == VAR_4 )
  {
    VAR_6 = ( uint16_t )FUNC_0( VAR_9, VAR_13 );
    VAR_13++;
    VAR_5 = -1;
    if( VAR_6 > 255 ){
      VAR_6 = 255;
      return FUNC_2( VAR_9, "wrong arg range" );
    }
  }
  else if(FUNC_7(VAR_9, VAR_13))
  {
    const char *VAR_15 = FUNC_1( VAR_9, VAR_13, &VAR_11 );
    VAR_13++;
    if(VAR_11!=1){
      return FUNC_2( VAR_9, "wrong arg range" );
    }
    VAR_5 = (int16_t)VAR_15[0];
    VAR_6 = 0;
  }


  if (FUNC_12(VAR_9, VAR_13) == VAR_2 || FUNC_12(VAR_9, VAR_13) == VAR_3){
    if ( FUNC_6(VAR_9, VAR_13+1) ){
      VAR_12 = FUNC_11(VAR_9, VAR_13+1);
    }
    FUNC_10(VAR_9, VAR_13);
  } else {
    FUNC_9(VAR_9);
  }
  if(VAR_10 == 4 && FUNC_13(VAR_14, "data") == 0){
    VAR_7 = 1;
    if(VAR_8 != VAR_0){
      FUNC_4(VAR_9, VAR_1, VAR_8);
      VAR_8 = VAR_0;
    }
    if(!FUNC_5(VAR_9, -1)){
      VAR_8 = FUNC_3(VAR_9, VAR_1);
      if(VAR_12==0)
        VAR_7 = 0;
    } else {
      FUNC_8(VAR_9, 1);
    }
  }else{
    FUNC_8(VAR_9, 1);
    return FUNC_2( VAR_9, "method not supported" );
  }
  return 0;
}

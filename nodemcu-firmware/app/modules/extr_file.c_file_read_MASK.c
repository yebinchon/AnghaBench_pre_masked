
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef scalar_t__ int16_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,unsigned int,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 char* FUNC_2 (int *,int ,size_t*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_6 )
{
  unsigned VAR_7 = VAR_1;
  int16_t VAR_8 = VAR_0;
  size_t VAR_9;

  VAR_2;

  if( FUNC_5( VAR_6, VAR_4 ) == VAR_3 )
  {
    VAR_7 = ( unsigned )FUNC_1( VAR_6, VAR_4 );
  }
  else if(FUNC_4(VAR_6, VAR_4))
  {
    const char *VAR_10 = FUNC_2( VAR_6, VAR_4, &VAR_9 );
    if(VAR_9!=1){
      return FUNC_3( VAR_6, "wrong arg range" );
    }
    VAR_8 = (int16_t)VAR_10[0];
  }

  return FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5);
}

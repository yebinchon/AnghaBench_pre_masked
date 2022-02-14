
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,int,int,char*) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11( lua_State* VAR_5 )
{
  unsigned VAR_6;
  bool VAR_7=1;
  VAR_6 = FUNC_1( VAR_5, 1 );
  FUNC_0(VAR_5, VAR_6 == VAR_4 || VAR_6 == VAR_2 || VAR_6 == VAR_3 || VAR_6 == VAR_1, 1, "Invalid mode");

  if(!FUNC_4(VAR_5, 2))
  {
    if(!FUNC_3(VAR_5, 2))
    {
      FUNC_2(VAR_5, 2, FUNC_7(VAR_5, VAR_0));
    }
    VAR_7=FUNC_6(VAR_5, 2);
  }

  if(VAR_7)
  {
    FUNC_9( (uint8_t)VAR_6);
  }
  else
  {
    FUNC_10( (uint8_t)VAR_6);
  }

  VAR_6 = (unsigned)FUNC_8();
  FUNC_5( VAR_5, VAR_6 );
  return 1;
}

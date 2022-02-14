
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int *,int,int,char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *) ;
 unsigned int FUNC_4 (int *,int) ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static int FUNC_7( lua_State* VAR_3 )
{
  unsigned VAR_4;

  if ( FUNC_1(VAR_3, 1) )
  {
    VAR_4 = FUNC_4(VAR_3, 1);
    FUNC_0(VAR_3, (VAR_4 == VAR_2 || VAR_4 == VAR_0 || VAR_4 == VAR_1), 1, "range:0-2");
    if(!FUNC_6(VAR_4)){
      FUNC_3(VAR_3);
      return 1;
    }
  }

  VAR_4 = FUNC_5();
  FUNC_2( VAR_3, VAR_4 );
  return 1;
}

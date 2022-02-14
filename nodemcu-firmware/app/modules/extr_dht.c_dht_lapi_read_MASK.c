
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ,unsigned int) ;
 int VAR_0 ;
 double FUNC_1 () ;
 double FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_1 )
{
  unsigned VAR_2 = FUNC_4( VAR_1, 1 );
  FUNC_0( VAR_0, VAR_2 );
  FUNC_5( VAR_1, FUNC_3(VAR_2) );
  double VAR_3 = FUNC_2();
  double VAR_4 = FUNC_1();
  int VAR_5 = (int)((VAR_3 - (int)VAR_3) * 1000);
  int VAR_6 = (int)((VAR_4 - (int)VAR_4) * 1000);
  FUNC_6( VAR_1, VAR_3 );
  FUNC_6( VAR_1, VAR_4 );
  FUNC_6( VAR_1, VAR_5 );
  FUNC_6( VAR_1, VAR_6 );
  return 5;
}

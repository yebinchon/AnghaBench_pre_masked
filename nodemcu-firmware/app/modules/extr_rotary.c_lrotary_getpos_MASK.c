
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_3 )
{
  unsigned int VAR_4;
  VAR_4 = FUNC_2( VAR_3, 1 );
  FUNC_1( VAR_2, VAR_4 );

  int VAR_5 = FUNC_4(VAR_4);

  if (VAR_5 == -1) {
    return 0;
  }

  FUNC_3(VAR_3, (VAR_5 << 1) >> 1);
  FUNC_3(VAR_3, (VAR_5 & 0x80000000) ? FUNC_0(VAR_0) : FUNC_0(VAR_1));

  return 2;
}

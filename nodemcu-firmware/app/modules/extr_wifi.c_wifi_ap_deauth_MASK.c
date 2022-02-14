
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mac ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,int,int,int ) ;
 char* FUNC_2 (int *,int,unsigned int*) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int **,int,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( lua_State* VAR_1 )
{
  uint8_t VAR_2[6];
  unsigned VAR_3 = 0;
  if(FUNC_3(VAR_1, 1))
  {
    const char *VAR_4 = FUNC_2( VAR_1, 1, &VAR_3 );
    FUNC_1(VAR_1, VAR_3==17, 1, VAR_0);
    FUNC_0(VAR_2, VAR_4);
  }
  else
  {
    FUNC_5(&VAR_2, 0xFF, sizeof(VAR_2));
  }
  FUNC_4(VAR_1,FUNC_6(VAR_2));
  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int lua_State ;
typedef int SHA1_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int) ;
 char* FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static int FUNC_5( lua_State* VAR_0 )
{
  SHA1_CTX VAR_1;
  uint8_t VAR_2[20];

  int VAR_3;
  const char* VAR_4 = FUNC_3(VAR_0, 1, &VAR_3);

  FUNC_1(&VAR_1);
  FUNC_2(&VAR_1, VAR_4, VAR_3);
  FUNC_0(VAR_2, &VAR_1);


  FUNC_4(VAR_0, VAR_2, 20);
  return 1;
}

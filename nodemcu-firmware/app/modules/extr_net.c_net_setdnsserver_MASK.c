
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32_t ;
typedef int lua_State ;
typedef int ip_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int,int ) ;

__attribute__((used)) static int FUNC_6( lua_State* VAR_3 ) {
  size_t VAR_4;
  u32_t VAR_5;

  const char *VAR_6 = FUNC_3( VAR_3, 1, &VAR_4 );
  if (VAR_4>16 || VAR_6 == ((void*)0) || (VAR_5 = FUNC_2(VAR_6)) == VAR_2 || VAR_5 == VAR_1)
    return FUNC_4( VAR_3, "invalid dns server ip" );

  int VAR_7 = FUNC_5(VAR_3, 2, 0);
  if (VAR_7 >= VAR_0)
    return FUNC_4( VAR_3, "server index out of range [0-%d]", VAR_0 - 1);

  ip_addr_t VAR_8;
  FUNC_1(&VAR_8, VAR_5);
  FUNC_0(VAR_7,&VAR_8);

  return 0;
}

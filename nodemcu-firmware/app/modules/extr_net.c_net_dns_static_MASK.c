
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;
typedef int ip_addr_t ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char const*,int *,int (*) (char const*,int *,int*),int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (char const*,int *,int*) ;

__attribute__((used)) static int FUNC_10( lua_State* VAR_4 ) {
  size_t VAR_5;
  const char* VAR_6 = FUNC_4(VAR_4, 1, &VAR_5);
  if (!VAR_6 && VAR_5 > 128) {
    return FUNC_5(VAR_4, "wrong domain");
  }

  FUNC_3(VAR_4, 2);
  FUNC_7(VAR_4, 2);
  int VAR_7 = FUNC_6(VAR_4, VAR_3);
  if (VAR_7 == VAR_2) {
    return FUNC_5(VAR_4, "wrong callback");
  }
  int *VAR_8 = FUNC_0(1, sizeof(int));
  VAR_8[0] = VAR_7;
  ip_addr_t VAR_9;
  err_t VAR_10 = FUNC_1(VAR_6, &VAR_9, FUNC_9, VAR_8);
  if (VAR_10 == VAR_1) {
    FUNC_9(VAR_6, &VAR_9, VAR_8);
    return 0;
  } else if (VAR_10 == VAR_0) {
    return 0;
  } else {
    int VAR_11 = FUNC_8(VAR_4, VAR_10);
    FUNC_2(VAR_8);
    return VAR_11;
  }
  return 0;
}

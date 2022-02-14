
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {int addr; } ;
typedef TYPE_1__ ip_addr_t ;


 int FUNC_0 (int*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,char*,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int) ;
 size_t FUNC_8 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_9(const char *VAR_2, ip_addr_t *VAR_3, void *VAR_4) {
  ip_addr_t VAR_5;
  if (VAR_3 != ((void*)0))
    VAR_5 = *VAR_3;
  else VAR_5.addr = 0xFFFFFFFF;
  int VAR_6 = ((int*)VAR_4)[0];
  FUNC_1(VAR_4);
  lua_State *VAR_7 = FUNC_4();

  FUNC_7(VAR_7, VAR_1, VAR_6);
  FUNC_6(VAR_7);
  if (VAR_5.addr != 0xFFFFFFFF) {
    char VAR_8[20];
    size_t VAR_9 = FUNC_8(VAR_8, VAR_0, FUNC_0(&VAR_5.addr));
    FUNC_5(VAR_7, VAR_8, VAR_9);
  } else {
    FUNC_6(VAR_7);
  }
  FUNC_3(VAR_7, 2, 0);

  FUNC_2(VAR_7, VAR_1, VAR_6);
}

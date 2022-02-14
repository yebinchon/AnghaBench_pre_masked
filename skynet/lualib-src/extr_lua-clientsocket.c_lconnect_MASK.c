
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; int sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *,int) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char*,char const*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_5) {
 const char * VAR_6 = FUNC_5(VAR_5, 1);
 int VAR_7 = FUNC_4(VAR_5, 2);
 int VAR_8 = FUNC_8(VAR_0,VAR_4,0);
 struct sockaddr_in VAR_9;

 VAR_9.sin_addr.s_addr=FUNC_3(VAR_6);
 VAR_9.sin_family=VAR_0;
 VAR_9.sin_port=FUNC_2(VAR_7);

 int VAR_10 = FUNC_0(VAR_8,(struct sockaddr *)&VAR_9,sizeof(struct sockaddr_in));

 if (VAR_10 == -1) {
  return FUNC_6(VAR_5, "Connect %s %d failed", VAR_6, VAR_7);
 }

 int VAR_11 = FUNC_1(VAR_8, VAR_1, 0);
 FUNC_1(VAR_8, VAR_2, VAR_11 | VAR_3);

 FUNC_7(VAR_5, VAR_8);

 return 1;
}

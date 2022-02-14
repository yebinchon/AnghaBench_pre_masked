
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {scalar_t__ size; } ;
typedef int lua_State ;


 int FUNC_0 (struct bson*,int *,char const*,size_t,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int,size_t*) ;
 int FUNC_5 (struct bson*) ;
 int FUNC_6 (struct bson*,int ) ;
 int FUNC_7 (struct bson*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_8(lua_State *VAR_0, struct bson *VAR_1, int VAR_2, int VAR_3) {
 int VAR_4 = FUNC_5(VAR_1);
 int VAR_5;
 size_t VAR_6;

 const char * VAR_7 = FUNC_4(VAR_0, VAR_2, &VAR_6);
 for (VAR_5=0;VAR_5<VAR_2;VAR_5+=2) {
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_0, "Argument %d need a string", VAR_5+1);
  }
  FUNC_3(VAR_0, VAR_5+1);
  FUNC_0(VAR_1, VAR_0, VAR_7, VAR_6, VAR_3);
  FUNC_2(VAR_0,1);
  VAR_7 = FUNC_4(VAR_0, VAR_5+2, &VAR_6);
 }
 FUNC_6(VAR_1,0);
 FUNC_7(VAR_1, VAR_1->size - VAR_4, VAR_4);
}

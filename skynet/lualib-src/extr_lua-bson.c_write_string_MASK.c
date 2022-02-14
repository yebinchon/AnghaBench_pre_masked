
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson {char* ptr; int size; } ;
typedef int lua_State ;


 int FUNC_0 (struct bson*,size_t) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char const*,char*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct bson *VAR_0, lua_State *VAR_1, const char *VAR_2, size_t VAR_3) {
 FUNC_0(VAR_0,VAR_3+1);
 char *VAR_4 = (char *)(VAR_0->ptr + VAR_0->size);
 const char *VAR_5 = VAR_2;
 size_t VAR_6 = VAR_3;
 while(VAR_6 > 0) {
  int VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_6);
  if (VAR_7 == 0) {
   FUNC_1(VAR_1, "Invalid utf8 string");
  }
  VAR_5 += VAR_7;
  VAR_4 += VAR_7;
  VAR_6 -= VAR_7;
 }
 VAR_0->ptr[VAR_0->size+VAR_3] = '\0';
 VAR_0->size+=VAR_3+1;
}

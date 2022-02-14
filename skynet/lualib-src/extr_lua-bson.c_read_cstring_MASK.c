
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bson_reader {int size; char* ptr; } ;
typedef int lua_State ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static inline const char *
FUNC_1(lua_State *VAR_0, struct bson_reader *VAR_1, size_t *VAR_2) {
 int VAR_3;
 for (VAR_3=0;;VAR_3++) {
  if (VAR_3==VAR_1->size) {
   FUNC_0(VAR_0, "Invalid bson block : cstring");
  }
  if (VAR_1->ptr[VAR_3] == '\0') {
   break;
  }
 }
 *VAR_2 = VAR_3;
 const char * VAR_4 = (const char *)VAR_1->ptr;
 VAR_1->ptr += VAR_3+1;
 VAR_1->size -= VAR_3+1;
 return VAR_4;
}

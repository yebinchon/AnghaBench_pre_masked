
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct table {int array; int dict; int * type; } ;
struct proxy {scalar_t__ index; scalar_t__ data; } ;
struct document {scalar_t__ n; } ;
typedef int lua_State ;


 int VAR_0 ;
 struct table* FUNC_0 (struct document const*,scalar_t__) ;
 int FUNC_1 (int *,char*,scalar_t__,...) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int ,int ,struct document const*) ;

__attribute__((used)) static void
FUNC_5(lua_State *VAR_1, int VAR_2, struct proxy *VAR_3) {
 const struct document * VAR_4 = (const struct document *)VAR_3->data;
 if (VAR_3->index < 0 || VAR_3->index >= VAR_4->n) {
  FUNC_1(VAR_1, "Invalid proxy (index = %d, total = %d)", VAR_3->index, (int)VAR_4->n);
 }
 const struct table * VAR_5 = FUNC_0(VAR_4, VAR_3->index);
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_1, "Invalid proxy (index = %d)", VAR_3->index);
 }
 const uint32_t * VAR_6 = (const uint32_t *)((const char *)VAR_5 + sizeof(uint32_t) + sizeof(uint32_t) + ((VAR_5->array + VAR_5->dict + 3) & ~3));
 int VAR_7;
 for (VAR_7=0;VAR_7<VAR_5->array;VAR_7++) {
  FUNC_4(VAR_1, VAR_6++, VAR_5->type[VAR_7], VAR_4);
  FUNC_3(VAR_1, VAR_2, VAR_7+1);
 }
 for (VAR_7=0;VAR_7<VAR_5->dict;VAR_7++) {
  FUNC_4(VAR_1, VAR_6++, VAR_0, VAR_4);
  FUNC_4(VAR_1, VAR_6++, VAR_5->type[VAR_5->array+VAR_7], VAR_4);
  FUNC_2(VAR_1, VAR_2);
 }
}

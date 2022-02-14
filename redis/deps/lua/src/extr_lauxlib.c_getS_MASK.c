
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {size_t size; char const* s; } ;
typedef TYPE_1__ LoadS ;



__attribute__((used)) static const char *FUNC_0 (lua_State *VAR_0, void *VAR_1, size_t *VAR_2) {
  LoadS *VAR_3 = (LoadS *)VAR_1;
  (void)VAR_0;
  if (VAR_3->size == 0) return ((void*)0);
  *VAR_2 = VAR_3->size;
  VAR_3->size = 0;
  return VAR_3->s;
}

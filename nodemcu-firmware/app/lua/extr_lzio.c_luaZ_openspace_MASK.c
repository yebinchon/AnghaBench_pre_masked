
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {size_t buffsize; char* buffer; } ;
typedef TYPE_1__ Mbuffer ;


 size_t VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,size_t) ;

char *FUNC_1 (lua_State *VAR_1, Mbuffer *VAR_2, size_t VAR_3) {
  if (VAR_3 > VAR_2->buffsize) {
    if (VAR_3 < VAR_0) VAR_3 = VAR_0;
    FUNC_0(VAR_1, VAR_2, VAR_3);
  }
  return VAR_2->buffer;
}

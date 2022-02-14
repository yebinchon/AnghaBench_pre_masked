
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ fd; int flagsLen; scalar_t__ flags; struct TYPE_4__** block; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_4) {
  int VAR_5;
  if (VAR_2) {
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
      if (VAR_2->block[VAR_5])
        FUNC_0(VAR_4, VAR_2->block[VAR_5]);
    if (VAR_2->flags)
      FUNC_1(VAR_4, VAR_2->flags, VAR_2->flagsLen, VAR_3);
    FUNC_0(VAR_4, VAR_2);
  }
  if (VAR_1) {
    if (VAR_1->fd)
      FUNC_2(VAR_1->fd);
    FUNC_0(VAR_4, VAR_1);
  }
  return 0;
}

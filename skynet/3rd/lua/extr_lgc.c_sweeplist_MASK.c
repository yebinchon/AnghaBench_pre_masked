
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef int global_State ;
struct TYPE_5__ {int marked; struct TYPE_5__* next; } ;
typedef TYPE_1__ GCObject ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static GCObject **FUNC_7 (lua_State *VAR_2, GCObject **VAR_3, lu_mem VAR_4) {
  global_State *VAR_5 = FUNC_0(VAR_2);
  int VAR_6 = FUNC_6(VAR_5) | FUNC_1(VAR_0);
  int VAR_7 = FUNC_5(VAR_5);
  while (*VAR_3 != ((void*)0) && VAR_4-- > 0) {
    GCObject *VAR_8 = *VAR_3;
    int VAR_9 = VAR_8->marked;
    if (FUNC_4(VAR_6, VAR_9)) {
      *VAR_3 = VAR_8->next;
      FUNC_3(VAR_2, VAR_8);
    }
    else {
      VAR_8->marked = FUNC_2((VAR_9 & VAR_1) | (VAR_9 & FUNC_1(VAR_0)) |VAR_7);
      VAR_3 = &VAR_8->next;
    }
  }
  return (*VAR_3 == ((void*)0)) ? ((void*)0) : VAR_3;
}

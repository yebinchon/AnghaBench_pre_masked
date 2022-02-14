
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef int global_State ;
struct TYPE_12__ {int openupval; } ;
struct TYPE_11__ {scalar_t__ tt; int marked; TYPE_1__* next; } ;
struct TYPE_10__ {TYPE_6__ gch; } ;
typedef TYPE_1__ GCObject ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_7__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_6__*) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int,int ) ;

__attribute__((used)) static GCObject **FUNC_11 (lua_State *VAR_4, GCObject **VAR_5, lu_mem VAR_6) {
  GCObject *VAR_7;
  global_State *VAR_8 = FUNC_0(VAR_4);
  int VAR_9 = FUNC_8(VAR_8);
  while ((VAR_7 = *VAR_5) != ((void*)0) && VAR_6-- > 0) {
    FUNC_6(!FUNC_4(&(VAR_7->gch)) || VAR_7->gch.tt == VAR_1);
    if (VAR_7->gch.tt == VAR_1)
      FUNC_9(VAR_4, &FUNC_3(VAR_7)->openupval);
    if ((VAR_7->gch.marked ^ VAR_3) & VAR_9) {
      FUNC_6(!FUNC_5(VAR_8, VAR_7) || FUNC_10(VAR_7->gch.marked, VAR_0));
      FUNC_7(VAR_8, VAR_7);
      VAR_5 = &VAR_7->gch.next;
    }
    else {
      FUNC_6(FUNC_5(VAR_8, VAR_7) || VAR_9 == FUNC_1(VAR_2));
      *VAR_5 = VAR_7->gch.next;
      FUNC_2(VAR_4, VAR_7);
    }
  }
  return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef int lua_State ;
typedef int lu_mem ;
struct TYPE_17__ {TYPE_3__* rootgc; } ;
typedef TYPE_2__ global_State ;
struct TYPE_16__ {scalar_t__ tt; int marked; TYPE_3__* next; } ;
struct TYPE_18__ {TYPE_1__ gch; } ;
struct TYPE_15__ {int openupval; } ;
typedef TYPE_3__ GCObject ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_11__* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int,int ) ;

__attribute__((used)) static GCObject **FUNC_10 (lua_State *VAR_4, GCObject **VAR_5, lu_mem VAR_6) {
  GCObject *VAR_7;
  global_State *VAR_8 = FUNC_0(VAR_4);
  int VAR_9 = FUNC_7(VAR_8);
  while ((VAR_7 = *VAR_5) != ((void*)0) && VAR_6-- > 0) {
    if (VAR_7->gch.tt == VAR_1)
      FUNC_8(VAR_4, &FUNC_3(VAR_7)->openupval);
    if ((VAR_7->gch.marked ^ VAR_3) & VAR_9) {
      FUNC_5(!FUNC_4(VAR_8, VAR_7) || FUNC_9(VAR_7->gch.marked, VAR_0));
      FUNC_6(VAR_8, VAR_7);
      VAR_5 = &VAR_7->gch.next;
    }
    else {
      FUNC_5(FUNC_4(VAR_8, VAR_7) || VAR_9 == FUNC_1(VAR_2));
      *VAR_5 = VAR_7->gch.next;
      if (VAR_7 == VAR_8->rootgc)
        VAR_8->rootgc = VAR_7->gch.next;
      FUNC_2(VAR_4, VAR_7);
    }
  }
  return VAR_5;
}

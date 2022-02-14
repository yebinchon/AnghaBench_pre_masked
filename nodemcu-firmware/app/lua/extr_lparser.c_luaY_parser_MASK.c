
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct LexState {int * fs; int * buff; } ;
struct FuncState {TYPE_2__* f; int * prev; } ;
struct TYPE_11__ {int top; } ;
typedef TYPE_1__ lua_State ;
typedef int ZIO ;
struct TYPE_12__ {scalar_t__ nups; int is_vararg; } ;
typedef int TString ;
typedef TYPE_2__ Proto ;
typedef int Mbuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct LexState*,int ) ;
 int FUNC_1 (struct LexState*) ;
 int FUNC_2 (struct LexState*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (TYPE_1__*,char const*) ;
 int FUNC_6 (struct LexState*) ;
 int FUNC_7 (TYPE_1__*,struct LexState*,int *,int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct LexState*,struct FuncState*) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;

Proto *FUNC_11 (lua_State *VAR_2, ZIO *VAR_3, Mbuffer *VAR_4, const char *VAR_5) {
  struct LexState VAR_6;
  struct FuncState VAR_7;
  TString *VAR_8 = FUNC_5(VAR_2, VAR_5);
  FUNC_10(VAR_2, VAR_2->top, VAR_8);
  FUNC_4(VAR_2);
  VAR_6.buff = VAR_4;
  FUNC_7(VAR_2, &VAR_6, VAR_3, VAR_8);
  FUNC_9(&VAR_6, &VAR_7);
  VAR_7.f->is_vararg = VAR_1;
  FUNC_6(&VAR_6);
  FUNC_1(&VAR_6);
  FUNC_0(&VAR_6, VAR_0);
  FUNC_2(&VAR_6);



  VAR_2->top--;
  FUNC_8(VAR_7.prev == ((void*)0));
  FUNC_8(VAR_7.f->nups == 0);
  FUNC_8(VAR_6.fs == ((void*)0));
  return VAR_7.f;
}

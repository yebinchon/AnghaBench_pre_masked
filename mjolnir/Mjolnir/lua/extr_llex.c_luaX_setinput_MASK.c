
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int ZIO ;
struct TYPE_5__ {int token; } ;
struct TYPE_6__ {scalar_t__ token; } ;
struct TYPE_7__ {int current; int linenumber; int lastline; int buff; int * L; int envn; int * source; int * fs; int * z; TYPE_1__ lookahead; TYPE_2__ t; } ;
typedef int TString ;
typedef TYPE_3__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2 (lua_State *VAR_3, LexState *VAR_4, ZIO *VAR_5, TString *VAR_6,
                    int VAR_7) {
  VAR_4->t.token = 0;
  VAR_4->L = VAR_3;
  VAR_4->current = VAR_7;
  VAR_4->lookahead.token = VAR_2;
  VAR_4->z = VAR_5;
  VAR_4->fs = ((void*)0);
  VAR_4->linenumber = 1;
  VAR_4->lastline = 1;
  VAR_4->source = VAR_6;
  VAR_4->envn = FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_4->L, VAR_4->buff, VAR_1);
}

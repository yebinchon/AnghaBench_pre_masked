
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


struct TYPE_28__ {int info; } ;
struct TYPE_29__ {TYPE_3__ s; } ;
struct TYPE_30__ {scalar_t__ k; TYPE_4__ u; } ;
typedef TYPE_5__ expdesc ;
struct TYPE_32__ {int freereg; } ;
struct TYPE_26__ {int ts; } ;
struct TYPE_27__ {int token; TYPE_1__ seminfo; } ;
struct TYPE_31__ {int linenumber; int lastline; TYPE_2__ t; TYPE_7__* fs; } ;
typedef TYPE_6__ LexState ;
typedef TYPE_7__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_6__*,char,char,int) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_7__*,int ,int,int,int) ;
 int FUNC_7 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_8 (TYPE_7__*,int) ;
 int FUNC_9 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,char*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13 (LexState *VAR_5, expdesc *VAR_6) {
  FuncState *VAR_7 = VAR_5->fs;
  expdesc VAR_8;
  int VAR_9, VAR_10;
  int VAR_11 = VAR_5->linenumber;
  switch (VAR_5->t.token) {
    case '(': {
      if (VAR_11 != VAR_5->lastline)
        FUNC_11(VAR_5,"ambiguous syntax (function call x new statement)");
      FUNC_10(VAR_5);
      if (VAR_5->t.token == ')')
        VAR_8.k = VAR_4;
      else {
        FUNC_3(VAR_5, &VAR_8);
        FUNC_9(VAR_7, &VAR_8);
      }
      FUNC_0(VAR_5, ')', '(', VAR_11);
      break;
    }
    case '{': {
      FUNC_2(VAR_5, &VAR_8);
      break;
    }
    case 128: {
      FUNC_1(VAR_5, &VAR_8, VAR_5->t.seminfo.ts);
      FUNC_10(VAR_5);
      break;
    }
    default: {
      FUNC_11(VAR_5, "function arguments expected");
      return;
    }
  }
  FUNC_12(VAR_6->k == VAR_3);
  VAR_9 = VAR_6->u.s.info;
  if (FUNC_4(VAR_8.k))
    VAR_10 = VAR_0;
  else {
    if (VAR_8.k != VAR_4)
      FUNC_7(VAR_7, &VAR_8);
    VAR_10 = VAR_7->freereg - (VAR_9+1);
  }
  FUNC_5(VAR_6, VAR_2, FUNC_6(VAR_7, VAR_1, VAR_9, VAR_10+1, 2));
  FUNC_8(VAR_7, VAR_11);
  VAR_7->freereg = VAR_9+1;

}

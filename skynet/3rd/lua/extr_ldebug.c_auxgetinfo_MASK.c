
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_19__ {int currentline; int isvararg; int istailcall; char* namewhat; int * name; int nparams; int nups; } ;
typedef TYPE_4__ lua_Debug ;
struct TYPE_21__ {int callstatus; } ;
struct TYPE_18__ {TYPE_2__* p; } ;
struct TYPE_16__ {int nupvalues; } ;
struct TYPE_20__ {TYPE_3__ l; TYPE_1__ c; } ;
struct TYPE_17__ {int is_vararg; int numparams; } ;
typedef TYPE_5__ Closure ;
typedef TYPE_6__ CallInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 char* FUNC_2 (int *,TYPE_6__*,int **) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5 (lua_State *VAR_1, const char *VAR_2, lua_Debug *VAR_3,
                       Closure *VAR_4, CallInfo *VAR_5) {
  int VAR_6 = 1;
  for (; *VAR_2; VAR_2++) {
    switch (*VAR_2) {
      case 'S': {
        FUNC_1(VAR_3, VAR_4);
        break;
      }
      case 'l': {
        VAR_3->currentline = (VAR_5 && FUNC_3(VAR_5)) ? FUNC_0(VAR_5) : -1;
        break;
      }
      case 'u': {
        VAR_3->nups = (VAR_4 == ((void*)0)) ? 0 : VAR_4->c.nupvalues;
        if (FUNC_4(VAR_4)) {
          VAR_3->isvararg = 1;
          VAR_3->nparams = 0;
        }
        else {
          VAR_3->isvararg = VAR_4->l.p->is_vararg;
          VAR_3->nparams = VAR_4->l.p->numparams;
        }
        break;
      }
      case 't': {
        VAR_3->istailcall = (VAR_5) ? VAR_5->callstatus & VAR_0 : 0;
        break;
      }
      case 'n': {
        VAR_3->namewhat = FUNC_2(VAR_1, VAR_5, &VAR_3->name);
        if (VAR_3->namewhat == ((void*)0)) {
          VAR_3->namewhat = "";
          VAR_3->name = ((void*)0);
        }
        break;
      }
      case 'L':
      case 'f':
        break;
      default: VAR_6 = 0;
    }
  }
  return VAR_6;
}

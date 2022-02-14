
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* ptrdiff_t ;
struct TYPE_8__ {unsigned short nny; void* errfunc; int allowhook; int * ci; } ;
typedef TYPE_1__ lua_State ;
typedef int lu_byte ;
typedef int StkId ;
typedef int Pfunc ;
typedef int CallInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,void*) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;

int FUNC_5 (lua_State *VAR_1, Pfunc VAR_2, void *VAR_3,
                ptrdiff_t VAR_4, ptrdiff_t VAR_5) {
  int VAR_6;
  CallInfo *VAR_7 = VAR_1->ci;
  lu_byte VAR_8 = VAR_1->allowhook;
  unsigned short VAR_9 = VAR_1->nny;
  ptrdiff_t VAR_10 = VAR_1->errfunc;
  VAR_1->errfunc = VAR_5;
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_6 != VAR_0) {
    StkId VAR_11 = FUNC_3(VAR_1, VAR_4);
    FUNC_2(VAR_1, VAR_11);
    FUNC_4(VAR_1, VAR_6, VAR_11);
    VAR_1->ci = VAR_7;
    VAR_1->allowhook = VAR_8;
    VAR_1->nny = VAR_9;
    FUNC_1(VAR_1);
  }
  VAR_1->errfunc = VAR_10;
  return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
typedef int lu_mem ;
typedef int l_mem ;
struct TYPE_5__ {int gcstate; int totalbytes; int estimate; int gcdept; int tmudata; int ** sweepgc; int gray; } ;
typedef TYPE_1__ global_State ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int ** FUNC_7 (int *,int **,int) ;
 int FUNC_8 (TYPE_1__*,int *) ;

__attribute__((used)) static l_mem FUNC_9 (lua_State *VAR_3) {
  global_State *VAR_4 = FUNC_0(VAR_3);

  switch (VAR_4->gcstate) {
    case 131: {
      FUNC_5(VAR_3);
      return 0;
    }
    case 130: {
      if (VAR_4->gray)
        return FUNC_6(VAR_4);
      else {
        FUNC_2(VAR_3);
        return 0;
      }
    }
    case 128: {
      FUNC_8(VAR_4, VAR_3);
      return VAR_1;
    }
    case 129: {
      lu_mem VAR_5 = VAR_4->totalbytes;
      VAR_4->sweepgc = FUNC_7(VAR_3, VAR_4->sweepgc, VAR_2);
      if (*VAR_4->sweepgc == ((void*)0)) {
        FUNC_3(VAR_3);
        VAR_4->gcstate = 132;
      }
      FUNC_4(VAR_5 >= VAR_4->totalbytes);
      VAR_4->estimate -= VAR_5 - VAR_4->totalbytes;
      return VAR_2*VAR_1;
    }
    case 132: {
      if (VAR_4->tmudata) {
        FUNC_1(VAR_3);
        if (VAR_4->estimate > VAR_0)
          VAR_4->estimate -= VAR_0;
        return VAR_0;
      }
      else {
        VAR_4->gcstate = 131;
        VAR_4->gcdept = 0;
        return 0;
      }
    }
    default: FUNC_4(0); return 0;
  }
}

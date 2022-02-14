
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_19__ {int* cs; } ;
struct TYPE_17__ {int ps; } ;
struct TYPE_18__ {int tag; TYPE_1__ u; } ;
typedef TYPE_2__ TTree ;
typedef TYPE_3__ Charset ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int,int*) ;
 size_t VAR_2 ;
 int FUNC_1 (int *,int,TYPE_2__*,int) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *,int) ;
 TYPE_2__* FUNC_6 (TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int* FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10 (lua_State *VAR_3) {
  Charset VAR_4, VAR_5;
  int VAR_6, VAR_7;
  TTree *VAR_8 = FUNC_0(VAR_3, 1, &VAR_6);
  TTree *VAR_9 = FUNC_0(VAR_3, 2, &VAR_7);
  if (FUNC_8(VAR_8, &VAR_4) && FUNC_8(VAR_9, &VAR_5)) {
    TTree *VAR_10 = FUNC_4(VAR_3);
    FUNC_2(VAR_2, FUNC_9(VAR_10)[VAR_2] = VAR_4[VAR_2] & ~VAR_5[VAR_2]);
  }
  else {
    TTree *VAR_11 = FUNC_5(VAR_3, 2 + VAR_6 + VAR_7);
    VAR_11->tag = VAR_1;
    VAR_11->u.ps = 2 + VAR_7;
    FUNC_6(VAR_11)->tag = VAR_0;
    FUNC_3(FUNC_6(FUNC_6(VAR_11)), VAR_9, VAR_7 * sizeof(TTree));
    FUNC_3(FUNC_7(VAR_11), VAR_8, VAR_6 * sizeof(TTree));
    FUNC_1(VAR_3, 1, FUNC_6(VAR_11), 2);
  }
  return 1;
}

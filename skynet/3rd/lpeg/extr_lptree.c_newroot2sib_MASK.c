
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {int ps; } ;
struct TYPE_10__ {int tag; TYPE_1__ u; } ;
typedef TYPE_2__ TTree ;


 TYPE_2__* FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int ,int) ;
 int FUNC_2 (int ,TYPE_2__*,int) ;
 TYPE_2__* FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static TTree *FUNC_6 (lua_State *VAR_0, int VAR_1) {
  int VAR_2, VAR_3;
  TTree *VAR_4 = FUNC_0(VAR_0, 1, &VAR_2);
  TTree *VAR_5 = FUNC_0(VAR_0, 2, &VAR_3);
  TTree *VAR_6 = FUNC_3(VAR_0, 1 + VAR_2 + VAR_3);
  VAR_6->tag = VAR_1;
  VAR_6->u.ps = 1 + VAR_2;
  FUNC_2(FUNC_4(VAR_6), VAR_4, VAR_2 * sizeof(TTree));
  FUNC_2(FUNC_5(VAR_6), VAR_5, VAR_3 * sizeof(TTree));
  FUNC_1(VAR_0, 1, FUNC_5(VAR_6), 2);
  return VAR_6;
}

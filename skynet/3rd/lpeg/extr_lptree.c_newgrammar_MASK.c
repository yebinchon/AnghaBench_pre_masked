
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_10__ {int n; } ;
struct TYPE_11__ {TYPE_1__ u; int tag; } ;
typedef TYPE_2__ TTree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int,int) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int,TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;
 int FUNC_4 (int *,int,int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 TYPE_2__* FUNC_11 (int *,int) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,TYPE_2__*) ;

__attribute__((used)) static TTree *FUNC_14 (lua_State *VAR_2, int VAR_3) {
  int VAR_4;
  int VAR_5 = FUNC_5(VAR_2) + 2;
  int VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_4);
  TTree *VAR_7 = FUNC_11(VAR_2, VAR_4);
  FUNC_4(VAR_2, VAR_6 <= VAR_0, VAR_3, "grammar has too many rules");
  VAR_7->tag = VAR_1; VAR_7->u.n = VAR_6;
  FUNC_8(VAR_2);
  FUNC_10(VAR_2, -2);
  FUNC_0(VAR_2, VAR_7, VAR_5, VAR_6);
  FUNC_6(VAR_2, -1);
  FUNC_2(VAR_2, VAR_5 - 1, VAR_7, FUNC_12(VAR_7));
  FUNC_3(VAR_2, VAR_7, VAR_5);
  FUNC_13(VAR_2, VAR_7);
  FUNC_9(VAR_2, 1);
  FUNC_7(VAR_2, -(VAR_6 * 2 + 2));
  FUNC_9(VAR_2, VAR_6 * 2 + 1);
  return VAR_7;
}

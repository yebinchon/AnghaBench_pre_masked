
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {scalar_t__ tag; scalar_t__ key; } ;
typedef TYPE_1__ TTree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int,scalar_t__) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,TYPE_1__*,int*,int ,int ) ;

__attribute__((used)) static void FUNC_8 (lua_State *VAR_3, TTree *VAR_4) {
  int VAR_5[VAR_0];
  TTree *VAR_6;

  for (VAR_6 = FUNC_4(VAR_4); VAR_6->tag == VAR_1; VAR_6 = FUNC_5(VAR_6)) {
    if (VAR_6->key == 0) continue;
    FUNC_7(VAR_3, FUNC_4(VAR_6), VAR_5, 0, 0);
  }
  FUNC_0(VAR_6->tag == VAR_2);

  for (VAR_6 = FUNC_4(VAR_4); VAR_6->tag == VAR_1; VAR_6 = FUNC_5(VAR_6)) {
    if (VAR_6->key == 0) continue;
    if (FUNC_1(FUNC_4(VAR_6))) {
      FUNC_3(VAR_3, -1, VAR_6->key);
      FUNC_2(VAR_3, "empty loop in rule '%s'", FUNC_6(VAR_3, -1));
    }
  }
  FUNC_0(VAR_6->tag == VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ top; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_12__ {scalar_t__ tt; } ;
struct TYPE_14__ {TYPE_1__ tsv; } ;
typedef TYPE_3__ TString ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(lua_State *VAR_1, TString *VAR_2) {
  FUNC_2(VAR_2->tsv.tt==VAR_0);
  FUNC_4(VAR_1);
  FUNC_6(VAR_1, VAR_1->top-1, VAR_2);
  FUNC_3(VAR_1, 1);
  FUNC_5(VAR_1, -3);
  FUNC_0("Adding string: %s\n",FUNC_1(VAR_2));
}

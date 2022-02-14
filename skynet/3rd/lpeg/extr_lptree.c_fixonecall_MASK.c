
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_9__ {scalar_t__ tag; int key; } ;
struct TYPE_7__ {int ps; } ;
struct TYPE_8__ {int key; TYPE_1__ u; int tag; } ;
typedef TYPE_2__ TTree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int) ;
 TYPE_3__* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8 (lua_State *VAR_2, int VAR_3, TTree *VAR_4, TTree *VAR_5) {
  int VAR_6;
  FUNC_4(VAR_2, -1, VAR_5->key);
  FUNC_2(VAR_2, VAR_3);
  VAR_6 = FUNC_5(VAR_2, -1);
  FUNC_3(VAR_2, 1);
  if (VAR_6 == 0) {
    FUNC_4(VAR_2, -1, VAR_5->key);
    FUNC_1(VAR_2, "rule '%s' undefined in given grammar", FUNC_7(VAR_2, -1));
  }
  VAR_5->tag = VAR_0;
  VAR_5->u.ps = VAR_6 - (VAR_5 - VAR_4);
  FUNC_0(FUNC_6(VAR_5)->tag == VAR_1);
  FUNC_6(VAR_5)->key = VAR_5->key;
}

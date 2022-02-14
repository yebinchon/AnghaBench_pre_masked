
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_3__ {scalar_t__ tag; } ;
typedef TYPE_1__ TTree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3 (lua_State *VAR_3) {
  TTree *VAR_4 = FUNC_0(VAR_3, 1, ((void*)0));
  TTree *VAR_5 = FUNC_0(VAR_3, 2, ((void*)0));
  if (VAR_4->tag == VAR_0 || VAR_5->tag == VAR_2)
    FUNC_1(VAR_3, 1);
  else if (VAR_4->tag == VAR_2)
    FUNC_1(VAR_3, 2);
  else
    FUNC_2(VAR_3, VAR_1);
  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_10__ {int* cs; } ;
struct TYPE_9__ {scalar_t__ tag; } ;
typedef TYPE_1__ TTree ;
typedef TYPE_2__ Charset ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int,int *) ;
 size_t VAR_2 ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 int* FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8 (lua_State *VAR_3) {
  Charset VAR_4, VAR_5;
  TTree *VAR_6 = FUNC_0(VAR_3, 1, ((void*)0));
  TTree *VAR_7 = FUNC_0(VAR_3, 2, ((void*)0));
  if (FUNC_6(VAR_6, &VAR_4) && FUNC_6(VAR_7, &VAR_5)) {
    TTree *VAR_8 = FUNC_3(VAR_3);
    FUNC_1(VAR_2, FUNC_7(VAR_8)[VAR_2] = VAR_4[VAR_2] | VAR_5[VAR_2]);
  }
  else if (FUNC_5(VAR_6) || VAR_7->tag == VAR_1)
    FUNC_2(VAR_3, 1);
  else if (VAR_6->tag == VAR_1)
    FUNC_2(VAR_3, 2);
  else
    FUNC_4(VAR_3, VAR_0);
  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {int * code; } ;
typedef TYPE_1__ Pattern ;
typedef int Instruction ;
typedef int Capture ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,char const*,int) ;
 TYPE_1__* FUNC_1 (int *,int,int *) ;
 int FUNC_2 (int *,int) ;
 size_t FUNC_3 (int *,size_t) ;
 char* FUNC_4 (int *,int ,size_t*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *,char const*,char const*,char const*,int *,int *,int) ;
 int * FUNC_10 (int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_2) {
  Capture VAR_3[VAR_0];
  const char *VAR_4;
  size_t VAR_5;
  Pattern *VAR_6 = (FUNC_1(VAR_2, 1, ((void*)0)), FUNC_2(VAR_2, 1));
  Instruction *VAR_7 = (VAR_6->code != ((void*)0)) ? VAR_6->code : FUNC_10(VAR_2, VAR_6, 1);
  const char *VAR_8 = FUNC_4(VAR_2, VAR_1, &VAR_5);
  size_t VAR_9 = FUNC_3(VAR_2, VAR_5);
  int VAR_10 = FUNC_5(VAR_2);
  FUNC_8(VAR_2);
  FUNC_7(VAR_2, VAR_3);
  FUNC_6(VAR_2, 1);
  VAR_4 = FUNC_9(VAR_2, VAR_8, VAR_8 + VAR_9, VAR_8 + VAR_5, VAR_7, VAR_3, VAR_10);
  if (VAR_4 == ((void*)0)) {
    FUNC_8(VAR_2);
    return 1;
  }
  return FUNC_0(VAR_2, VAR_8, VAR_4, VAR_10);
}

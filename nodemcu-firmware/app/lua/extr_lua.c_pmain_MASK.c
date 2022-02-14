
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Smain {char** argv; int status; int argc; } ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,int*,int*,int*) ;
 int * VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 char* VAR_3 ;
 int FUNC_6 (int *,char**,int) ;

__attribute__((used)) static int FUNC_7 (lua_State *VAR_4) {
  struct Smain *VAR_5 = (struct Smain *)FUNC_4(VAR_4, 1);
  char **VAR_6 = VAR_5->argv;
  int VAR_7;
  int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
  VAR_2 = VAR_4;
  if (VAR_6[0] && VAR_6[0][0]) VAR_3 = VAR_6[0];
  FUNC_3(VAR_4, VAR_1, 0);
  FUNC_2(VAR_4);
  FUNC_3(VAR_4, VAR_0, 0);
  FUNC_5(VAR_4);
  VAR_5->status = FUNC_1(VAR_4);
  VAR_7 = FUNC_0(VAR_6, &VAR_8, &VAR_9, &VAR_10);
  if (VAR_7 < 0) {
    VAR_5->status = 1;
    return 0;
  }
  VAR_5->status = FUNC_6(VAR_4, VAR_6, (VAR_7 > 0) ? VAR_7 : VAR_5->argc);
  if (VAR_5->status != 0) return 0;
  return 0;
}

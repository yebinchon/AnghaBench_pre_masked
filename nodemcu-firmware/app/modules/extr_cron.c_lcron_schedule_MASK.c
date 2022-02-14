
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cronent_desc {int dummy; } ;
typedef int lua_State ;
struct TYPE_4__ {struct cronent_desc desc; } ;
typedef TYPE_1__ cronent_ud_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 size_t FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,char*,struct cronent_desc*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 TYPE_1__* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_3) {
  cronent_ud_t *VAR_4 = FUNC_3(VAR_3, 1, "cron.entry");
  char *VAR_5 = (char*)FUNC_2(VAR_3, 2);
  struct cronent_desc VAR_6;
  FUNC_1(VAR_3, VAR_5, &VAR_6);
  VAR_4->desc = VAR_6;
  size_t VAR_7 = FUNC_0(VAR_3, VAR_4);
  if (VAR_7 == -1) {
    void *VAR_8;
    VAR_8 = FUNC_7(VAR_2, sizeof(int) * (VAR_1 + 1));
    if (VAR_8 == ((void*)0)) {
      return FUNC_4(VAR_3, "out of memory");
    }
    VAR_2 = VAR_8;
    FUNC_5(VAR_3, 1);
    VAR_2[VAR_1++] = FUNC_6(VAR_3, VAR_0);
  }
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cronent_desc {int dummy; } ;
typedef int lua_State ;
struct TYPE_3__ {struct cronent_desc desc; void* cb_ref; } ;
typedef TYPE_1__ cronent_ud_t ;


 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 int FUNC_0 (int *,char*,struct cronent_desc*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,int ) ;
 TYPE_1__* FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 void* FUNC_9 (void**,int) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_3) {

  char *VAR_4 = (char*)FUNC_2(VAR_3, 1);
  void *VAR_5;
  FUNC_1(VAR_3, 2);

  struct cronent_desc VAR_6;
  FUNC_0(VAR_3, VAR_4, &VAR_6);

  cronent_ud_t *VAR_7 = FUNC_6(VAR_3, sizeof(cronent_ud_t));

  FUNC_4(VAR_3, "cron.entry");
  FUNC_8(VAR_3, -2);

  FUNC_7(VAR_3, 2);
  VAR_7->cb_ref = FUNC_5(VAR_3, VAR_0);

  VAR_7->desc = VAR_6;

  VAR_5 = FUNC_9(VAR_2, sizeof(int) * (VAR_1 + 1));
  if (VAR_5 == ((void*)0)) {
    return FUNC_3(VAR_3, "out of memory");
  }
  FUNC_7(VAR_3, -1);
  VAR_2 = VAR_5;
  VAR_2[VAR_1++] = FUNC_5(VAR_3, VAR_0);
  return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_q_msg {int type; int arg; int (* cb ) (struct mg_mgr*,int ) ;} ;
struct mg_mgr {int dummy; } ;
typedef int (* mg_init_cb ) (struct mg_mgr*) ;



 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mg_mgr*,int *) ;
 int FUNC_1 (struct mg_mgr*,int) ;
 scalar_t__ FUNC_2 (int *,struct mg_q_msg*,int) ;
 int VAR_1 ;
 int FUNC_3 (struct mg_mgr*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_2) {
  struct mg_mgr VAR_3;
  mg_init_cb VAR_4 = (mg_init_cb) VAR_2;
  FUNC_0(&VAR_3, ((void*)0));
  VAR_4(&VAR_3);
  while (1) {
    struct mg_q_msg VAR_5;
    FUNC_1(&VAR_3, 1);
    if (FUNC_2(&VAR_1, &VAR_5, 1) != VAR_0) continue;
    switch (VAR_5.type) {
      case 128: {
        VAR_5.cb(&VAR_3, VAR_5.arg);
      }
    }
  }
}

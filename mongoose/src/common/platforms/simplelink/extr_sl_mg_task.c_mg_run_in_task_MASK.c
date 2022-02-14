
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_q_msg {void (* member_1 ) (struct mg_mgr*,void*) ;void* member_2; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mg_q_msg*,int ) ;
 int VAR_2 ;

void FUNC_1(void (*VAR_3)(struct mg_mgr *VAR_4, void *VAR_5), void *VAR_6) {
  struct mg_q_msg VAR_7 = {VAR_0, VAR_3, VAR_6};
  FUNC_0(&VAR_2, &VAR_7, VAR_1);
}

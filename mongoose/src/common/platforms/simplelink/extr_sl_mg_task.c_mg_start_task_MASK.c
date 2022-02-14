
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_q_msg {int dummy; } ;
typedef scalar_t__ mg_init_cb ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int,int) ;
 scalar_t__ FUNC_1 (int ,char const*,int,void*,int,int *) ;
 int VAR_2 ;

bool FUNC_2(int VAR_3, int VAR_4, mg_init_cb VAR_5) {
  if (FUNC_0(&VAR_2, "MG", sizeof(struct mg_q_msg), 16) != VAR_0) {
    return 0;
  }
  if (FUNC_1(VAR_1, (const signed char *) "MG", VAR_4,
                     (void *) VAR_5, VAR_3, ((void*)0)) != VAR_0) {
    return 0;
  }
  return 1;
}

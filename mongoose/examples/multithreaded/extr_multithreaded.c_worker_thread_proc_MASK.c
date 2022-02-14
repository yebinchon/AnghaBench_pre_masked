
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_result {int member_1; int member_0; } ;
struct work_request {int conn_id; int member_0; } ;
struct mg_mgr {int dummy; } ;
typedef int res ;
typedef int req ;


 int FUNC_0 (struct mg_mgr*,int ,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,struct work_request*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 int * VAR_2 ;

void *FUNC_5(void *VAR_3) {
  struct mg_mgr *VAR_4 = (struct mg_mgr *) VAR_3;
  struct work_request VAR_5 = {0};

  while (VAR_1 == 0) {
    if (FUNC_3(VAR_2[1], &VAR_5, sizeof(VAR_5)) < 0)
      FUNC_1("Reading worker sock");
    int VAR_6 = FUNC_2() % 10;
    FUNC_4(VAR_6);
    struct work_result VAR_7 = {VAR_5.conn_id, VAR_6};
    FUNC_0(VAR_4, VAR_0, (void *)&VAR_7, sizeof(VAR_7));
  }
  return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_result {unsigned long conn_id; int sleep_time; } ;
struct mg_connection {int * user_data; int mgr; } ;


 struct mg_connection* FUNC_0 (int ,struct mg_connection*) ;
 int FUNC_1 (struct mg_connection*,char*,char*) ;
 int FUNC_2 (struct mg_connection*,int,int ,char*) ;
 int FUNC_3 (char*,char*,unsigned long,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct mg_connection *VAR_0, int VAR_1, void *VAR_2) {
  (void) VAR_1;
  char VAR_3[32];
  struct mg_connection *VAR_4;
  for (VAR_4 = FUNC_0(VAR_0->mgr, ((void*)0)); VAR_4 != ((void*)0); VAR_4 = FUNC_0(VAR_0->mgr, VAR_4)) {
    if (VAR_4->user_data != ((void*)0)) {
      struct work_result *VAR_5 = (struct work_result *)VAR_2;
      if ((unsigned long)VAR_4->user_data == VAR_5->conn_id) {
        FUNC_3(VAR_3, "conn_id:%lu sleep:%d", VAR_5->conn_id, VAR_5->sleep_time);
        FUNC_2(VAR_4, 200, FUNC_4(VAR_3), "Content-Type: text/plain");
        FUNC_1(VAR_4, "%s", VAR_3);
      }
    }
  }
}

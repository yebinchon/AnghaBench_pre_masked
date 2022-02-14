
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char const*,int ) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct mg_mgr *VAR_3, const char *VAR_4) {
  struct mg_connection *VAR_5;
  if ((VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_1)) == ((void*)0)) {
    FUNC_1(VAR_2, "Cannot start HTTP server on port [%s]\n", VAR_4);
    FUNC_0(VAR_0);
  }
  FUNC_3(VAR_5);
  FUNC_4("HTTP server started on %s\n", VAR_4);
}

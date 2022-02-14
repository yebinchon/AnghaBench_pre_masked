
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;
struct mg_connection {int flags; } ;


 int VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,struct mg_connection*) ;
 int FUNC_1 (struct mg_connection*,int ,char*,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mg_mgr *VAR_3) {
  struct mg_connection *VAR_4;
  int VAR_5 = (double) FUNC_2() / VAR_1 * 100.0;

  for (VAR_4 = FUNC_0(VAR_3, ((void*)0)); VAR_4 != ((void*)0); VAR_4 = FUNC_0(VAR_3, VAR_4)) {
    if (VAR_4->flags & VAR_0) {
      FUNC_1(VAR_4, VAR_2, "%d", VAR_5);
    }
  }
}

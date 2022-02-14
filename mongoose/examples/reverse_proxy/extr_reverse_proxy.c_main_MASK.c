
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mg_mgr {char* hexdump_file; } ;
struct mg_connection {int dummy; } ;
struct TYPE_4__ {char* document_root; } ;
struct TYPE_3__ {char* document_root; char* url_rewrites; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mg_connection* FUNC_0 (struct mg_mgr*,char*,int ) ;
 int FUNC_1 (struct mg_mgr*,int *) ;
 int FUNC_2 (struct mg_mgr*,int) ;
 int FUNC_3 (struct mg_connection*) ;
 int FUNC_4 (char*,char*) ;
 char* VAR_2 ;
 TYPE_2__ VAR_3 ;
 char* VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int VAR_6, char *VAR_7[]) {
  struct mg_mgr VAR_8;
  struct mg_connection *VAR_9;
  int VAR_10;


  FUNC_1(&VAR_8, ((void*)0));


  VAR_9 = FUNC_0(&VAR_8, VAR_4, VAR_1);
  FUNC_3(VAR_9);

  VAR_5.document_root = "frontend";
  VAR_5.url_rewrites =
      "/api=http://localhost:8001,/=frontend/hello.html";


  VAR_9 = FUNC_0(&VAR_8, VAR_2, VAR_0);
  FUNC_3(VAR_9);

  VAR_3.document_root = "backend";


  for (VAR_10 = 1; VAR_10 < VAR_6; VAR_10++) {
    if (FUNC_5(VAR_7[VAR_10], "-D") == 0) {
      VAR_8.hexdump_file = VAR_7[++VAR_10];
    } else if (FUNC_5(VAR_7[VAR_10], "-r") == 0) {
      VAR_5.document_root = VAR_7[++VAR_10];
    }
  }

  FUNC_4("Starting web server on port %s\n", VAR_4);
  for (;;) {
    FUNC_2(&VAR_8, 1000);
  }
}

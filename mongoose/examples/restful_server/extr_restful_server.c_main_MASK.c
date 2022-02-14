
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {char* hexdump_file; } ;
struct mg_connection {int dummy; } ;
struct mg_bind_opts {char const** error_string; char const* ssl_cert; } ;
typedef int bind_opts ;
struct TYPE_2__ {char* document_root; char* auth_domain; char* global_auth_file; char* per_directory_auth_file; char* url_rewrites; char* cgi_interpreter; char* enable_directory_listing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (struct mg_bind_opts*,int ,int) ;
 struct mg_connection* FUNC_3 (struct mg_mgr*,char*,int ,struct mg_bind_opts) ;
 int FUNC_4 (struct mg_mgr*) ;
 int FUNC_5 (struct mg_mgr*,int *) ;
 int FUNC_6 (struct mg_mgr*,int) ;
 int FUNC_7 (struct mg_connection*) ;
 int FUNC_8 (char*,char*,char*) ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,int ) ;

int FUNC_11(int VAR_5, char *VAR_6[]) {
  struct mg_mgr VAR_7;
  struct mg_connection *VAR_8;
  struct mg_bind_opts VAR_9;
  int VAR_10;
  char *VAR_11;
  const char *VAR_12;




  FUNC_5(&VAR_7, ((void*)0));


  if (VAR_5 > 0 && ((VAR_11 = FUNC_10(VAR_6[0], VAR_0)) != ((void*)0))) {
    *VAR_11 = '\0';
    VAR_3.document_root = VAR_6[0];
  }


  for (VAR_10 = 1; VAR_10 < VAR_5; VAR_10++) {
    if (FUNC_9(VAR_6[VAR_10], "-D") == 0 && VAR_10 + 1 < VAR_5) {
      VAR_7.hexdump_file = VAR_6[++VAR_10];
    } else if (FUNC_9(VAR_6[VAR_10], "-d") == 0 && VAR_10 + 1 < VAR_5) {
      VAR_3.document_root = VAR_6[++VAR_10];
    } else if (FUNC_9(VAR_6[VAR_10], "-p") == 0 && VAR_10 + 1 < VAR_5) {
      VAR_2 = VAR_6[++VAR_10];
    } else if (FUNC_9(VAR_6[VAR_10], "-a") == 0 && VAR_10 + 1 < VAR_5) {
      VAR_3.auth_domain = VAR_6[++VAR_10];
    } else if (FUNC_9(VAR_6[VAR_10], "-P") == 0 && VAR_10 + 1 < VAR_5) {
      VAR_3.global_auth_file = VAR_6[++VAR_10];
    } else if (FUNC_9(VAR_6[VAR_10], "-A") == 0 && VAR_10 + 1 < VAR_5) {
      VAR_3.per_directory_auth_file = VAR_6[++VAR_10];
    } else if (FUNC_9(VAR_6[VAR_10], "-r") == 0 && VAR_10 + 1 < VAR_5) {
      VAR_3.url_rewrites = VAR_6[++VAR_10];
    } else {
      FUNC_1(VAR_4, "Unknown option: [%s]\n", VAR_6[VAR_10]);
      FUNC_0(1);
    }
  }


  FUNC_2(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.error_string = &VAR_12;





  VAR_8 = FUNC_3(&VAR_7, VAR_2, VAR_1, VAR_9);
  if (VAR_8 == ((void*)0)) {
    FUNC_1(VAR_4, "Error starting server on port %s: %s\n", VAR_2,
            *VAR_9.error_string);
    FUNC_0(1);
  }

  FUNC_7(VAR_8);
  VAR_3.enable_directory_listing = "yes";

  FUNC_8("Starting RESTful server on port %s, serving %s\n", VAR_2,
         VAR_3.document_root);
  for (;;) {
    FUNC_6(&VAR_7, 1000);
  }
  FUNC_4(&VAR_7);

  return 0;
}

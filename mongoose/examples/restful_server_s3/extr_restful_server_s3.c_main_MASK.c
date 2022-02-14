
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {char* hexdump_file; } ;
struct mg_connection {int dummy; } ;
struct TYPE_2__ {char* document_root; char* enable_directory_listing; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 struct mg_connection* FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_mgr*,int) ;
 int FUNC_6 (struct mg_connection*) ;
 int FUNC_7 (char*,char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 TYPE_1__ VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char) ;

int FUNC_10(int VAR_6, char *VAR_7[]) {
  struct mg_mgr VAR_8;
  struct mg_connection *VAR_9;
  int VAR_10;
  char *VAR_11;

  FUNC_4(&VAR_8, ((void*)0));
  VAR_9 = FUNC_2(&VAR_8, VAR_2, VAR_0);
  FUNC_6(VAR_9);
  VAR_3.document_root = ".";
  VAR_3.enable_directory_listing = "yes";


  if (VAR_6 > 0 && ((VAR_11 = FUNC_9(VAR_7[0], '/')) != ((void*)0) ||
                   (VAR_11 = FUNC_9(VAR_7[0], '/')) != ((void*)0))) {
    *VAR_11 = '\0';
    VAR_3.document_root = VAR_7[0];
  }


  for (VAR_10 = 1; VAR_10 < VAR_6; VAR_10++) {
    if (FUNC_8(VAR_7[VAR_10], "-D") == 0 && VAR_10 + 1 < VAR_6) {
      VAR_8.hexdump_file = VAR_7[++VAR_10];
    } else if (FUNC_8(VAR_7[VAR_10], "-p") == 0 && VAR_10 + 1 < VAR_6) {
      VAR_2 = VAR_7[++VAR_10];
    } else if (FUNC_8(VAR_7[VAR_10], "-a") == 0 && VAR_10 + 1 < VAR_6) {
      VAR_1 = VAR_7[++VAR_10];
    } else if (FUNC_8(VAR_7[VAR_10], "-s") == 0 && VAR_10 + 1 < VAR_6) {
      VAR_4 = VAR_7[++VAR_10];
    }
  }

  if (VAR_1 == ((void*)0) || VAR_4 == ((void*)0)) {
    FUNC_1(VAR_5,
            "Usage: %s -a access_key_id -s s_secret_access_key "
            "[-p port] [-D hexdump_file]\n",
            VAR_7[0]);
    FUNC_0(1);
  }

  FUNC_7("Starting RESTful server on port %s\n", VAR_2);
  for (;;) {
    FUNC_5(&VAR_8, 1000);
  }
  FUNC_3(&VAR_8);

  return 0;
}

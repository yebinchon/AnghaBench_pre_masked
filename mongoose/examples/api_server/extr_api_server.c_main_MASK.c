
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mg_mgr {char* hexdump_file; } ;
struct mg_connection {int dummy; } ;
struct TYPE_2__ {char* document_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **) ;
 int * FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 struct mg_connection* FUNC_4 (struct mg_mgr*,char*,int ) ;
 int FUNC_5 (struct mg_mgr*) ;
 int FUNC_6 (struct mg_mgr*,int *) ;
 int FUNC_7 (struct mg_mgr*,int) ;
 int FUNC_8 (struct mg_connection*) ;
 int FUNC_9 (char*,scalar_t__) ;
 int * VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (char*,char*) ;

int FUNC_12(int VAR_11, char *VAR_12[]) {
  struct mg_mgr VAR_13;
  struct mg_connection *VAR_14;
  int VAR_15;


  FUNC_6(&VAR_13, ((void*)0));
  VAR_14 = FUNC_4(&VAR_13, VAR_6, VAR_3);
  FUNC_8(VAR_14);
  VAR_7.document_root = "web_root";


  for (VAR_15 = 1; VAR_15 < VAR_11; VAR_15++) {
    if (FUNC_11(VAR_12[VAR_15], "-D") == 0) {
      VAR_13.hexdump_file = VAR_12[++VAR_15];
    } else if (FUNC_11(VAR_12[VAR_15], "-f") == 0) {
      VAR_5 = VAR_12[++VAR_15];
    } else if (FUNC_11(VAR_12[VAR_15], "-r") == 0) {
      VAR_7.document_root = VAR_12[++VAR_15];
    }
  }

  FUNC_10(VAR_1, VAR_9);
  FUNC_10(VAR_2, VAR_9);


  if ((VAR_4 = FUNC_1(VAR_5)) == ((void*)0)) {
    FUNC_3(VAR_10, "Cannot open DB [%s]\n", VAR_5);
    FUNC_2(VAR_0);
  }


  FUNC_9("Starting RESTful server on port %s\n", VAR_6);
  while (VAR_8 == 0) {
    FUNC_7(&VAR_13, 1000);
  }


  FUNC_5(&VAR_13);
  FUNC_0(&VAR_4);

  FUNC_9("Exiting on signal %d\n", VAR_8);

  return 0;
}

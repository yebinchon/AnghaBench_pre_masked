
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {char* hexdump_file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (struct mg_mgr*,int ,char*,int *,int *) ;
 int FUNC_3 (struct mg_mgr*) ;
 int FUNC_4 (struct mg_mgr*,int *) ;
 int FUNC_5 (struct mg_mgr*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (char*,char*) ;

int FUNC_7(int VAR_6, char *VAR_7[]) {
  struct mg_mgr VAR_8;
  int VAR_9;

  FUNC_4(&VAR_8, ((void*)0));


  for (VAR_9 = 1; VAR_9 < VAR_6; VAR_9++) {
    if (FUNC_6(VAR_7[VAR_9], VAR_4) == 0) {
      VAR_3 = 1;
    } else if (FUNC_6(VAR_7[VAR_9], "--hexdump") == 0 && VAR_9 + 1 < VAR_6) {
      VAR_8.hexdump_file = VAR_7[++VAR_9];
    } else {
      break;
    }
  }

  if (VAR_9 + 1 != VAR_6) {
    FUNC_1(VAR_5, "Usage: %s [%s] [--hexdump <file>] <URL>\n", VAR_7[0],
            VAR_4);
    FUNC_0(VAR_0);
  }

  FUNC_2(&VAR_8, VAR_1, VAR_7[VAR_9], ((void*)0), ((void*)0));

  while (VAR_2 == 0) {
    FUNC_5(&VAR_8, 1000);
  }
  FUNC_3(&VAR_8);

  return 0;
}

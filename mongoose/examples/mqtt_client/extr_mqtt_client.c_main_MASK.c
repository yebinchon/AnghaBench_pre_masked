
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_mgr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int * FUNC_2 (struct mg_mgr*,char*,int ) ;
 int FUNC_3 (struct mg_mgr*,int *) ;
 int FUNC_4 (struct mg_mgr*,int) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(int VAR_7, char **VAR_8) {
  struct mg_mgr VAR_9;
  int VAR_10;

  FUNC_3(&VAR_9, ((void*)0));


  for (VAR_10 = 1; VAR_10 < VAR_7; VAR_10++) {
    if (FUNC_5(VAR_8[VAR_10], "-h") == 0) {
      VAR_2 = VAR_8[++VAR_10];
    } else if (FUNC_5(VAR_8[VAR_10], "-u") == 0) {
      VAR_5 = VAR_8[++VAR_10];
    } else if (FUNC_5(VAR_8[VAR_10], "-t") == 0) {
      VAR_4 = VAR_8[++VAR_10];
    } else if (FUNC_5(VAR_8[VAR_10], "-p") == 0) {
      VAR_3 = VAR_8[++VAR_10];
    }
  }

  if (FUNC_2(&VAR_9, VAR_2, VAR_1) == ((void*)0)) {
    FUNC_1(VAR_6, "mg_connect(%s) failed\n", VAR_2);
    FUNC_0(VAR_0);
  }

  for (;;) {
    FUNC_4(&VAR_9, 1000);
  }
}

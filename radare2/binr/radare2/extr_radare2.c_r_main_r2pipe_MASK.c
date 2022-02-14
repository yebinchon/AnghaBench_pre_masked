
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int,char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(int VAR_0, char **VAR_1) {
        int VAR_2, VAR_3 = 0;
        char *VAR_4 = FUNC_4 ("R2PIPE_IN");
        char *VAR_5 = FUNC_4 ("R2PIPE_OUT");
        if (VAR_4 && VAR_5) {
  int VAR_6 = FUNC_0 (VAR_4);
  int VAR_7 = FUNC_0 (VAR_5);
  for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++) {
   FUNC_3 (VAR_6, VAR_7, VAR_1[VAR_2]);
  }
        } else {
  FUNC_1 ("Error: R2PIPE_(IN|OUT) environment not set\n");
  FUNC_1 ("Usage: r2 -c '!*r2p x' # run commands via r2pipe\n");
                VAR_3 = 1;
 }
 FUNC_2 (VAR_4);
 FUNC_2 (VAR_5);
        return VAR_3;
}

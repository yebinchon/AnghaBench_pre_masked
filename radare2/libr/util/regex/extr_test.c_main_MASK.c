
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RRegex ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char const*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 () ;

int FUNC_5(int VAR_0, char **VAR_1) {
 const char *VAR_2 = "^hi";
 const char *VAR_3 = "patata";
 const char *VAR_4 = "hillow";
 if (VAR_0>3) {
  VAR_2 = VAR_1[1];
  VAR_3 = VAR_1[2];
  VAR_4 = VAR_1[3];
 } else FUNC_0 ("Using default values\n");
 RRegex *VAR_5 = FUNC_3 (VAR_2, "");
 if (VAR_5) {
  int VAR_6 = FUNC_1 (VAR_5, VAR_3, 0, 0, 0);
  FUNC_0 ("result (%s) = %d\n", VAR_3, VAR_6);
  VAR_6 = FUNC_1 (VAR_5, VAR_4, 0, 0, 0);
  FUNC_0 ("result (%s) = %d\n", VAR_4, VAR_6);
  FUNC_2 (VAR_5);
 } else FUNC_0 ("oops, cannot compile regexp\n");
 FUNC_4();
 return 0;
}

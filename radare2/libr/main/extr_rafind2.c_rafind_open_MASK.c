
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int*) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_0) {
 if (!FUNC_6 (VAR_0, "-")) {
  int VAR_1 = 0;
  ut8 *VAR_2 = (ut8 *)FUNC_2 (&VAR_1);
  char *VAR_3 = FUNC_3 ("malloc://%d", VAR_1);
  int VAR_4 = FUNC_5 (VAR_3, VAR_2, VAR_1);
  FUNC_0 (VAR_3);
  FUNC_0 (VAR_2);
  return VAR_4;
 }
 return FUNC_1 (VAR_0)
  ? FUNC_4 (VAR_0)
  : FUNC_5 (VAR_0, ((void*)0), -1);
}

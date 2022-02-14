
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4() {
 char *VAR_0;
 int VAR_1 = 0;
 ut8 *VAR_2 = (ut8 *) FUNC_3 (&VAR_1);
 if (!VAR_2) {
  return 0;
 }
 VAR_0 = FUNC_2 (VAR_2, VAR_1);
 if (!VAR_0) {
  FUNC_0 (VAR_2);
  return 1;
 }
 FUNC_1 (VAR_0);
 FUNC_0 (VAR_0);
 FUNC_0 (VAR_2);
 return 0;
}

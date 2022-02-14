
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char ut8 ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int*) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static int FUNC_4() {
 ut8 *VAR_0;
 int VAR_1, VAR_2 = 1;
 char *VAR_3 = (char *) FUNC_2 (&VAR_1);
 if (VAR_3) {
  VAR_0 = FUNC_1 (VAR_3, &VAR_1);
  if (VAR_0) {
   if (VAR_1 >= 0) {
    FUNC_3 (1, VAR_0, VAR_1);
    VAR_2 = 0;
   }
   FUNC_0 (VAR_0);
  }
  FUNC_0 (VAR_3);
 }
 return VAR_2;
}

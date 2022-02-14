
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;


 int FUNC_0 (char const*,int*,size_t*,int*,int) ;
 int FUNC_1 (int *,char*,int,char const*,...) ;

int
FUNC_2(const char* VAR_0, int* VAR_1) {
 int VAR_2 = 0;
 size_t VAR_3 = sizeof(VAR_2);
 if(VAR_1) {
  int VAR_4 = FUNC_0(VAR_0, &VAR_2, &VAR_3, VAR_1, sizeof(int));
  if(VAR_4 == 0) {
   FUNC_1(((void*)0), "set new value(%d) for (%s) succeed\n", *VAR_1, VAR_0);
  } else {
   FUNC_1(((void*)0), "set new value(%d) for (%s) failed: error -> %d\n", *VAR_1, VAR_0, VAR_4);
  }
 } else {
  FUNC_0(VAR_0, &VAR_2, &VAR_3, ((void*)0), 0);
 }

 return VAR_2;
}

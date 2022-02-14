
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;


 int FUNC_0 (char const*,size_t*,size_t*,size_t*,int) ;

size_t
FUNC_1(const char* VAR_0, size_t* VAR_1) {
 size_t VAR_2 = 0;
 size_t VAR_3 = sizeof(VAR_2);
 if(VAR_1) {
  FUNC_0(VAR_0, &VAR_2, &VAR_3, VAR_1, sizeof(size_t));
 } else {
  FUNC_0(VAR_0, &VAR_2, &VAR_3, ((void*)0), 0);
 }

 return VAR_2;
}

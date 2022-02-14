
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;

const char * FUNC_2(const char * VAR_0) {
 const char * VAR_1 = VAR_0+FUNC_1(VAR_0);
 if(VAR_1>VAR_0) {
  if(!FUNC_0(*VAR_1)) {
   do {
    --VAR_1;
    if(FUNC_0(*VAR_1)) {
     return VAR_1+1;
    }
   } while(VAR_1>VAR_0);
  }
  return VAR_1;
 }
 return VAR_1;
}

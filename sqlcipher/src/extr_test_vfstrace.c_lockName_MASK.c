
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int azLockNames ;



__attribute__((used)) static const char *FUNC_0(int VAR_0){
  const char *VAR_1[] = {
     "NONE", "SHARED", "RESERVED", "PENDING", "EXCLUSIVE"
  };
  if( VAR_0<0 || VAR_0>=sizeof(VAR_1)/sizeof(VAR_1[0]) ){
    return "???";
  }else{
    return VAR_1[VAR_0];
  }
}

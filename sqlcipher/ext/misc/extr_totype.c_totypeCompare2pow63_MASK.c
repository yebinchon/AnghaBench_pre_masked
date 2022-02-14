
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0){
  int VAR_1 = 0;
  int VAR_2;

  const char *VAR_3 = "922337203685477580";
  for(VAR_2=0; VAR_1==0 && VAR_2<18; VAR_2++){
    VAR_1 = (VAR_0[VAR_2]-VAR_3[VAR_2])*10;
  }
  if( VAR_1==0 ){
    VAR_1 = VAR_0[18] - '8';
  }
  return VAR_1;
}

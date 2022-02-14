
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;


 size_t VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const char *VAR_1){
  u16 VAR_2, VAR_3, VAR_4;
  VAR_2 = VAR_3 = VAR_1[0];
  for(VAR_4=1; VAR_4<VAR_0; VAR_4++){
    VAR_2 += VAR_1[VAR_4];
    VAR_3 += VAR_2;
  }
  return VAR_2 | (((u32)VAR_3)<<16);
}

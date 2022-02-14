
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 void* FUNC_2 (int) ;

void *FUNC_3(void *VAR_0, int VAR_1){
  if( VAR_0 ){
    u8 *VAR_2 = (u8*)VAR_0 - 8;
    int VAR_3 = *(int*)VAR_2;
    VAR_2 = (u8*)FUNC_1(VAR_2, VAR_1+8);
    if( VAR_3<VAR_1 ){
      FUNC_0(&VAR_2[8+VAR_3], 0, VAR_1-VAR_3);
    }
    *(int*)VAR_2 = VAR_1;
    return (void*)&VAR_2[8];
  }
  return FUNC_2(VAR_1);
}

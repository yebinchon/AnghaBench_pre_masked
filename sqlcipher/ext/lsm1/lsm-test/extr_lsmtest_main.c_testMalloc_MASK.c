
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;

void *FUNC_2(int VAR_0){
  u8 *VAR_1 = (u8*)FUNC_0(VAR_0 + 8);
  FUNC_1(VAR_1, 0, VAR_0+8);
  *(int*)VAR_1 = VAR_0;
  return (void*)&VAR_1[8];
}

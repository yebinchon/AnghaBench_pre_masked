
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ptrdiff_t ;
typedef int obs_data_item_t ;


 int FUNC_0 (int *,int *,size_t) ;

__attribute__((used)) static inline void FUNC_1(obs_data_item_t *VAR_0, void *VAR_1,
        obs_data_item_t *VAR_2, void *VAR_3, size_t VAR_4)
{
 ptrdiff_t VAR_5 = (uint8_t *)VAR_1 - (uint8_t *)VAR_0;
 ptrdiff_t VAR_6 = (uint8_t *)VAR_3 - (uint8_t *)VAR_2;

 if (!VAR_1)
  return;

 FUNC_0((uint8_t *)VAR_2 + VAR_6, (uint8_t *)VAR_2 + VAR_5,
  VAR_4);
}

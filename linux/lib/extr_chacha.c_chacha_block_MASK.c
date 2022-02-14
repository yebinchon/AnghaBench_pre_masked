
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__,int *) ;

void FUNC_4(u32 *VAR_0, u8 *VAR_1, int VAR_2)
{
 u32 VAR_3[16];
 int VAR_4;

 FUNC_2(VAR_3, VAR_0, 64);

 FUNC_1(VAR_3, VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++)
  FUNC_3(VAR_3[VAR_4] + VAR_0[VAR_4], &VAR_1[VAR_4 * sizeof(u32)]);

 VAR_0[12]++;
}

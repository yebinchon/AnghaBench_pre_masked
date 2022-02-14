
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;

u16 FUNC_1(u32 VAR_1, u32 *VAR_2)
{
 u16 VAR_3 = 0;
 u32 VAR_4 = 0;
 VAR_3 = FUNC_0(VAR_1,
  VAR_0, &VAR_4);
 if (!VAR_3)
  if (VAR_2)
   *VAR_2 = VAR_4;
 return VAR_3;
}

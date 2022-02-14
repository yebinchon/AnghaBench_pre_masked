
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__*,scalar_t__*) ;

u16 FUNC_1(u32 VAR_1, u16 *VAR_2,
 u16 *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 u16 VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_1, VAR_0,
  &VAR_5, &VAR_4);
 if (VAR_2)
  *VAR_2 = (u16)VAR_4;
 if (VAR_3)
  *VAR_3 = (u16)VAR_5;
 return VAR_6;
}

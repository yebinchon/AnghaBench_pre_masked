
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

u8 FUNC_2(void)
{
 u32 VAR_2 = FUNC_0(VAR_1);

 VAR_2 = 1664525 * VAR_2 + 1013904223;
 FUNC_1(VAR_1, VAR_2);

 return (u8)(VAR_2 % (VAR_0 + 1));
}

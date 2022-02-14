
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sprd_mcdt_dev {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct sprd_mcdt_dev *VAR_4, u8 VAR_5)
{
 u32 VAR_6 = VAR_0 + VAR_5 * 8;
 u32 VAR_7 = (FUNC_0(VAR_4->base + VAR_6) >>
        VAR_2) & VAR_1;
 u32 VAR_8 = FUNC_0(VAR_4->base + VAR_6) & VAR_1;

 if (VAR_8 >= VAR_7)
  return 4 * (VAR_8 - VAR_7);
 else
  return 4 * (VAR_3 - VAR_7 + VAR_8);
}

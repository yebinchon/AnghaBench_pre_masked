
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sprd_mcdt_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sprd_mcdt_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct sprd_mcdt_dev *VAR_4, u8 VAR_5,
     u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8 = VAR_0 + VAR_5 * 4;
 u32 VAR_9 =
  (VAR_7 << VAR_2) & VAR_1;

 VAR_9 |= VAR_6 & VAR_3;
 FUNC_0(VAR_4, VAR_8, VAR_9,
    VAR_1 | VAR_3);
}

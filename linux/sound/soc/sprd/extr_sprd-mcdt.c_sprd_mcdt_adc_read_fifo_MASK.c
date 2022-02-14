
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sprd_mcdt_dev {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sprd_mcdt_dev *VAR_1, u8 VAR_2,
        u32 *VAR_3)
{
 u32 VAR_4 = VAR_0 + VAR_2 * 4;

 *VAR_3 = FUNC_0(VAR_1->base + VAR_4);
}

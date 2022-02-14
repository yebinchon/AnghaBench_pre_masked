
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int (* mmd_write ) (struct gsw_mt753x*,int ,int,int ,int ) ;} ;


 int FUNC_0 (struct gsw_mt753x*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gsw_mt753x *VAR_0, u32 VAR_1, u32 VAR_2)
{
 VAR_0->mmd_write(VAR_0, 0, 0x1f, VAR_1, VAR_2);
}

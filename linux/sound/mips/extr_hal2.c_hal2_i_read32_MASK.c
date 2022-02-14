
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct snd_hal2 {struct hal2_ctl_regs* ctl_regs; } ;
struct hal2_ctl_regs {int idr0; int iar; } ;


 int FUNC_0 (struct hal2_ctl_regs*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static u32 FUNC_4(struct snd_hal2 *VAR_0, u16 VAR_1)
{
 u32 VAR_2;
 struct hal2_ctl_regs *VAR_3 = VAR_0->ctl_regs;

 FUNC_3(FUNC_1(VAR_1), &VAR_3->iar);
 FUNC_0(VAR_3);
 VAR_2 = FUNC_2(&VAR_3->idr0) & 0xffff;
 FUNC_3(FUNC_1(VAR_1) | 0x1, &VAR_3->iar);
 FUNC_0(VAR_3);
 VAR_2 |= (FUNC_2(&VAR_3->idr0) & 0xffff) << 16;
 return VAR_2;
}

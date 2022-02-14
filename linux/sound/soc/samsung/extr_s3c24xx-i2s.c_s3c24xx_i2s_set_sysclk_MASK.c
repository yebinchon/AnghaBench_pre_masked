
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4,
 int VAR_5, unsigned int VAR_6, int VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_3.regs + VAR_1);

 VAR_8 &= ~VAR_2;

 switch (VAR_5) {
 case 128:
  break;
 case 129:
  VAR_8 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_8, VAR_3.regs + VAR_1);
 return 0;
}

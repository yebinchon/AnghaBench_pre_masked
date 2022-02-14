
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
 int VAR_3 ;


 unsigned int VAR_4 ;


 unsigned int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_7,
  unsigned int VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_6.regs + VAR_1);
 FUNC_0("hw_params r: IISMOD: %x \n", VAR_9);

 switch (VAR_8 & VAR_5) {
 case 131:
  VAR_9 |= VAR_3;
  break;
 case 130:
  VAR_9 &= ~VAR_3;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_8 & VAR_4) {
 case 128:
  VAR_9 |= VAR_2;
  break;
 case 129:
  VAR_9 &= ~VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_9, VAR_6.regs + VAR_1);
 FUNC_0("hw_params w: IISMOD: %x \n", VAR_9);

 return 0;
}

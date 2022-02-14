
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
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;



 int FUNC_0 (scalar_t__) ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_8,
 int VAR_9, int VAR_10)
{
 u32 VAR_11;

 switch (VAR_9) {
 case 130:
  VAR_11 = FUNC_0(VAR_7.regs + VAR_3) & ~VAR_5;
  FUNC_1(VAR_11 | VAR_10, VAR_7.regs + VAR_3);
  break;
 case 129:
  VAR_11 = FUNC_0(VAR_7.regs + VAR_3) & ~(VAR_4);
  FUNC_1(VAR_11 | VAR_10, VAR_7.regs + VAR_3);
  break;
 case 128:
  FUNC_1(VAR_10, VAR_7.regs + VAR_6);
  VAR_11 = FUNC_0(VAR_7.regs + VAR_1);
  FUNC_1(VAR_11 | VAR_2, VAR_7.regs + VAR_1);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}

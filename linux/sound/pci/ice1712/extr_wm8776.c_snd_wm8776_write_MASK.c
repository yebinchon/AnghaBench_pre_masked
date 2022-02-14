
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* write ) (struct snd_wm8776*,int,int) ;} ;
struct snd_wm8776 {int* regs; TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_wm8776*,int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_wm8776 *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u8 VAR_4 = VAR_2 << 1 | VAR_3 >> 8;
 u8 VAR_5 = VAR_3 & 0xff;

 if (VAR_2 < VAR_0)
  VAR_1->regs[VAR_2] = VAR_3;
 VAR_1->ops.write(VAR_1, VAR_4, VAR_5);
}

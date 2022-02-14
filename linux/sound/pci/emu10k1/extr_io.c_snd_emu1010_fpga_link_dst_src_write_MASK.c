
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_emu10k1 {int dummy; } ;


 int FUNC_0 (struct snd_emu10k1*,int,int) ;

int FUNC_1(struct snd_emu10k1 * VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0, 0x00, ((VAR_1 >> 8) & 0x3f) );
 FUNC_0(VAR_0, 0x01, (VAR_1 & 0x3f) );
 FUNC_0(VAR_0, 0x02, ((VAR_2 >> 8) & 0x3f) );
 FUNC_0(VAR_0, 0x03, (VAR_2 & 0x3f) );

 return 0;
}

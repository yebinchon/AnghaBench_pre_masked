
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;
struct snd_ali {int dummy; } ;


 int FUNC_0 (struct snd_ali*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_ali*) ;

__attribute__((used)) static unsigned int FUNC_4(struct snd_ali *VAR_2)
{
 u32 VAR_3;
 u8 VAR_4;

 VAR_4 = FUNC_1(FUNC_0(VAR_2, VAR_1));
 VAR_4 &= 0x7f;
 VAR_4 |= 0x40;
 FUNC_2(VAR_4, FUNC_0(VAR_2, VAR_1));

 FUNC_3(VAR_2);

 VAR_4 = FUNC_1(FUNC_0(VAR_2, VAR_0 + 3));
 VAR_4 &= 0x0f;

 switch (VAR_4) {
 case 0: VAR_3 = 44100; break;
 case 1: VAR_3 = 48000; break;
 case 2: VAR_3 = 32000; break;
 default: VAR_3 = 0; break;
 }

 return VAR_3;
}

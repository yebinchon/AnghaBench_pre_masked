
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs4231 {unsigned char* image; int calibrate_mute; } ;


 int FUNC_0 (struct snd_cs4231*,unsigned char,unsigned char) ;

__attribute__((used)) static inline void FUNC_1(struct snd_cs4231 *VAR_0, unsigned char VAR_1,
       unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4 = (VAR_0->image[VAR_1] & VAR_2) | VAR_3;

 VAR_0->image[VAR_1] = VAR_4;
 if (!VAR_0->calibrate_mute)
  FUNC_0(VAR_0, VAR_1, VAR_4);
}

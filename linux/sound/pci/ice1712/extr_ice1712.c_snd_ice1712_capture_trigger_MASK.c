
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_pcm_substream {int dummy; } ;
struct snd_ice1712 {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ,int) ;
 struct snd_ice1712* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
           int VAR_5)
{
 struct snd_ice1712 *VAR_6 = FUNC_2(VAR_4);
 int VAR_7 = 0;
 u8 VAR_8;

 FUNC_3(&VAR_6->reg_lock);
 VAR_8 = FUNC_0(VAR_6, VAR_1);
 if (VAR_5 == VAR_2) {
  VAR_8 |= 1;
 } else if (VAR_5 == VAR_3) {
  VAR_8 &= ~1;
 } else {
  VAR_7 = -VAR_0;
 }
 FUNC_1(VAR_6, VAR_1, VAR_8);
 FUNC_4(&VAR_6->reg_lock);
 return VAR_7;
}

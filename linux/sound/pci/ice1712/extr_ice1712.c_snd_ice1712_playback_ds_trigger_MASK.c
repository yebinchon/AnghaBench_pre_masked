
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {int number; } ;
struct snd_ice1712 {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_ice1712*,int,int ) ;
 int FUNC_1 (struct snd_ice1712*,int,int ,int) ;
 struct snd_ice1712* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
        int VAR_7)
{
 struct snd_ice1712 *VAR_8 = FUNC_2(VAR_6);
 int VAR_9 = 0;
 u32 VAR_10;

 FUNC_3(&VAR_8->reg_lock);
 VAR_10 = FUNC_0(VAR_8, VAR_6->number * 2, VAR_1);
 if (VAR_7 == VAR_4) {
  VAR_10 |= 1;
 } else if (VAR_7 == VAR_5) {
  VAR_10 &= ~1;
 } else if (VAR_7 == VAR_2) {
  VAR_10 |= 2;
 } else if (VAR_7 == VAR_3) {
  VAR_10 &= ~2;
 } else {
  VAR_9 = -VAR_0;
 }
 FUNC_1(VAR_8, VAR_6->number * 2, VAR_1, VAR_10);
 FUNC_4(&VAR_8->reg_lock);
 return VAR_9;
}

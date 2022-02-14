
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct es1938 {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct es1938*,int ,int) ;
 struct es1938* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3,
          int VAR_4)
{
 struct es1938 *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 switch (VAR_4) {
 case 130:
 case 131:
  VAR_6 = 0x0f;
  VAR_5->active |= VAR_0;
  break;
 case 129:
 case 128:
  VAR_6 = 0x00;
  VAR_5->active &= ~VAR_0;
  break;
 default:
  return -VAR_1;
 }
 FUNC_0(VAR_5, VAR_2, VAR_6);
 return 0;
}

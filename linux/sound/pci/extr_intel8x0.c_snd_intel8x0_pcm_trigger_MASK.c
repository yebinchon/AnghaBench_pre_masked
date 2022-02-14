
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct intel8x0 {int dummy; } ;
struct ichdev {unsigned long reg_offset; int suspended; scalar_t__ roff_sr; int position; int last_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;






 struct ichdev* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct intel8x0*,scalar_t__) ;
 int FUNC_2 (struct intel8x0*,scalar_t__,unsigned char) ;
 struct intel8x0* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6, int VAR_7)
{
 struct intel8x0 *VAR_8 = FUNC_3(VAR_6);
 struct ichdev *VAR_9 = FUNC_0(VAR_6);
 unsigned char VAR_10 = 0;
 unsigned long VAR_11 = VAR_9->reg_offset;

 switch (VAR_7) {
 case 131:
  VAR_9->suspended = 0;

 case 130:
 case 132:
  VAR_10 = VAR_2 | VAR_5;
  VAR_9->last_pos = VAR_9->position;
  break;
 case 128:
  VAR_9->suspended = 1;

 case 129:
  VAR_10 = 0;
  break;
 case 133:
  VAR_10 = VAR_2;
  break;
 default:
  return -VAR_0;
 }
 FUNC_2(VAR_8, VAR_11 + VAR_3, VAR_10);
 if (VAR_7 == 129) {

  while (!(FUNC_1(VAR_8, VAR_11 + VAR_9->roff_sr) & VAR_1)) ;

  FUNC_2(VAR_8, VAR_11 + VAR_3, VAR_4);
 }
 return 0;
}

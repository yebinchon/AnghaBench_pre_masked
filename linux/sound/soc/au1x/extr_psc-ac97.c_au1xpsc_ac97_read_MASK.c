
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
struct au1xpsc_audio_data {int lock; } ;


 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 unsigned short VAR_0 ;
 int FUNC_2 (unsigned short) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 struct au1xpsc_audio_data* FUNC_5 (struct snd_ac97*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static unsigned short FUNC_10(struct snd_ac97 *VAR_3,
     unsigned short VAR_4)
{
 struct au1xpsc_audio_data *VAR_5 = FUNC_5(VAR_3);
 unsigned short VAR_6, VAR_7;
 unsigned long VAR_8;

 FUNC_4(VAR_2, FUNC_1(VAR_5));
 FUNC_9();

 VAR_6 = VAR_0;
 do {
  FUNC_6(&VAR_5->lock);

  FUNC_4(VAR_1 | FUNC_2(VAR_4),
     FUNC_0(VAR_5));
  FUNC_9();

  VAR_7 = 20;
  do {
   FUNC_8(21);
   if (FUNC_3(FUNC_1(VAR_5)) & VAR_2)
    break;
  } while (--VAR_7);

  VAR_8 = FUNC_3(FUNC_0(VAR_5));

  FUNC_4(VAR_2, FUNC_1(VAR_5));
  FUNC_9();

  FUNC_7(&VAR_5->lock);

  if (VAR_4 != ((VAR_8 >> 16) & 0x7f))
   VAR_7 = 1;

 } while (--VAR_6 && !VAR_7);

 return VAR_6 ? VAR_8 & 0xffff : 0xffff;
}

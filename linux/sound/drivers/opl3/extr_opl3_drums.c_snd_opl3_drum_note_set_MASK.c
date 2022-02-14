
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3_drum_note {unsigned char voice; int octave_f; int fnum; } ;
struct snd_opl3 {int (* command ) (struct snd_opl3*,unsigned short,int ) ;} ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct snd_opl3*,unsigned short,int ) ;
 int FUNC_1 (struct snd_opl3*,unsigned short,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_opl3 *VAR_3,
       struct snd_opl3_drum_note *VAR_4)
{
 unsigned char VAR_5 = VAR_4->voice;
 unsigned short VAR_6;


 VAR_6 = VAR_0 | (VAR_1 + VAR_5);
 VAR_3->command(VAR_3, VAR_6, VAR_4->fnum);


 VAR_6 = VAR_0 | (VAR_2 + VAR_5);
 VAR_3->command(VAR_3, VAR_6, VAR_4->octave_f);
}

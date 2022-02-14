
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {unsigned int Pan; int number; int GVSel; } ;
struct snd_trident {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_trident * VAR_2,
          struct snd_trident_voice * VAR_3,
          unsigned int VAR_4)
{
 VAR_3->Pan = VAR_4;
 FUNC_1(VAR_3->number, FUNC_0(VAR_2, VAR_1));
 FUNC_1(((VAR_3->GVSel & 0x01) << 7) | (VAR_3->Pan & 0x7f),
      FUNC_0(VAR_2, VAR_0 + 3));
}

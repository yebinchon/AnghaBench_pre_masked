
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {unsigned int RVol; int FMC; int CVol; int number; } ;
struct snd_trident {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_trident * VAR_4,
           struct snd_trident_voice * VAR_5,
           unsigned int VAR_6)
{
 VAR_5->RVol = VAR_6;
 FUNC_1(VAR_5->number, FUNC_0(VAR_4, VAR_2));
 FUNC_2(((VAR_5->FMC & 0x0003) << 14) | ((VAR_5->RVol & 0x007f) << 7) |
      (VAR_5->CVol & 0x007f),
      FUNC_0(VAR_4, VAR_4->device == VAR_3 ?
        VAR_1 : VAR_0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident_voice {unsigned int ESO; int Delta; int number; } ;
struct snd_trident {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct snd_trident * VAR_4,
          struct snd_trident_voice * VAR_5,
          unsigned int VAR_6)
{
 VAR_5->ESO = VAR_6;
 FUNC_1(VAR_5->number, FUNC_0(VAR_4, VAR_2));
 if (VAR_4->device != VAR_3) {
  FUNC_3(VAR_5->ESO, FUNC_0(VAR_4, VAR_0) + 2);
 } else {
  FUNC_2(((VAR_5->Delta << 16) & 0xff000000) | (VAR_5->ESO & 0x00ffffff),
       FUNC_0(VAR_4, VAR_1));
 }
}

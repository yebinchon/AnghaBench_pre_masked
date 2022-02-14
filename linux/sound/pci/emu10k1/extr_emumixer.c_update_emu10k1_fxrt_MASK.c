
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (struct snd_emu10k1*,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_emu10k1 *VAR_3, int VAR_4, unsigned char *VAR_5)
{
 if (VAR_3->audigy) {
  FUNC_3(VAR_3, VAR_0, VAR_4,
          FUNC_0(VAR_5));
  FUNC_3(VAR_3, VAR_1, VAR_4,
          FUNC_1(VAR_5));
 } else {
  FUNC_3(VAR_3, VAR_2, VAR_4,
          FUNC_2(VAR_5));
 }
}

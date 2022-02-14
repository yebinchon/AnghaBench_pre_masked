
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_emu8000*,int ) ;
 int FUNC_2 (struct snd_emu8000*,int) ;
 int FUNC_3 (struct snd_emu8000*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct snd_emu8000*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct snd_emu8000 *VAR_4)
{
 FUNC_5(VAR_4, VAR_0, FUNC_0(VAR_0)/4);

 FUNC_4((1024 * 1000) / 44100);
 FUNC_5(VAR_4, VAR_1, FUNC_0(VAR_1)/4);
 FUNC_5(VAR_4, VAR_2, FUNC_0(VAR_2)/4);

 FUNC_1(VAR_4, 0);
 FUNC_2(VAR_4, 0x83);
 FUNC_3(VAR_4, 0x8000);

 FUNC_5(VAR_4, VAR_3, FUNC_0(VAR_3)/4);
}

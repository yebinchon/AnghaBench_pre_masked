
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int port1; } ;


 int FUNC_0 (struct snd_emu8000*) ;
 int FUNC_1 (struct snd_emu8000*,int) ;
 int FUNC_2 (struct snd_emu8000*) ;
 int FUNC_3 (struct snd_emu8000*,int) ;
 int FUNC_4 (struct snd_emu8000*,int) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct snd_emu8000 *VAR_1)
{

 FUNC_1(VAR_1, 0x0059);
 FUNC_3(VAR_1, 0x0020);
 FUNC_4(VAR_1, 0x0000);





 if ((FUNC_0(VAR_1) & 0x007e) != 0x0058)
  return -VAR_0;
 if ((FUNC_2(VAR_1) & 0x0003) != 0x0003)
  return -VAR_0;

 FUNC_5("EMU8000 [0x%lx]: Synth chip found\n",
                    VAR_1->port1);
 return 0;
}

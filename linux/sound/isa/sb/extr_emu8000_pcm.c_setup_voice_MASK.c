
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8k_pcm {unsigned int* panning; unsigned int buf_size; scalar_t__* loop_start; int pitch; struct snd_emu8000* emu; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int,int ) ;
 int FUNC_1 (struct snd_emu8000*,int,int ) ;
 int FUNC_2 (struct snd_emu8000*,int,int) ;
 int FUNC_3 (struct snd_emu8000*,int,int) ;
 int FUNC_4 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_5 (struct snd_emu8000*,int,int ) ;
 int FUNC_6 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_7 (struct snd_emu8000*,int,int) ;
 int FUNC_8 (struct snd_emu8000*,int,int) ;
 int FUNC_9 (struct snd_emu8000*,int,int) ;
 int FUNC_10 (struct snd_emu8000*,int,int) ;
 int FUNC_11 (struct snd_emu8000*,int,int) ;
 int FUNC_12 (struct snd_emu8000*,int,int ) ;
 int FUNC_13 (struct snd_emu8000*,int,int ) ;
 int FUNC_14 (struct snd_emu8000*,int,int ) ;
 int FUNC_15 (struct snd_emu8000*,int,int) ;
 int FUNC_16 (struct snd_emu8000*,int,int) ;
 int FUNC_17 (struct snd_emu8000*,int,int) ;
 int FUNC_18 (struct snd_emu8000*,int,unsigned int) ;
 int FUNC_19 (struct snd_emu8000*,int,int ) ;
 int FUNC_20 (struct snd_emu8000*,int,int ) ;
 int FUNC_21 (struct snd_emu8000*,int,int) ;

__attribute__((used)) static void FUNC_22(struct snd_emu8k_pcm *VAR_0, int VAR_1)
{
 struct snd_emu8000 *VAR_2 = VAR_0->emu;
 unsigned int VAR_3;


 FUNC_8(VAR_2, VAR_1, 0x0080);
 FUNC_21(VAR_2, VAR_1, 0x0000FFFF);
 FUNC_7(VAR_2, VAR_1, 0x0000FFFF);
 FUNC_19(VAR_2, VAR_1, 0);
 FUNC_5(VAR_2, VAR_1, 0);


 FUNC_14(VAR_2, VAR_1, VAR_0->pitch);

 FUNC_10(VAR_2, VAR_1, 0x8000);
 FUNC_3(VAR_2, VAR_1, 0x7f7f);
 FUNC_9(VAR_2, VAR_1, 0x7f7f);
 FUNC_11(VAR_2, VAR_1, 0x8000);
 FUNC_2(VAR_2, VAR_1, 0x7f7f);



 FUNC_17(VAR_2, VAR_1, 0x0);

 FUNC_15(VAR_2, VAR_1, 0x8000);
 FUNC_16(VAR_2, VAR_1, 0x8000);

 FUNC_13(VAR_2, VAR_1, 0);

 FUNC_20(VAR_2, VAR_1, 0);

 FUNC_12(VAR_2, VAR_1, 0);

 VAR_3 = VAR_0->panning[VAR_1];
 VAR_3 = (VAR_3 <<24) | ((unsigned int)VAR_0->loop_start[VAR_1] - 1);
 FUNC_18(VAR_2, VAR_1, VAR_3);

 VAR_3 = 0;
 VAR_3 = (VAR_3 << 24) | ((unsigned int)VAR_0->loop_start[VAR_1] + VAR_0->buf_size - 1);
 FUNC_6(VAR_2, VAR_1, VAR_3);

 VAR_3 = 0;
 VAR_3 = (VAR_3 << 28) | ((unsigned int)VAR_0->loop_start[VAR_1] - 1);
 FUNC_4(VAR_2, VAR_1, VAR_3);

 FUNC_1(VAR_2, VAR_1, 0);
 FUNC_0(VAR_2, VAR_1, 0);
}

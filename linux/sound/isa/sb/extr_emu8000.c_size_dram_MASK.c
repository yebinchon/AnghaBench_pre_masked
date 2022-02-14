
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int dram_checked; int mem_size; int port1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_emu8000*,scalar_t__) ;
 int FUNC_1 (struct snd_emu8000*) ;
 int FUNC_2 (struct snd_emu8000*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct snd_emu8000*) ;
 int FUNC_4 (struct snd_emu8000*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct snd_emu8000*,int,int ) ;
 int FUNC_9 (struct snd_emu8000*) ;
 int FUNC_10 (struct snd_emu8000*) ;
 int FUNC_11 (struct snd_emu8000*) ;

__attribute__((used)) static void
FUNC_12(struct snd_emu8000 *VAR_8)
{
 int VAR_9, VAR_10;

 if (VAR_8->dram_checked)
  return;

 VAR_10 = 0;


 FUNC_8(VAR_8, 0, VAR_4);
 FUNC_8(VAR_8, 1, VAR_3);
 FUNC_2(VAR_8, VAR_0);
 FUNC_4(VAR_8, VAR_5);
 FUNC_9(VAR_8);
 FUNC_11(VAR_8);





 FUNC_0(VAR_8, VAR_0);
 FUNC_3(VAR_8);
 if (FUNC_3(VAR_8) != VAR_5)
  goto skip_detect;
 FUNC_10(VAR_8);

 for (VAR_10 = 512 * 1024; VAR_10 < VAR_1; VAR_10 += 512 * 1024) {







  FUNC_2(VAR_8, VAR_0 + (VAR_10>>1));
  FUNC_4(VAR_8, VAR_6);
  FUNC_11(VAR_8);






  FUNC_0(VAR_8, VAR_0 + (VAR_10>>1));

  FUNC_3(VAR_8);
  if (FUNC_3(VAR_8) != VAR_6)
   break;
  FUNC_10(VAR_8);






  FUNC_0(VAR_8, VAR_0);
  FUNC_3(VAR_8);
  if (FUNC_3(VAR_8) != VAR_5)
   break;
  FUNC_10(VAR_8);


 }

skip_detect:

 for (VAR_9 = 0; VAR_9 < 10000; VAR_9++) {
  if ((FUNC_1(VAR_8) & 0x80000000) == 0)
   break;
  FUNC_6(1);
  if (FUNC_7(VAR_7))
   break;
 }
 FUNC_8(VAR_8, 0, VAR_2);
 FUNC_8(VAR_8, 1, VAR_2);

 FUNC_5("EMU8000 [0x%lx]: %d KiB on-board DRAM detected\n",
      VAR_8->port1, VAR_10/1024);

 VAR_8->mem_size = VAR_10;
 VAR_8->dram_checked = 1;
}

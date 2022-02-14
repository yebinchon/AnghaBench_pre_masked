
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int emu; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (struct snd_emu8000*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_emu8000*,int,int) ;
 int FUNC_3 (struct snd_emu8000*,int,int ) ;
 int FUNC_4 (struct snd_emu8000*,int,int) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int
FUNC_6(struct snd_emu8000 *VAR_1, int VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_5(VAR_1->emu, VAR_3);
  FUNC_4(VAR_1, VAR_3, VAR_2);
 }


 FUNC_3(VAR_1, 30, 0);
 FUNC_2(VAR_1, 30, 0x1d8);
 FUNC_1(VAR_1, 30, 0x1e0);
 FUNC_0(VAR_1, 30, 0x1d8);
 FUNC_3(VAR_1, 31, 0);
 FUNC_2(VAR_1, 31, 0x1d8);
 FUNC_1(VAR_1, 31, 0x1e0);
 FUNC_0(VAR_1, 31, 0x1d8);

 return 0;
}

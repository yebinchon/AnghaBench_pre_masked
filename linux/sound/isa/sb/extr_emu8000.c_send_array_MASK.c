
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int,unsigned short) ;
 int FUNC_1 (struct snd_emu8000*,int,unsigned short) ;
 int FUNC_2 (struct snd_emu8000*,int,unsigned short) ;
 int FUNC_3 (struct snd_emu8000*,int,unsigned short) ;

__attribute__((used)) static void
FUNC_4(struct snd_emu8000 *VAR_0, unsigned short *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned short *VAR_4;

 VAR_4 = VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_4++)
  FUNC_0(VAR_0, VAR_3, *VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_4++)
  FUNC_1(VAR_0, VAR_3, *VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_4++)
  FUNC_2(VAR_0, VAR_3, *VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_4++)
  FUNC_3(VAR_0, VAR_3, *VAR_4);
}

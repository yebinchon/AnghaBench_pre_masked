
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1_memblk {int dummy; } ;
struct snd_emu10k1 {int memhdr; } ;


 int FUNC_0 (struct snd_emu10k1*,int,int) ;
 int FUNC_1 (int ,struct snd_emu10k1_memblk*,int*,int*) ;

__attribute__((used)) static int FUNC_2(struct snd_emu10k1 *VAR_0, struct snd_emu10k1_memblk *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_1(VAR_0->memhdr, VAR_1, &VAR_2, &VAR_3);
 FUNC_0(VAR_0, VAR_2, VAR_3);
 return 0;
}

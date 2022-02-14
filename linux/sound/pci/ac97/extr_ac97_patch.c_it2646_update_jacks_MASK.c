
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 scalar_t__ FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_0)
{

 FUNC_2(VAR_0, 0x76, 1 << 9,
        FUNC_1(VAR_0) ? (1<<9) : 0);

 FUNC_2(VAR_0, 0x76, 1 << 10,
        FUNC_0(VAR_0) ? (1<<10) : 0);
}

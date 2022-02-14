
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_3);
 FUNC_2(VAR_3, VAR_2, 1 << 9,
        VAR_4 ? (1 << 9) : 0);

 VAR_4 = FUNC_0(VAR_3);

 FUNC_2(VAR_3, VAR_0, 1 << 12,
        VAR_4 ? (1 << 12) : 0);

 FUNC_2(VAR_3, VAR_2, 1 << 10,
        VAR_4 ? (1 << 10) : 0);

 FUNC_2(VAR_3, VAR_1, 0x100,
        VAR_4 ? 0 : 0x100);
}

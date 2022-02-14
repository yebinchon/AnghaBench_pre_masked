
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
 int FUNC_2 (struct snd_ac97*) ;
 int FUNC_3 (struct snd_ac97*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_3)
{
 int VAR_4;
 int VAR_5;


 VAR_4 = FUNC_2(VAR_3);

 FUNC_3(VAR_3, VAR_1, (1<<4)|(1<<5),
        VAR_4 ? (1<<5) : (1<<4));

 FUNC_3(VAR_3, VAR_0, 7 << 12,
        VAR_4 ? (2<<12) : (0<<12));

 VAR_4 = FUNC_1(VAR_3);

 FUNC_3(VAR_3, VAR_1, (1<<12)|(1<<13),
        VAR_4 ? (1<<12) : (1<<13));

 FUNC_3(VAR_3, VAR_0, 7 << 4,
        VAR_4 ? (5<<4) : (1<<4));

 VAR_5 = FUNC_0(VAR_3);

 FUNC_3(VAR_3, VAR_2, 1 << 10,
     VAR_5 ? (1<<10) : (0<<10));
}

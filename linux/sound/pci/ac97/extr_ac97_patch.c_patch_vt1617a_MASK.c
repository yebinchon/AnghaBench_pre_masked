
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int* rates; int * build_ops; int ext_id; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_ac97*,int *,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (struct snd_ac97*,int) ;
 int FUNC_3 (struct snd_ac97*,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 * VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;




 VAR_7 = FUNC_1(VAR_6, &VAR_5[0],
       FUNC_0(VAR_5));







 VAR_8 = FUNC_2(VAR_6, 0x5c);
 if (!(VAR_8 & 0x20))
  FUNC_3(VAR_6, 0x5c, 0x20);

 VAR_6->ext_id |= VAR_0;
 VAR_6->rates[VAR_1] = VAR_2 | VAR_3;
 VAR_6->build_ops = &VAR_4;

 return VAR_7;
}

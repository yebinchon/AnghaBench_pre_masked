
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int clock_caps; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_dice*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct snd_dice *VAR_5)
{
 __be32 VAR_6;
 int VAR_7;


 if (VAR_5->clock_caps > 0) {
  VAR_7 = FUNC_1(VAR_5,
      VAR_4,
      &VAR_6, 4);
  if (VAR_7 < 0)
   return VAR_7;
  VAR_5->clock_caps = FUNC_0(VAR_6);
 } else {

  VAR_5->clock_caps = VAR_0 |
       VAR_1 |
       VAR_2 |
       VAR_3;
 }

 return 0;
}

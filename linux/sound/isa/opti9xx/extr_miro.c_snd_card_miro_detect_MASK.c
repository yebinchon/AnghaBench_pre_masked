
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_miro {int dummy; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_miro*,int) ;
 int FUNC_1 (struct snd_miro*) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_3,
    struct snd_miro *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = VAR_2; VAR_5 <= VAR_1; VAR_5++) {

  if ((VAR_6 = FUNC_0(VAR_4, VAR_5)) < 0)
   return VAR_6;

  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6 == 0)
   return 1;
 }

 return -VAR_0;
}

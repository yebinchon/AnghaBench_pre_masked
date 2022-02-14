
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {int playback; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pmac*,int *) ;

__attribute__((used)) static irqreturn_t
FUNC_1(int VAR_1, void *VAR_2)
{
 struct snd_pmac *VAR_3 = VAR_2;
 FUNC_0(VAR_3, &VAR_3->playback);
 return VAR_0;
}

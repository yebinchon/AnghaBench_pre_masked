
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;
struct imx_ssi {int (* ac97_warm_reset ) (struct snd_ac97*) ;} ;


 struct imx_ssi* VAR_0 ;
 int FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_1)
{
 struct imx_ssi *VAR_2 = VAR_0;

 if (VAR_2->ac97_warm_reset)
  VAR_2->ac97_warm_reset(VAR_1);


 FUNC_0(VAR_1, 0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {int card; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int *,int ,int ) ;
 int FUNC_2 (int *,int,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_4)
{
 int VAR_5;


 VAR_5 = FUNC_1(VAR_4->card, "Headphone Jack",
        VAR_0, &VAR_1, VAR_3,
        FUNC_0(VAR_3));
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(&VAR_1, 1, &VAR_2);

 return VAR_5;
}

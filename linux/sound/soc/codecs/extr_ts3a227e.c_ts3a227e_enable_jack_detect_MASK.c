
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts3a227e {struct snd_soc_jack* jack; } ;
struct snd_soc_jack {int jack; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 struct ts3a227e* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct ts3a227e*) ;

int FUNC_3(struct snd_soc_component *VAR_8,
    struct snd_soc_jack *VAR_9)
{
 struct ts3a227e *VAR_10 = FUNC_1(VAR_8);

 FUNC_0(VAR_9->jack, VAR_4, VAR_0);
 FUNC_0(VAR_9->jack, VAR_5, VAR_1);
 FUNC_0(VAR_9->jack, VAR_6, VAR_3);
 FUNC_0(VAR_9->jack, VAR_7, VAR_2);

 VAR_10->jack = VAR_9;
 FUNC_2(VAR_10);

 return 0;
}

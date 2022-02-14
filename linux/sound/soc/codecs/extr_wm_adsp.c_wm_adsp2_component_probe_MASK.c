
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm_adsp {char* name; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_soc_component*,char*) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int FUNC_3 (struct wm_adsp*,struct snd_soc_component*) ;

int FUNC_4(struct wm_adsp *VAR_0, struct snd_soc_component *VAR_1)
{
 char VAR_2[32];

 FUNC_2(VAR_2, FUNC_0(VAR_2), "%s Preload", VAR_0->name);
 FUNC_1(VAR_1, VAR_2);

 FUNC_3(VAR_0, VAR_1);

 VAR_0->component = VAR_1;

 return 0;
}

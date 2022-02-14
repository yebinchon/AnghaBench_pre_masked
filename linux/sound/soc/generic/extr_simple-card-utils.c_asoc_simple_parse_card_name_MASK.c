
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_card {TYPE_1__* dai_link; scalar_t__ name; } ;
typedef int prop ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 (struct snd_soc_card*,char*) ;
 int FUNC_1 (char*,int,char*,char*) ;

int FUNC_2(struct snd_soc_card *VAR_0,
    char *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  VAR_1 = "";


 VAR_2 = FUNC_0(VAR_0, "label");
 if (VAR_2 < 0 || !VAR_0->name) {
  char VAR_3[128];

  FUNC_1(VAR_3, sizeof(VAR_3), "%sname", VAR_1);
  VAR_2 = FUNC_0(VAR_0, VAR_3);
  if (VAR_2 < 0)
   return VAR_2;
 }

 if (!VAR_0->name && VAR_0->dai_link)
  VAR_0->name = VAR_0->dai_link->name;

 return 0;
}

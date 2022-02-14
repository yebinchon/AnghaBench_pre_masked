
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;
struct snd_kcontrol_new {char* name; scalar_t__ index; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct snd_kcontrol_new*,struct snd_kcontrol_new const*,int) ;
 struct snd_kcontrol* FUNC_3 (struct snd_kcontrol_new*,void*) ;

struct snd_kcontrol *FUNC_4(const struct snd_kcontrol_new *VAR_1,
      void *VAR_2, const char *VAR_3,
      const char *VAR_4)
{
 struct snd_kcontrol_new VAR_5;
 struct snd_kcontrol *VAR_6;
 char *VAR_7 = ((void*)0);

 FUNC_2(&VAR_5, VAR_1, sizeof(VAR_5));
 VAR_5.index = 0;

 if (!VAR_3)
  VAR_3 = VAR_5.name;

 if (VAR_4) {
  VAR_7 = FUNC_0(VAR_0, "%s %s", VAR_4, VAR_3);
  if (!VAR_7)
   return ((void*)0);

  VAR_5.name = VAR_7;
 } else {
  VAR_5.name = VAR_3;
 }

 VAR_6 = FUNC_3(&VAR_5, VAR_2);

 FUNC_1(VAR_7);

 return VAR_6;
}

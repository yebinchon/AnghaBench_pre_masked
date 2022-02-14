
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ sname; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dapm_widget*) ;
 struct snd_soc_dapm_widget* FUNC_1 (struct snd_soc_dapm_widget const*,int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static inline struct snd_soc_dapm_widget *FUNC_3(
 const struct snd_soc_dapm_widget *VAR_1)
{
 struct snd_soc_dapm_widget *VAR_2;

 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_1), VAR_0);
 if (!VAR_2)
  return ((void*)0);





 if (VAR_1->sname) {
  VAR_2->sname = FUNC_2(VAR_1->sname, VAR_0);
  if (!VAR_2->sname) {
   FUNC_0(VAR_2);
   return ((void*)0);
  }
 }
 return VAR_2;
}

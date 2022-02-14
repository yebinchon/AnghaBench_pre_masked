
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int id; int name; } ;
struct snd_soc_dapm_context {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,char const*,int ) ;






__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_context *VAR_1,
 struct snd_soc_dapm_widget *VAR_2, struct snd_soc_dapm_widget *VAR_3,
 const char *VAR_4)
{
 bool VAR_5 = 0;
 bool VAR_6 = 0;

 if (!VAR_4)
  return 0;

 switch (VAR_2->id) {
 case 132:
  VAR_5 = 1;
  break;
 default:
  break;
 }

 switch (VAR_3->id) {
 case 129:
 case 128:
 case 131:
 case 130:
  VAR_6 = 1;
  break;
 default:
  break;
 }

 if (VAR_5 && VAR_6) {
  FUNC_0(VAR_1->dev,
   "Direct connection between demux and mixer/mux not supported for path %s -> [%s] -> %s\n",
   VAR_2->name, VAR_4, VAR_3->name);
  return -VAR_0;
 } else if (!VAR_5 && !VAR_6) {
  FUNC_0(VAR_1->dev,
   "Control not supported for path %s -> [%s] -> %s\n",
   VAR_2->name, VAR_4, VAR_3->name);
  return -VAR_0;
 }

 return 0;
}

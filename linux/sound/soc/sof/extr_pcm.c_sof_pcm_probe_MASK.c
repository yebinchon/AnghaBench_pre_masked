
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sof_pdata {int tplg_filename; int tplg_filename_prefix; } ;
struct snd_sof_dev {int dev; struct snd_soc_component* component; struct snd_sof_pdata* pdata; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int runtime_resume; int runtime_suspend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 char* FUNC_1 (int ,int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct snd_sof_dev* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_sof_dev*,char const*) ;
 TYPE_1__* FUNC_5 (struct snd_sof_dev*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_2)
{
 struct snd_sof_dev *VAR_3 = FUNC_3(VAR_2);
 struct snd_sof_pdata *VAR_4 = VAR_3->pdata;
 const char *VAR_5;
 int VAR_6;


 VAR_3->component = VAR_2;

 VAR_5 = FUNC_1(VAR_3->dev, VAR_1,
           "%s/%s",
           VAR_4->tplg_filename_prefix,
           VAR_4->tplg_filename);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "error: failed to load DSP topology %d\n",
   VAR_6);
  return VAR_6;
 }






 if (!FUNC_5(VAR_3)->runtime_suspend || !FUNC_5(VAR_3)->runtime_resume)
  FUNC_2(VAR_3->dev);

 return VAR_6;
}

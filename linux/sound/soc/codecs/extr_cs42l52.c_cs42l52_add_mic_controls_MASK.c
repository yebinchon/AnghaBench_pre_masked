
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs42l52_platform_data {int micb_diff_cfg; int mica_diff_cfg; } ;
struct cs42l52_private {struct cs42l52_platform_data pdata; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct cs42l52_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2)
{
 struct cs42l52_private *VAR_3 = FUNC_2(VAR_2);
 struct cs42l52_platform_data *VAR_4 = &VAR_3->pdata;

 if (!VAR_4->mica_diff_cfg)
  FUNC_1(VAR_2, VAR_0,
         FUNC_0(VAR_0));

 if (!VAR_4->micb_diff_cfg)
  FUNC_1(VAR_2, VAR_1,
         FUNC_0(VAR_1));

 return 0;
}

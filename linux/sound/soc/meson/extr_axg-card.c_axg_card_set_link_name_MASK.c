
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link {char* name; char* stream_name; } ;
struct snd_soc_card {int dev; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ,char*,char const*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_card *VAR_2,
      struct snd_soc_dai_link *VAR_3,
      struct device_node *VAR_4,
      const char *VAR_5)
{
 char *VAR_6 = FUNC_0(VAR_2->dev, VAR_1, "%s.%s",
        VAR_5, VAR_4->full_name);
 if (!VAR_6)
  return -VAR_0;

 VAR_3->name = VAR_6;
 VAR_3->stream_name = VAR_6;

 return 0;
}

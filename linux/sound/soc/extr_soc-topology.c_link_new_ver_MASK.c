
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_tplg {int dev; } ;
struct snd_soc_tplg_stream {int dummy; } ;
struct snd_soc_tplg_link_config_v4 {int * stream; int num_streams; int id; } ;
struct snd_soc_tplg_link_config {int * stream; int num_streams; int id; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct snd_soc_tplg_link_config* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static int FUNC_6(struct soc_tplg *VAR_3,
   struct snd_soc_tplg_link_config *VAR_4,
   struct snd_soc_tplg_link_config **VAR_5)
{
 struct snd_soc_tplg_link_config *VAR_6;
 struct snd_soc_tplg_link_config_v4 *VAR_7;
 int VAR_8;

 *VAR_5 = ((void*)0);

 if (FUNC_4(VAR_4->size) !=
     sizeof(struct snd_soc_tplg_link_config_v4)) {
  FUNC_1(VAR_3->dev, "ASoC: invalid physical link config size\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3->dev, "ASoC: old version of physical link config\n");

 VAR_7 = (struct snd_soc_tplg_link_config_v4 *)VAR_4;
 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->size = FUNC_0(sizeof(*VAR_6));
 VAR_6->id = VAR_7->id;
 VAR_6->num_streams = VAR_7->num_streams;
 for (VAR_8 = 0; VAR_8 < FUNC_4(VAR_6->num_streams); VAR_8++)
  FUNC_5(&VAR_6->stream[VAR_8], &VAR_7->stream[VAR_8],
         sizeof(struct snd_soc_tplg_stream));

 *VAR_5 = VAR_6;
 return 0;
}

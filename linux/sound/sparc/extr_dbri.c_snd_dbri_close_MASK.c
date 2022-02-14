
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_dbri {int dummy; } ;
struct dbri_streaminfo {scalar_t__ offset; int * substream; } ;


 struct dbri_streaminfo* FUNC_0 (struct snd_dbri*,struct snd_pcm_substream*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 struct snd_dbri* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_dbri *VAR_2 = FUNC_2(VAR_1);
 struct dbri_streaminfo *VAR_3 = FUNC_0(VAR_2, VAR_1);

 FUNC_1(VAR_0, "close audio output.\n");
 VAR_3->substream = ((void*)0);
 VAR_3->offset = 0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm {int private_free; } ;
struct snd_card {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 struct snd_pcm* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct snd_pcm*,int) ;
 int FUNC_3 (struct snd_card*,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_3(VAR_5, "PXA2xx-PCM", 0, 1, 1, &VAR_6);
 if (VAR_8)
  goto out;

 VAR_6->private_free = VAR_4;

 VAR_8 = FUNC_1(VAR_5->dev, FUNC_0(32));
 if (VAR_8)
  goto out;

 VAR_7 = VAR_1;
 FUNC_4(VAR_6, VAR_7, &VAR_3);
 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 VAR_7 = VAR_0;
 FUNC_4(VAR_6, VAR_7, &VAR_3);
 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (VAR_8)
  goto out;

 VAR_2 = VAR_6;
 VAR_8 = 0;

 out:
 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct atmel_runtime_data* private_data; } ;
struct atmel_runtime_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct atmel_runtime_data* FUNC_0 (int,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 struct atmel_runtime_data *VAR_6;
 int VAR_7 = 0;

 FUNC_2(VAR_4, &VAR_3);


 VAR_7 = FUNC_1(VAR_5,
      VAR_2);
 if (VAR_7 < 0)
  goto out;

 VAR_6 = FUNC_0(sizeof(struct atmel_runtime_data), VAR_1);
 if (VAR_6 == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_5->private_data = VAR_6;

 out:
 return VAR_7;
}

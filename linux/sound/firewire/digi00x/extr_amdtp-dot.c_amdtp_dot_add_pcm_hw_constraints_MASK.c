
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int dummy; } ;
struct amdtp_stream {int dummy; } ;


 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int) ;

int FUNC_2(struct amdtp_stream *VAR_0,
         struct snd_pcm_runtime *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1, 0, 32, 24);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}

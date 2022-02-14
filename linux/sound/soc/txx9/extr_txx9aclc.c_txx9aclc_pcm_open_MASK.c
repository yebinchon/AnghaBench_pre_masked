
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct txx9aclc_soc_device {struct txx9aclc_dmadata* dmadata; } ;
struct txx9aclc_dmadata {int dummy; } ;
struct snd_pcm_substream {size_t stream; TYPE_1__* runtime; } ;
struct TYPE_2__ {struct txx9aclc_dmadata* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int *) ;
 int VAR_1 ;
 struct txx9aclc_soc_device VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3)
{
 struct txx9aclc_soc_device *VAR_4 = &VAR_2;
 struct txx9aclc_dmadata *VAR_5 = &VAR_4->dmadata[VAR_3->stream];
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3->runtime,
         VAR_0);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_3->runtime->private_data = VAR_5;
 return 0;
}

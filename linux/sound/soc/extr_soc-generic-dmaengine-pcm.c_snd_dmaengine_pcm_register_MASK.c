
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dmaengine_pcm_config {scalar_t__ process; } ;
struct TYPE_2__ {char* debugfs_prefix; } ;
struct dmaengine_pcm {unsigned int flags; TYPE_1__ component; struct snd_dmaengine_pcm_config const* config; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dmaengine_pcm*) ;
 int FUNC_1 (struct dmaengine_pcm*,struct device*,struct snd_dmaengine_pcm_config const*) ;
 int FUNC_2 (struct dmaengine_pcm*) ;
 struct dmaengine_pcm* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device*,TYPE_1__*,int *,int *,int ) ;

int FUNC_5(struct device *VAR_4,
 const struct snd_dmaengine_pcm_config *VAR_5, unsigned int VAR_6)
{
 struct dmaengine_pcm *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;




 VAR_7->config = VAR_5;
 VAR_7->flags = VAR_6;

 VAR_8 = FUNC_1(VAR_7, VAR_4, VAR_5);
 if (VAR_8)
  goto err_free_dma;

 if (VAR_5 && VAR_5->process)
  VAR_8 = FUNC_4(VAR_4, &VAR_7->component,
         &VAR_3,
         ((void*)0), 0);
 else
  VAR_8 = FUNC_4(VAR_4, &VAR_7->component,
         &VAR_2, ((void*)0), 0);
 if (VAR_8)
  goto err_free_dma;

 return 0;

err_free_dma:
 FUNC_0(VAR_7);
 FUNC_2(VAR_7);
 return VAR_8;
}

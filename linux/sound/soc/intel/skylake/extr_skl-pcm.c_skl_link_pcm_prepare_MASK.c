
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {TYPE_2__* runtime; int stream; } ;
struct skl_module_cfg {TYPE_3__* pipe; } ;
struct skl_dev {int dummy; } ;
struct TYPE_6__ {int passthru; } ;
struct TYPE_5__ {TYPE_1__* status; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 struct skl_dev* FUNC_0 (int ) ;
 int FUNC_1 (struct skl_dev*,TYPE_3__*) ;
 struct skl_module_cfg* FUNC_2 (struct snd_soc_dai*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
  struct snd_soc_dai *VAR_2)
{
 struct skl_dev *VAR_3 = FUNC_0(VAR_2->dev);
 struct skl_module_cfg *VAR_4 = ((void*)0);


 VAR_4 = FUNC_2(VAR_2, VAR_1->stream);
 if (VAR_4 && !VAR_4->pipe->passthru &&
  (VAR_1->runtime->status->state == VAR_0))
  FUNC_1(VAR_3, VAR_4->pipe);

 return 0;
}

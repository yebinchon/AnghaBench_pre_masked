
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_sub {int running; int lock; int compr_bytes; int compr_addr; } ;
struct uniphier_aio {TYPE_2__* chip; struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct snd_compr_stream {size_t direction; struct snd_compr_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_compr_runtime {int fragment_size; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;


 int FUNC_0 (struct uniphier_aio_sub*,int) ;
 int FUNC_1 (struct uniphier_aio_sub*,int ,int ,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct uniphier_aio* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_compr_stream *VAR_1,
          int VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct snd_compr_runtime *VAR_4 = VAR_1->runtime;
 struct uniphier_aio *VAR_5 = FUNC_5(VAR_3->cpu_dai);
 struct uniphier_aio_sub *VAR_6 = &VAR_5->sub[VAR_1->direction];
 struct device *VAR_7 = &VAR_5->chip->pdev->dev;
 int VAR_8 = VAR_4->fragment_size, VAR_9 = 0;
 unsigned long VAR_10;

 FUNC_3(&VAR_6->lock, VAR_10);
 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_6, VAR_6->compr_addr, VAR_6->compr_bytes, VAR_8);
  FUNC_0(VAR_6, 1);
  VAR_6->running = 1;

  break;
 case 128:
  VAR_6->running = 0;
  FUNC_0(VAR_6, 0);

  break;
 default:
  FUNC_2(VAR_7, "Unknown trigger(%d)\n", VAR_2);
  VAR_9 = -VAR_0;
 }
 FUNC_4(&VAR_6->lock, VAR_10);

 return VAR_9;
}

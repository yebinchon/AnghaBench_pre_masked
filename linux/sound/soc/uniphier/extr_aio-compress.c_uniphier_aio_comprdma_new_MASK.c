
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_sub {size_t compr_bytes; int * compr_area; int compr_addr; TYPE_2__* swm; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; struct snd_compr* compr; } ;
struct snd_compr {size_t direction; TYPE_1__* card; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ dir; } ;
struct TYPE_3__ {struct device* dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct device*,int *,size_t,int) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (size_t,int ) ;
 struct uniphier_aio* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_6)
{
 struct snd_compr *VAR_7 = VAR_6->compr;
 struct device *VAR_8 = VAR_7->card->dev;
 struct uniphier_aio *VAR_9 = FUNC_6(VAR_6->cpu_dai);
 struct uniphier_aio_sub *VAR_10 = &VAR_9->sub[VAR_7->direction];
 size_t VAR_11 = VAR_0;
 int VAR_12 = VAR_1, VAR_13;

 VAR_13 = FUNC_3(VAR_8, FUNC_0(33));
 if (VAR_13)
  return VAR_13;

 VAR_10->compr_area = FUNC_5(VAR_11, VAR_4);
 if (!VAR_10->compr_area)
  return -VAR_3;

 if (VAR_10->swm->dir == VAR_5)
  VAR_12 = VAR_2;

 VAR_10->compr_addr = FUNC_1(VAR_8, VAR_10->compr_area, VAR_11, VAR_12);
 if (FUNC_2(VAR_8, VAR_10->compr_addr)) {
  FUNC_4(VAR_10->compr_area);
  VAR_10->compr_area = ((void*)0);

  return -VAR_3;
 }

 VAR_10->compr_bytes = VAR_11;

 return 0;
}

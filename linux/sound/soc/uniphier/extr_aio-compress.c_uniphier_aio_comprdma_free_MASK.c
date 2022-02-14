
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_aio_sub {int * compr_area; int compr_bytes; int compr_addr; TYPE_1__* swm; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct snd_soc_pcm_runtime {int cpu_dai; struct snd_compr* compr; } ;
struct snd_compr {size_t direction; TYPE_2__* card; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* dev; } ;
struct TYPE_3__ {scalar_t__ dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,int ,int ,int) ;
 int FUNC_1 (int *) ;
 struct uniphier_aio* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_pcm_runtime *VAR_3)
{
 struct snd_compr *VAR_4 = VAR_3->compr;
 struct device *VAR_5 = VAR_4->card->dev;
 struct uniphier_aio *VAR_6 = FUNC_2(VAR_3->cpu_dai);
 struct uniphier_aio_sub *VAR_7 = &VAR_6->sub[VAR_4->direction];
 int VAR_8 = VAR_0;

 if (VAR_7->swm->dir == VAR_2)
  VAR_8 = VAR_1;

 FUNC_0(VAR_5, VAR_7->compr_addr, VAR_7->compr_bytes, VAR_8);
 FUNC_1(VAR_7->compr_area);
 VAR_7->compr_area = ((void*)0);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_sub {scalar_t__ cstream; scalar_t__ substream; int running; } ;
struct uniphier_aio_chip {int num_aios; struct uniphier_aio* aios; } ;
struct uniphier_aio {struct uniphier_aio_sub* sub; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct uniphier_aio_sub*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uniphier_aio_sub*) ;
 int FUNC_2 (struct uniphier_aio_sub*) ;
 int FUNC_3 (struct uniphier_aio_sub*) ;
 struct uniphier_aio_chip* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3;
 struct uniphier_aio_chip *VAR_5 = FUNC_4(VAR_4);
 irqreturn_t VAR_6 = VAR_1;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_aios; VAR_7++) {
  struct uniphier_aio *VAR_9 = &VAR_5->aios[VAR_7];

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_9->sub); VAR_8++) {
   struct uniphier_aio_sub *VAR_10 = &VAR_9->sub[VAR_8];


   if (!VAR_10->running || !FUNC_3(VAR_10))
    continue;

   if (VAR_10->substream)
    FUNC_2(VAR_10);
   if (VAR_10->cstream)
    FUNC_1(VAR_10);

   VAR_6 = VAR_0;
  }
 }

 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uniphier_aio_pll {int freq; } ;
struct uniphier_aio {TYPE_1__* chip; } ;
struct TYPE_2__ {struct uniphier_aio_pll* plls; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct uniphier_aio *VAR_2, int VAR_3, unsigned int VAR_4)
{
 struct uniphier_aio_pll *VAR_5;
 int VAR_6[] = { 1, 1, 1, 2, };
 int VAR_7[] = { 2, 3, 1, 3, };
 int VAR_8;

 if (!FUNC_1(VAR_2->chip, VAR_3))
  return -VAR_0;

 VAR_5 = &VAR_2->chip->plls[VAR_3];
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++)
  if (VAR_5->freq * VAR_6[VAR_8] / VAR_7[VAR_8] == VAR_4)
   return VAR_8;

 return -VAR_1;
}
